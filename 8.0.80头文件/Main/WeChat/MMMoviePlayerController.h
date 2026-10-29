@interface MMMoviePlayerController : WCDragToCloseViewController <FullScreenGestureDelegate, UIGestureRecognizerDelegate, WCPlayerConfigDelegate, WCActionSheetDelegate, IMsgExt, scrollViewDelegate, WindowDelegate, SessionSelectControllerDelegate, IMsgRevokeExt>
{
    NSURL * m_url; // +0x70
    NSString * m_videoPath; // +0x78
    unsigned int m_uiVideoTime; // +0x80
    BOOL m_bLoadFinished; // +0x84
    BOOL m_bIsPlaying; // +0x85
    BOOL m_bRestart; // +0x86
    UIView * m_loadingView; // +0x88
    UIImageView * imageView; // +0x90
    MMProgressView * m_progressView; // +0x98
    UILabel * m_percentageLabel; // +0xa0
    CMessageWrap * m_msgWrap; // +0xa8
    MMScrollView * m_scrollView; // +0xb0
    CGSize m_size; // +0xb8
    BOOL m_isFromFav; // +0xc8
    long long curOrientation; // +0xd0
    double curScreenWith; // +0xd8
    double curScreenHeight; // +0xe0
    BOOL m_bIsStatusBarHidden; // +0xe8
    BOOL m_bSaveMode; // +0xe9
    BOOL m_bDownloadExpired; // +0xea
    WCActionSheet * m_actionSheet; // +0xf0
    BOOL m_autoRepeat; // +0xf8
    WXFullScreenGestureRecognizer * m_gesture; // +0x100
    WCPlayerConfigControlView * m_playerControlView; // +0x108
    ImageBrowseButton * _sessionSourceBtn; // +0x110
    BOOL _isTransitioningSize; // +0x118
    BOOL m_disableSave; // +0x119
    BOOL _m_fromAppMsg; // +0x11a
    BOOL _m_fromFavAppMsg; // +0x11b
    BOOL _m_bSupportLocateToMsg; // +0x11c
    BOOL _shouldAutoResizingSafeArea; // +0x11d
    int _scene; // +0x120
    WCPlayerView * m_moviePlayer; // +0x128
    UIImageView * _thumbImageView; // +0x130
    id /* block */ _m_customBottomLeftBtnAction; // +0x138
    id /* block */ _m_customBottomLeftBtnTitle; // +0x140
    NSString * _assetID; // +0x148
    AVAsset * _asset; // +0x150
    NSURL * _assetUrl; // +0x158
    long long _messageSvrID; // +0x160
    NSString * _chatName; // +0x168
    MessageShareHelper * _shareHelper; // +0x170
    CMessageWrap * _originMsgWrap; // +0x178
    FavoritesItemDataField * _originDataItem; // +0x180
    UIEdgeInsets _pageContentInset; // +0x188
}
+ (id)playerWithVideoMsg:(id)arg1 videoPath:(id)arg2 originMsgWrap:(id)arg3 originDataItem:(id)arg4;
- (id)init;
- (CGRect)getMaskViewFrameFullAndShowBar;
- (CGRect)getMaskViewFrameFullAndHideBar;
- (CGRect)getImageViewRect;
- (CGRect)getLabelRect;
- (CGRect)getStandardRect;
- (CGRect)getFullscreenRect;
- (CGRect)getContentRect;
- (void)setPageContentInset:(UIEdgeInsets)arg1;
- (void)setShouldAutoResizingSafeArea:(BOOL)arg1;
- (void)recalculatePageContentInset;
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
- (void)onFavorite;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOperate:(id)arg1;
- (void)openPlayer;
- (void)initVideoPlayerView;
- (void)initView;
- (void)viewDidLoad;
- (void)didAppear;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
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
- (UIEdgeInsets)pageContentInset;
- (BOOL)shouldAutoResizingSafeArea;
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
- (id)shareHelper;
- (void)setShareHelper:(id)arg1;
- (id)originMsgWrap;
- (void)setOriginMsgWrap:(id)arg1;
- (id)originDataItem;
- (void)setOriginDataItem:(id)arg1;
- (void).cxx_destruct;
@end
