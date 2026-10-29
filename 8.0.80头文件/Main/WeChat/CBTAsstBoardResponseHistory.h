@interface CBTAsstBoardResponseHistory : NSObject
{
    CBTAsstBoardResponseHistoryNode * _currentNode; // +0x8
    unsigned long long _totalCount; // +0x10
    CBTAsstBoardResponseHistoryNode * _headNode; // +0x18
}
- (void)appendNodeWithViewModels:(id)arg1;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (id)goBack;
- (id)goForward;
- (unsigned long long)calculateTotalCount;
- (id)currentNode;
- (void)setCurrentNode:(id)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (id)headNode;
- (void)setHeadNode:(id)arg1;
- (void).cxx_destruct;
@end
