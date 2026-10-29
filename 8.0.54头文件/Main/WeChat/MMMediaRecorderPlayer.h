@interface MMMediaRecorderPlayer : MMUIViewController <WCNetworkMediaCoreDelegate, WCActionSheetDelegate, IVOIPUILogicMgrExt, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    UINavigationController * _shareToUserNavController; // +0x68
    UINavigationController * _shareToTimelineNavController; // +0x70
    BOOL m_bIsFromTimeLine; // +0x78
    BOOL m_bShouldBeFirstFrame; // +0x79
    ForwardMessageLogicController * m_forwardLogic; // +0x80
    int retryCount; // +0x88
    BOOL m_inited; // +0x8c
    BOOL m_loop; // +0x8d
    BOOL m_hideStatusBar; // +0x8e
    BOOL m_hideMoreMenu; // +0x8f
    id <MMMediaRecorderPlayerDelegate> m_delegate; // +0x90
    NSString * m_videoUrl; // +0x98
    NSString * m_thumbUrl; // +0xa0
    NSString * m_title; // +0xa8
    NSString * m_desc; // +0xb0
    NSString * m_btText; // +0xb8
    WCNetworkMediaCore * m_mediaCore; // +0xc0
    UIView * m_bottomView; // +0xc8
    UIButton * m_hideBtn; // +0xd0
    MMUILabel * m_directLabel; // +0xd8
    UIView * m_directBg; // +0xe0
    MMUILabel * m_durationLabel; // +0xe8
    MMUILabel * m_currentLabel; // +0xf0
    MMUILabel * m_descLabel; // +0xf8
    UIButton * m_playBtn; // +0x100
    UIButton * m_backBtn; // +0x108
    UIButton * m_moreBtn; // +0x110
    WCNetworkMediaSlider * m_progressSlider; // +0x118
    MMProgressViewEx * m_loadingView; // +0x120
    MMTimer * m_timer; // +0x128
    CGSize m_videoSize; // +0x130
}
- (id)initWithDic:(id)arg1;
- (BOOL)isInited;
- (double)getMediaDuration;
- (double)getMediaCurrentPosition;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)initView;
- (void)initMediaCore;
- (void)updateSubviewsFrame:(long long)arg1;
- (void)updateAutoFrame;
- (void)updateVideoFrame:(long long)arg1;
- (void)onBackClick;
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
- (void)onDirect;
- (void)onForward;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(CGSize)arg2;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (id)getCurrentViewController;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_inited;
- (void)setM_inited:(BOOL)arg1;
- (BOOL)m_loop;
- (void)setM_loop:(BOOL)arg1;
- (BOOL)m_hideStatusBar;
- (void)setM_hideStatusBar:(BOOL)arg1;
- (BOOL)m_hideMoreMenu;
- (void)setM_hideMoreMenu:(BOOL)arg1;
- (id)m_videoUrl;
- (void)setM_videoUrl:(id)arg1;
- (id)m_thumbUrl;
- (void)setM_thumbUrl:(id)arg1;
- (id)m_title;
- (void)setM_title:(id)arg1;
- (id)m_desc;
- (void)setM_desc:(id)arg1;
- (id)m_btText;
- (void)setM_btText:(id)arg1;
- (id)m_mediaCore;
- (void)setM_mediaCore:(id)arg1;
- (CGSize)m_videoSize;
- (void)setM_videoSize:(CGSize)arg1;
- (id)m_bottomView;
- (void)setM_bottomView:(id)arg1;
- (id)m_hideBtn;
- (void)setM_hideBtn:(id)arg1;
- (id)m_directLabel;
- (void)setM_directLabel:(id)arg1;
- (id)m_directBg;
- (void)setM_directBg:(id)arg1;
- (id)m_durationLabel;
- (void)setM_durationLabel:(id)arg1;
- (id)m_currentLabel;
- (void)setM_currentLabel:(id)arg1;
- (id)m_descLabel;
- (void)setM_descLabel:(id)arg1;
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
- (void).cxx_destruct;
@end

