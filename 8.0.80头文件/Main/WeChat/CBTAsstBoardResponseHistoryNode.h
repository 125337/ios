@interface CBTAsstBoardResponseHistoryNode : NSObject
{
    NSArray * _viewModels; // +0x8
    CBTAsstBoardResponseHistoryNode * _prev; // +0x10
    CBTAsstBoardResponseHistoryNode * _next; // +0x18
}
- (id)viewModels;
- (void)setViewModels:(id)arg1;
- (id)prev;
- (void)setPrev:(id)arg1;
- (id)next;
- (void)setNext:(id)arg1;
- (void).cxx_destruct;
@end
