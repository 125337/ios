@interface CBTAsstBoardLiveWindowState : NSObject
{
    BOOL _noMoreHistory; // +0x8
    NSMutableArray * _viewModels; // +0x10
    UserCardPageContext * _upPageContext; // +0x18
    NSMutableSet * _dirtyHeightViewModels; // +0x20
    NSMutableArray * _pendingDidInsertViewModels; // +0x28
    CBTAsstNewerHistoryPagingContext * _newerHistoryPagingContext; // +0x30
}
- (id)init;
- (id)viewModels;
- (void)setViewModels:(id)arg1;
- (id)upPageContext;
- (void)setUpPageContext:(id)arg1;
- (BOOL)noMoreHistory;
- (void)setNoMoreHistory:(BOOL)arg1;
- (id)dirtyHeightViewModels;
- (void)setDirtyHeightViewModels:(id)arg1;
- (id)pendingDidInsertViewModels;
- (void)setPendingDidInsertViewModels:(id)arg1;
- (id)newerHistoryPagingContext;
- (void)setNewerHistoryPagingContext:(id)arg1;
- (void).cxx_destruct;
@end
