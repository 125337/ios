@interface MMLiveOnlineStateView : MMLiveHalfScreenPanelView <MMLiveHalfScreenTitleBarViewDelegate, UIGestureRecognizerDelegate, ILinkEventExt, MMLiveOnlineUserLogicDelegate>
{
    UIScrollView * _onlineUsersScrollView; // +0x8
    UIView * _onlineContentView; // +0x10
    MMLiveHalfScreenTitleBarView * _titleBar; // +0x18
    MMLiveOnlineUserLogic * _onlineUserLogic; // +0x20
    id <MMLiveOnlineStateViewDelegate> _delegate; // +0x28
    unsigned long long _onlineViewCount; // +0x30
    long long _onlineUserCount; // +0x38
    MMLoadingView * _loadingView; // +0x40
    double _viewTopAtPanBegin; // +0x48
    double _previousPanPositionY; // +0x50
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)dealloc;
- (id)getOnlineButtonTitle:(unsigned long long)arg1;
- (void)initView;
- (void)layoutContentView;
- (void)layoutSubviews;
- (id)createNoUserLabel;
- (BOOL)kickAudience:(id)arg1;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)openWithAnimation:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)fetchOnlineUserList;
- (void)reloadData;
- (void)startLoading;
- (void)stopLoading:(BOOL)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (BOOL)shouldInstallCollectionViewInteractivePan;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)handleOnlineContentViewPanGesture:(id)arg1;
- (void)handleCollectionViewPanGesture:(id)arg1;
- (id)onlineUsersScrollView;
- (id)onlineContentView;
- (void)setOnlineContentView:(id)arg1;
- (id)titleBar;
- (void)setTitleBar:(id)arg1;
- (id)onlineUserLogic;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)onlineViewCount;
- (void)setOnlineViewCount:(unsigned long long)arg1;
- (long long)onlineUserCount;
- (void)setOnlineUserCount:(long long)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (double)viewTopAtPanBegin;
- (void)setViewTopAtPanBegin:(double)arg1;
- (double)previousPanPositionY;
- (void)setPreviousPanPositionY:(double)arg1;
- (void).cxx_destruct;
@end

