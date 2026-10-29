@interface WAMainFrameDesktopContainerView : UIView <UIGestureRecognizerDelegate, WAMainFrameDesktopWeAppViewControllerDelegate>
{
    UIView * _blurView; // +0x8
    UIView * _transformContainerView; // +0x10
    WAMainFrameDesktopWeAppViewController * _weAppVC; // +0x18
    BOOL _isMyWeApp; // +0x20
    BOOL _shouldRecoverLeftButton; // +0x21
    id <WAMainFrameDesktopContainerViewDelegate> _delegate; // +0x28
    MMUIViewController * _containerVC; // +0x30
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x38
    unsigned long long _backAction; // +0x40
    NSString * _openSession; // +0x48
    UISearchBar * _realSearchBar; // +0x50
    UIView * _fakeTopTitleView; // +0x58
    UIImageView * _fakeTopTitleIcon; // +0x60
    UILabel * _fakeTopTitleLabel; // +0x68
    UIView * _fakeTopTitleSeperateLine; // +0x70
    UIBarButtonItem * _savedLeftButtonItem; // +0x78
}
- (id)init;
- (void)initView;
- (void)initContentView;
- (void)initFakeTopTitleView;
- (void)setContainerVC:(id)arg1;
- (void)updateAlphaProgress:(double)arg1;
- (void)layoutSubviews;
- (void)switchWeAppType:(BOOL)arg1;
- (void)reset;
- (void)onBack;
- (void)showFakeLeftButton;
- (void)showRealLeftButton;
- (void)setCloseLeftButton;
- (void)animateToShow:(BOOL)arg1 sessionId:(id)arg2 scrollToBottom:(BOOL)arg3;
- (void)doShowAnimate;
- (void)animateToHide;
- (void)initRealSearchBarViewIfNeeded;
- (void)onTapSearchArea;
- (void)onDragUpToClose;
- (void)notifyWeAppChanged;
- (void)handlerScreenEdgeGesture:(id)arg1;
- (BOOL)isSweepFastInVelocity:(CGPoint)arg1;
- (id)getReportSessionId;
- (void)reportExposure;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerVC;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (unsigned long long)backAction;
- (void)setBackAction:(unsigned long long)arg1;
- (BOOL)isMyWeApp;
- (void)setIsMyWeApp:(BOOL)arg1;
- (id)openSession;
- (void)setOpenSession:(id)arg1;
- (id)realSearchBar;
- (void)setRealSearchBar:(id)arg1;
- (id)fakeTopTitleView;
- (void)setFakeTopTitleView:(id)arg1;
- (id)fakeTopTitleIcon;
- (void)setFakeTopTitleIcon:(id)arg1;
- (id)fakeTopTitleLabel;
- (void)setFakeTopTitleLabel:(id)arg1;
- (id)fakeTopTitleSeperateLine;
- (void)setFakeTopTitleSeperateLine:(id)arg1;
- (id)savedLeftButtonItem;
- (void)setSavedLeftButtonItem:(id)arg1;
- (BOOL)shouldRecoverLeftButton;
- (void)setShouldRecoverLeftButton:(BOOL)arg1;
- (void).cxx_destruct;
@end
