class BinaryTree
{
    private:
        std::vector<int> tree;

        void _printDepthFirst( int index )
        {
            if( index <= tree.size() )
            {
                std::cout << tree[index-1] << "\n";
                _printDepthFirst( 2*( index ) );
                _printDepthFirst( 2*( index ) + 1 );
            }
        }

    public:
        BinaryTree()
        {

        }

        ~BinaryTree()
        {

        }

        void push(int v)
        {
            tree.push_back( v );
        }

        void printBreadthFirst()
        {
            for(int i = 0; i < tree.size(); ++i)
            {
                std::cout << tree[i] << "\n";
            }
        }

        void printDepthFirst()
        {
            _printDepthFirst(1);
        }

        int getSize()
        {
            return tree.size();
        }

        void remove(int index)
        {
            std::vector<int>::iterator pos = tree.begin();
            std::advance( pos, index );
            tree.erase( pos );
        }
};
