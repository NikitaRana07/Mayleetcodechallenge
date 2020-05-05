class Solution {
public:
    int findComplement(int N) {
    int comp = 1;
    while (comp < N) {
        comp = (comp << 1) | 1;
    }
    return N ^ comp;
    }
};
