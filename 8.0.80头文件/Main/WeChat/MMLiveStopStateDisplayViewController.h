@interface MMLiveStopStateDisplayViewController : MMUIViewController <MMScrollActionSheetDelegate, MMFinderMenuActionDelegate, ForwardMessageLogicDelegate>
{
    BOOL _useVerticalFullscreenMinimization; // +0x70
    BOOL _isMovingToNewScene; // +0x71
    int _commentScene; // +0x74
    MMLiveTask * _liveTask; // +0x78
    NSMutableArray * _liveContentVMs; // +0x80
    long long _currentIndex; // +0x88
    long long _tabType; // +0x90
    UIImage * _lastFrameImage; // +0x98
    MMFinderLiveRouterParams * _routeParam; // +0xa0
    MMLiveMoreLivesIndicatorBar * _moreLivesIndicatorBar; // +0xa8
    unsigned long long _interruptBusinessType; // +0xb0
    UIView * _backMaskView; // +0xb8
    UILabel * _tipLabel; // +0xc0
    UILabel * _subTipLabel; // +0xc8
    UIImageView * _lastFrameImageView; // +0xd0
    MMFinderLiveHeaderView * _liveHeaderView; // +0xd8
    WCLiveScrollActionSheet * _settingScrollActionSheet; // +0xe0
    NSString * _subTipContent; // +0xe8
}
- (id)initWithLiveTask:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)viewWillAppear:(BOOL)arg1;
- (void)layoutLastFrameImageView;
- (void)layoutBackMaskView;
- (void)layoutTipLabel;
- (void)layoutSubTipLabel;
- (void)updateTipLabelOrigin;
- (void)layoutHeaderView;
- (void)layoutMoreLivesIndicatorBar;
- (BOOL)isLiveCommentSceneCanShowMoreLive;
- (void)addRestartGesture;
- (void)onActionButtonClick;
- (void)onCloseButtonClick;
- (void)onHeadImageOrLabelClick:(id)arg1;
- (void)onFollowButtonClick:(id)arg1;
- (void)onFollowingButtonClick:(id)arg1;
- (void)gotoAnchorProfileView:(id)arg1;
- (void)gotoMoreLive;
- (void)onTapGesture;
- (void)restartLive;
- (id)finderLiveTask;
- (void)setInterruptBusinessType:(unsigned long long)arg1;
- (void)updateSubTipContent;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)shareToFriend;
- (void)shareToMoment;
- (void)shareToTextState;
- (void)trySharingToTextStateWithBlock:(id /* block */)arg1;
- (void)complaintEntry;
- (void)gotoLotteryWinRecordViewController;
- (void)openTrumpetSelectViewController;
- (void)changeToOtherAppScene;
- (void)onContactClick:(id)arg1 index:(unsigned long long)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)didMoveToNewScene:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)liveContentVMs;
- (void)setLiveContentVMs:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)useVerticalFullscreenMinimization;
- (void)setUseVerticalFullscreenMinimization:(BOOL)arg1;
- (id)lastFrameImage;
- (void)setLastFrameImage:(id)arg1;
- (id)routeParam;
- (void)setRouteParam:(id)arg1;
- (id)moreLivesIndicatorBar;
- (void)setMoreLivesIndicatorBar:(id)arg1;
- (unsigned long long)interruptBusinessType;
- (BOOL)isMovingToNewScene;
- (void)setIsMovingToNewScene:(BOOL)arg1;
- (id)backMaskView;
- (void)setBackMaskView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)subTipLabel;
- (void)setSubTipLabel:(id)arg1;
- (id)lastFrameImageView;
- (void)setLastFrameImageView:(id)arg1;
- (id)liveHeaderView;
- (void)setLiveHeaderView:(id)arg1;
- (id)settingScrollActionSheet;
- (void)setSettingScrollActionSheet:(id)arg1;
- (id)subTipContent;
- (void)setSubTipContent:(id)arg1;
- (void).cxx_destruct;
@end
