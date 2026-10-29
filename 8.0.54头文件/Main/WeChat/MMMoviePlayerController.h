@interface MMMoviePlayerController : WCDragToCloseViewController <FullScreenGestureDelegate, UIGestureRecognizerDelegate, WCPlayerConfigDelegate, WCActionSheetDelegate, IMsgExt, scrollViewDelegate, WindowDelegate, SessionSelectControllerDelegate, IMsgRevokeExt>
{
    NSURL * m_url; // +0x68
    NSString * m_videoPath; // +0x70
    unsigned int m_uiVideoTime; // +0x78
    BOOL m_bLoadFinished; // +0x7c
    BOOL m_bIsPlaying; // +0x7d
    BOOL m_bRestart; // +0x7e
    UIView * m_loadingView; // +0x80
    UIImageView * imageView; // +0x88
    MMProgressView * m_progressView; // +0x90
    UILabel * m_percentageLabel; // +0x98
    CMessageWrap * m_msgWrap; // +0xa0
    MMScrollView * m_scrollView; // +0xa8
    CGSize m_size; // +0xb0
    BOOL m_isFromFav; // +0xc0
    long long curOrientation; // +0xc8
    double curScreenWith; // +0xd0
    double curScreenHeight; // +0xd8
    BOOL m_bIsStatusBarHidden; // +0xe0
    BOOL m_bSaveMode; // +0xe1
    BOOL m_bDownloadExpired; // +0xe2
    WCActionSheet * m_actionSheet; // +0xe8
    BOOL m_autoRepeat; // +0xf0
    WXFullScreenGestureRecognizer * m_gesture; // +0xf8
    WCPlayerConfigControlView * m_playerControlView; // +0x100
    ImageBrowseButton * _sessionSourceBtn; // +0x108
    BOOL m_disableSave; // +0x110
    BOOL _m_fromAppMsg; // +0x111
    BOOL _m_fromFavAppMsg; // +0x112
    BOOL _m_bSupportLocateToMsg; // +0x113
    int _scene; // +0x114
    WCPlayerView * m_moviePlayer; // +0x118
    UIImageView * _thumbImageView; // +0x120
    id /* block */ _m_customBottomLeftBtnAction; // +0x128
    id /* block */ _m_customBottomLeftBtnTitle; // +0x130
    NSString * _assetID; // +0x138
    AVAsset * _asset; // +0x140
    NSURL * _assetUrl; // +0x148
    long long _messageSvrID; // +0x150
    NSString * _chatName; // +0x158
}
- (id)init;
- (CGRect)getMaskViewFrameFullAndShowBar;
- (CGRect)getMaskViewFrameFullAndHideBar;
- (CGRect)getImageViewRect;
- (CGRect)getLabelRect;
- (CGRect)getStandardRect;
- (CGRect)getFullscreenRect;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)hideToolBar:(BOOL)arg1;
- (CGPoint)getScrollViewOffsetWhenNavBarShowing;
- (void)updateTitle;
- (void)setStandardScreen;
- (void)setFullScreen;
- (void)clearPlaying;
- (void)startPlayingWithAsset:(id)arg1 at:(id)arg2;
- (void)startPlayingWithURL:(id)arg1 at:(id)arg2;
- (void)updateProgress:(unsigned int)arg1;
- (void)handleDownloadFail;
- (void)initLoadingView;
- (void)showLoadingView;
- (void)hideLoadingView;
- (void)initSessionResourceButton;
- (void)onMsgLocate;
- (void)onSessionSourceBtnClick;
- (void)systemResigned:(id)arg1;
- (void)systemActived:(id)arg1;
- (void)initData;
- (void)onReturn:(id)arg1;
- (void)onSave:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOperate:(id)arg1;
- (void)openPlayer;
- (void)initVideoPlayerView;
- (void)initView;
- (void)viewDidLoad;
- (void)didAppear;
- (void)viewDidLayoutSubviews;
- (void)autoPlay;
- (void)changePlayerStatus;
- (void)InternalUpdateVideo:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (id)initWithCaptureVideoInfo:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 VideoPath:(id)arg2;
- (id)initWithAssetID:(id)arg1 avAsset:(id)arg2 assetUrl:(id)arg3 messageSvrID:(long long)arg4 chatName:(id)arg5;
- (void)dealloc;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)willAppear;
- (void)updateSubViewsRect;
- (void)viewWillBeInteractivePoped;
- (id)generatePlayArgsWithUrl:(id)arg1;
- (id)generatePlayArgsWithAsset:(id)arg1;
- (id)createPlayerViewWithPlayInfo:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)stopPlaying;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)isVideoPlaying;
- (void)pause;
- (void)startPlay;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onPlayToEnd;
- (void)onTapSightIconView;
- (void)onClickToolView;
- (id)m_url;
- (void)setM_url:(id)arg1;
- (id)m_moviePlayer;
- (void)setM_moviePlayer:(id)arg1;
- (id)m_videoPath;
- (void)setM_videoPath:(id)arg1;
- (id)m_msgWrap;
- (void)setM_msgWrap:(id)arg1;
- (BOOL)m_isFromFav;
- (void)setM_isFromFav:(BOOL)arg1;
- (BOOL)m_bSaveMode;
- (void)setM_bSaveMode:(BOOL)arg1;
- (BOOL)autoRepeated;
- (void)setAutoRepeated:(BOOL)arg1;
- (BOOL)m_disableSave;
- (void)setM_disableSave:(BOOL)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (BOOL)m_fromAppMsg;
- (void)setM_fromAppMsg:(BOOL)arg1;
- (BOOL)m_fromFavAppMsg;
- (void)setM_fromFavAppMsg:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)m_bSupportLocateToMsg;
- (void)setM_bSupportLocateToMsg:(BOOL)arg1;
- (id /* block */)m_customBottomLeftBtnAction;
- (void)setM_customBottomLeftBtnAction:(id /* block */)arg1;
- (id /* block */)m_customBottomLeftBtnTitle;
- (void)setM_customBottomLeftBtnTitle:(id /* block */)arg1;
- (id)assetID;
- (void)setAssetID:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)assetUrl;
- (void)setAssetUrl:(id)arg1;
- (long long)messageSvrID;
- (void)setMessageSvrID:(long long)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (void).cxx_destruct;
@end

