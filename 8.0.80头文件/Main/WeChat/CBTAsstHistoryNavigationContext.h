@interface CBTAsstHistoryNavigationContext : NSObject
{
    BOOL _previousNoMoreHistory; // +0x8
    NSArray * _targetHistoryViewModels; // +0x10
    CBTAsstBoardBaseViewModel * _targetHistoryViewModel; // +0x18
    NSMutableArray * _previousViewModels; // +0x20
    CBTAsstNewerHistoryPagingContext * _previousNewerHistoryPagingContext; // +0x28
    UserCardPageContext * _previousHistoryUpPageContext; // +0x30
    UserCardPageContext * _targetHistoryUpPageContext; // +0x38
    UserCardPageContext * _targetHistoryDownPageContext; // +0x40
}
- (id)targetHistoryViewModels;
- (void)setTargetHistoryViewModels:(id)arg1;
- (id)targetHistoryViewModel;
- (void)setTargetHistoryViewModel:(id)arg1;
- (id)previousViewModels;
- (void)setPreviousViewModels:(id)arg1;
- (id)previousNewerHistoryPagingContext;
- (void)setPreviousNewerHistoryPagingContext:(id)arg1;
- (id)previousHistoryUpPageContext;
- (void)setPreviousHistoryUpPageContext:(id)arg1;
- (BOOL)previousNoMoreHistory;
- (void)setPreviousNoMoreHistory:(BOOL)arg1;
- (id)targetHistoryUpPageContext;
- (void)setTargetHistoryUpPageContext:(id)arg1;
- (id)targetHistoryDownPageContext;
- (void)setTargetHistoryDownPageContext:(id)arg1;
- (void).cxx_destruct;
@end
