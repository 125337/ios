@interface CBTOwnMomentView : MMUIView <ICBTMomentExt, CBTMomentListTableViewDelegate>
{
    BOOL _hasLoadedAllOwnMoments; // +0x8
    BOOL _hasNoMoreOwnMoments; // +0x9
    BOOL _isFetchingOwnMoments; // +0xa
    MMUIButton * _backButton; // +0x10
    MMUILabel * _naviTitleLabel; // +0x18
    id <CBTOwnMomentViewDelegate> _delegate; // +0x20
    CBTMomentListTableView * _momentTableView; // +0x28
    long long _incrementalMomentMaxIndex; // +0x30
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)layoutBackBtn;
- (void)layoutNaviTitleLabel;
- (void)layoutMomentTableView;
- (void)dealloc;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onLoadMoments:(int)arg1 momentModel:(id)arg2 isFirstLoad:(BOOL)arg3 cursorId:(id)arg4;
- (void)onClickBackButton;
- (void)handleScreenEdgePan:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)naviTitleLabel;
- (void)setNaviTitleLabel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)momentTableView;
- (void)setMomentTableView:(id)arg1;
- (long long)incrementalMomentMaxIndex;
- (void)setIncrementalMomentMaxIndex:(long long)arg1;
- (BOOL)hasLoadedAllOwnMoments;
- (void)setHasLoadedAllOwnMoments:(BOOL)arg1;
- (BOOL)hasNoMoreOwnMoments;
- (void)setHasNoMoreOwnMoments:(BOOL)arg1;
- (BOOL)isFetchingOwnMoments;
- (void)setIsFetchingOwnMoments:(BOOL)arg1;
- (id)screenEdgePanGesture;
- (void)setScreenEdgePanGesture:(id)arg1;
- (void).cxx_destruct;
@end
