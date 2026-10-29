@interface StrongNotificationViewController : MMWindowViewController <UISearchBarDelegate, IStrongNotificationMgrExt, UITableViewDataSource, UITableViewDelegate>
{
    MMUIView * m_maskView; // +0x80
    MMUIButton * m_closeButton; // +0x88
    MMUIView * m_topView; // +0x90
    MMUILabel * m_topViewTitleLabel; // +0x98
    MMUIButton * m_topViewTitleLabelBn; // +0xa0
    UIImageView * m_logoImageView; // +0xa8
    MMTimer * m_stopPlaySoundAndAppVibrationTimer; // +0xb0
    AVAudioPlayer * m_player; // +0xb8
    BOOL m_isHadPlaySoundAndAppVibration; // +0xc0
    NSArray * m_strongNotificationItemAndMessageArray; // +0xc8
    MMTableView * m_tableView; // +0xd0
    NSMutableDictionary * m_cellHeightDic; // +0xd8
    BOOL _hideTopView; // +0xe0
    BOOL _ignorePlaySoundAndAppVibration; // +0xe1
    BOOL _dragging; // +0xe2
    BOOL _orientationUpdatePending; // +0xe3
    BOOL _doingCloseAnimation; // +0xe4
    BOOL _doingShowAnimation; // +0xe5
    BOOL _preparingShowAnimation; // +0xe6
    StrongNotificationContentView * m_contentView; // +0xe8
    id <StrongNotificationViewControllerDelegate> _m_delegate; // +0xf0
    NSMutableArray * _arrExposeLiveTid; // +0xf8
    FakeStrongNotificationViewController * _fakeViewController; // +0x100
    StrongNotificationContentView * _fakeContentView; // +0x108
    double _lastMeasuredContentWidth; // +0x110
}
- (id)init;
- (void)setupNotificationItemAndMessageArrayAndFakeViews;
- (void)setupFakeViews;
- (void)layoutFakeViews;
- (void)tryUpdateResource;
- (void)initContentView;
- (void)initTableView;
- (void)initView;
- (void)initTopView;
- (void)initCloseButton;
- (double)getTopViewHeight;
- (void)makeConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)isAnimating;
- (void)scheduleOrientationUpdate;
- (void)onDeviceOrientationDidChange:(id)arg1;
- (void)onMainWindowFrameChangedFrom:(CGRect)arg1 to:(CGRect)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldHandleStatusBarAppearance;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2 showEndEditing:(BOOL)arg3;
- (id)getContentView;
- (double)getContentWidth;
- (double)getContentTop;
- (void)reloadTableView;
- (void)updateContentLayout;
- (double)calculateAllCellHeight;
- (void)reloadTopViewTitleLabel;
- (void)reloadTableData;
- (id)getFeedIDWithMessageWrap:(id)arg1;
- (id)getNonceIDWithMessageWrap:(id)arg1;
- (id)getLiveIDWithMessageWrap:(id)arg1;
- (id)getRoamTableViewCellWithCellIdentifier:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getWeAppTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateWeAppTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getNormalTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateNormalTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getWeAppSubscriptionTableViewCellWithCellIdentifier:(id)arg1 indexPath:(id)arg2;
- (id)getFinderLiveTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateFinderLiveTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getFinderPushTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateFinderPushTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getFinderUnreadMsgTableViewCellWithIndexPath:(id)arg1;
- (id)getScheduleTableViewCellWithIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)doCloseStrongNotificationAnimationIfNeeded:(id)arg1;
- (void)doAddNewStrongNotificationAnimationIfNeeded;
- (void)scrollClickClose;
- (void)onClickClose;
- (void)doClickClose;
- (void)doClickTopViewTitleLabel;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)jumpMsgContentViewController:(id)arg1;
- (void)jumpFinderLiveOpWrap:(id)arg1;
- (id)genLiveRoomAlternativeDataItem:(id)arg1;
- (void)jumpFinderViewWithMsg:(id)arg1;
- (void)reloadFinderLiveData;
- (void)reportFinderLiveExposeIfNeeded;
- (void)closeFinderUnreadMsg:(id)arg1;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)onModifyStrongNotification:(id)arg1 contactUserName:(id)arg2;
- (void)startStopPlaySoundAndAppVibrationTimer;
- (void)stopPlaySoundAndAppVibrationTimerAction;
- (void)checkNeedAsyncPlaySound;
- (void)stopPlaySoundAndAppVibration;
- (void)asyncPlaySound:(id)arg1;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)stopPlaySound;
- (BOOL)isFinderLiveStrongNotification:(id)arg1;
- (void)onEnterBackground;
- (id)m_contentView;
- (void)setM_contentView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)hideTopView;
- (void)setHideTopView:(BOOL)arg1;
- (BOOL)ignorePlaySoundAndAppVibration;
- (void)setIgnorePlaySoundAndAppVibration:(BOOL)arg1;
- (id)arrExposeLiveTid;
- (void)setArrExposeLiveTid:(id)arg1;
- (id)fakeViewController;
- (void)setFakeViewController:(id)arg1;
- (id)fakeContentView;
- (void)setFakeContentView:(id)arg1;
- (BOOL)dragging;
- (void)setDragging:(BOOL)arg1;
- (double)lastMeasuredContentWidth;
- (void)setLastMeasuredContentWidth:(double)arg1;
- (BOOL)orientationUpdatePending;
- (void)setOrientationUpdatePending:(BOOL)arg1;
- (BOOL)doingCloseAnimation;
- (void)setDoingCloseAnimation:(BOOL)arg1;
- (BOOL)doingShowAnimation;
- (void)setDoingShowAnimation:(BOOL)arg1;
- (BOOL)preparingShowAnimation;
- (void)setPreparingShowAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
