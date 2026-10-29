@interface MMFinderLiveConnectMicBaseContainerView : UIView
{
    MMFinderLiveTaskId * _taskId; // +0x8
    id <MMFinderLiveConnectedMicUserCellViewDelegate> _cellActionDelegate; // +0x10
    id <MMFinderLiveConnectMicContainerViewDelegate> _containerDelegate; // +0x18
    UIScrollView * _mainScrollView; // +0x20
    NSArray * _connectMicUserList; // +0x28
}
+ (id)createSearchBarWithFrame:(CGRect)arg1 placeholder:(id)arg2;
+ (void)updateSearchBarAppearance:(id)arg1;
- (void)onContainerWillShow;
- (void)onContainerDidShow;
- (void)onContainerWillHide;
- (void)onContainerDidHide;
- (void)onContainerWillDisappear;
- (void)reloadContent;
- (void)updateWithConnectMicUserList:(id)arg1;
- (void)scrollListToTopAnimated:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)cellActionDelegate;
- (void)setCellActionDelegate:(id)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (id)mainScrollView;
- (id)connectMicUserList;
- (void).cxx_destruct;
@end

