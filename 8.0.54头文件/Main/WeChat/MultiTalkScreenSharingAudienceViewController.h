@interface MultiTalkScreenSharingAudienceViewController : MMUIViewController <MultiTalkScreenSharingAudienceViewDelegate>
{
    BOOL _isLandscapeModeAllowed; // +0x68
    BOOL _isEnable; // +0x69
    BOOL _shouldHideBlurAfterAnimation; // +0x6a
    id <MultiTalkScreenSharingAudienceViewControllerDelegate> _delegate; // +0x70
    id _videoMember; // +0x78
    MultiTalkScreenSharingAudienceView * _mainView; // +0x80
    UIView * _bottomOperationPanelContainerView; // +0x88
    MultiTalkBottomOperatePanel * _bottomOperatePanel; // +0x90
    NSObject<MultiTalkMemberProtocol> * _selectedMember; // +0x98
    WCVideoOpenglRender * _selectedMemberVideoRender; // +0xa0
    UIView * _selectedMemberCell; // +0xa8
    long long _lastInterfaceOrientation; // +0xb0
}
- (void)handleScreenEdgePanGesture:(id)arg1;
- (id)mainView;
- (void)reloadMainViewIfNeed;
- (id)bottomOperationPanelContainerView;
- (void)reloadBottomOperatePanelIfNeed;
- (void)reloadWithScene:(unsigned long long)arg1;
- (void)reloadIfNeed;
- (void)presentInViewController:(id)arg1 withSelectedMember:(id)arg2 selectedMemberVideoRender:(id)arg3 selectedMemberCell:(id)arg4 videoMember:(id)arg5 shouldHideBlurAfterAnimation:(BOOL)arg6 bottomOperatePanel:(id)arg7;
- (void)dismisswithSelectedMember:(id)arg1 selectedMemberVideoRender:(id)arg2 selectedMemberCell:(id)arg3 videoMember:(id)arg4 shouldHideBlurAfterAnimation:(BOOL)arg5 completion:(id /* block */)arg6;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)setupContentInterfaceOrientation:(long long)arg1 width:(double)arg2 height:(double)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)sharingScreenAudienceViewDidClose:(id)arg1;
- (void)sharingScreenAudienceView:(id)arg1 didTapToChangeOperationViewsAppearance:(BOOL)arg2;
- (void)sharingScreenAudienceViewDidOrientationManually:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)videoMember;
- (void)setVideoMember:(id)arg1;
- (BOOL)isLandscapeModeAllowed;
- (void)setIsLandscapeModeAllowed:(BOOL)arg1;
- (void)setMainView:(id)arg1;
- (void)setBottomOperationPanelContainerView:(id)arg1;
- (id)bottomOperatePanel;
- (void)setBottomOperatePanel:(id)arg1;
- (BOOL)isEnable;
- (void)setIsEnable:(BOOL)arg1;
- (id)selectedMember;
- (void)setSelectedMember:(id)arg1;
- (id)selectedMemberVideoRender;
- (void)setSelectedMemberVideoRender:(id)arg1;
- (id)selectedMemberCell;
- (void)setSelectedMemberCell:(id)arg1;
- (BOOL)shouldHideBlurAfterAnimation;
- (void)setShouldHideBlurAfterAnimation:(BOOL)arg1;
- (long long)lastInterfaceOrientation;
- (void)setLastInterfaceOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

