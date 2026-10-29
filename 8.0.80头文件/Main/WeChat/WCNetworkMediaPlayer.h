@interface WCNetworkMediaPlayer : MMUIViewController <WCNetworkMediaCoreDelegate, WCNetworkMediaInfoDelegate, WCActionSheetDelegate, IVOIPUILogicMgrExt, WCCommitViewResultDelegate, ForwardMessageLogicDelegate>
{
    UINavigationController * _shareToUserNavController; // +0x70
    UINavigationController * _shareToTimelineNavController; // +0x78
    BOOL m_bIsFromTimeLine; // +0x80
    BOOL m_bShouldBeFirstFrame; // +0x81
    ForwardMessageLogicController * m_forwardLogic; // +0x88
    int retryCount; // +0x90
    BOOL m_bForbidFavMenu; // +0x94
    BOOL m_bForbidMusic; // +0x95
    BOOL _m_bHideStatusBar; // +0x96
    BOOL _m_bFromCanvasSight; // +0x97
    BOOL _initFromAd; // +0x98
    id <WCNetworkMediaPlayerDelegate> m_delegate; // +0xa0
    NSString * m_url; // +0xa8
    NSString * m_vid; // +0xb0
    WCNetworkMediaInfo * m_info; // +0xb8
    WCNetworkMediaStreamVideoInfo * m_streamVideoInfo; // +0xc0
    WCNetworkMediaCore * m_mediaCore; // +0xc8
    UIView * m_topView; // +0xd0
    UIView * m_bottomView; // +0xd8
    UIButton * m_hideBtn; // +0xe0
    UIButton * m_showDetailBtn; // +0xe8
    MMUILabel * m_durationLabel; // +0xf0
    MMUILabel * m_currentLabel; // +0xf8
    UIButton * m_playBtn; // +0x100
    UIButton * m_backBtn; // +0x108
    UIButton * m_moreBtn; // +0x110
    WCNetworkMediaSlider * m_progressSlider; // +0x118
    MMProgressViewEx * m_loadingView; // +0x120
    MMTimer * m_timer; // +0x128
    id _userInfo; // +0x130
    CGSize m_videoSize; // +0x138
}
- (id)initWithTimeLineAdVideo:(id)arg1;
- (id)initWithVid:(id)arg1;
- (id)initWithInfo:(id)arg1;
- (double)getMediaDuration;
- (double)getMediaCurrentPosition;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)initData;
- (void)initView;
- (void)initMediaCore;
- (void)updateSubviewsFrame:(long long)arg1;
- (void)updateVideoFrame:(long long)arg1;
- (void)onBackClick;
- (void)onMoreClick;
- (void)onPlayClick;
- (void)onHideClick;
- (void)onSliderChange;
- (void)retryToLoadVideo;
- (BOOL)isControlViewsHidden;
- (void)showControlViews;
- (void)showControlViewsWithAutoHide;
- (void)hideControlViews;
- (BOOL)isCanvasSightScene;
- (id)stringFromTimeInterval:(double)arg1;
- (void)refreshCurrentTime;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidTransitionToNewSize;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (BOOL)couldShowDetailBtn;
- (void)onShowDetail;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(CGSize)arg2;
- (void)onGotVideoUrl:(id)arg1 Error:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendVideoUrlToFriend;
- (id)getStatExtString;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (id)getCurrentViewController;
- (void)shareToTimeline;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (BOOL)isFromAd;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_url;
- (void)setM_url:(id)arg1;
- (id)m_vid;
- (void)setM_vid:(id)arg1;
- (id)m_info;
- (void)setM_info:(id)arg1;
- (id)m_streamVideoInfo;
- (void)setM_streamVideoInfo:(id)arg1;
- (id)m_mediaCore;
- (void)setM_mediaCore:(id)arg1;
- (CGSize)m_videoSize;
- (void)setM_videoSize:(CGSize)arg1;
- (id)m_topView;
- (void)setM_topView:(id)arg1;
- (id)m_bottomView;
- (void)setM_bottomView:(id)arg1;
- (id)m_hideBtn;
- (void)setM_hideBtn:(id)arg1;
- (id)m_showDetailBtn;
- (void)setM_showDetailBtn:(id)arg1;
- (id)m_durationLabel;
- (void)setM_durationLabel:(id)arg1;
- (id)m_currentLabel;
- (void)setM_currentLabel:(id)arg1;
- (id)m_playBtn;
- (void)setM_playBtn:(id)arg1;
- (id)m_backBtn;
- (void)setM_backBtn:(id)arg1;
- (id)m_moreBtn;
- (void)setM_moreBtn:(id)arg1;
- (id)m_progressSlider;
- (void)setM_progressSlider:(id)arg1;
- (id)m_loadingView;
- (void)setM_loadingView:(id)arg1;
- (id)m_timer;
- (void)setM_timer:(id)arg1;
- (BOOL)m_bForbidFavMenu;
- (void)setM_bForbidFavMenu:(BOOL)arg1;
- (BOOL)m_bForbidMusic;
- (void)setM_bForbidMusic:(BOOL)arg1;
- (BOOL)m_bHideStatusBar;
- (void)setM_bHideStatusBar:(BOOL)arg1;
- (BOOL)m_bFromCanvasSight;
- (void)setM_bFromCanvasSight:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)initFromAd;
- (void)setInitFromAd:(BOOL)arg1;
- (void).cxx_destruct;
@end
