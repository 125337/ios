@interface MMMusicLiveViewController : MMUIViewController <MMMusicLiveMusicOperationViewDelegate, IMMMusicLyricServiceExt, MMMusicLiveCommentViewDelegate, MMMusicLiveInputViewDelegate, MMMusicLiveMVAuthorInfoViewDelegate, MMMusicLiveVCTopBarViewDelegate, SendAppMsgHandleDelegate, MMUIHalfScreenViewControllerDelegate, MMMusicLyricsViewControllerDelegate, MMMusicSetStatusBubbleViewDelegate, TextStatePublishViewControllerDelegate, TipsViewDelegate, ILBSLifeMgrExt, MMMusicInfoNewHalfViewControllerDelegate, MMMusicOpenThirdAppHelperDelegate, MMMusicLiveLyricDisplayViewDelegate, MMMusicOpenThirdAppHelperDataSource, WCActionSheetDelegate, UIScrollViewDelegate>
{
    unsigned long long _pushedFromType; // +0x68
    CAGradientLayer * m_topMaskLayer; // +0x70
    CAGradientLayer * m_bottomMaskLayer; // +0x78
    MMMusicLiveMVAuthorInfoView * _finderAuthorInfoView; // +0x80
    MMMusicLyricsViewController * m_lyricsVC; // +0x88
    BOOL _isDragging; // +0x90
    BOOL _isClearing; // +0x91
    BOOL _isOperationNeedToShow; // +0x92
    BOOL _isOperationClearing; // +0x93
    BOOL _isAllClearing; // +0x94
    BOOL _isShowingKeyboard; // +0x95
    BOOL _isInLyricsVC; // +0x96
    BOOL _isInHalfInfoVC; // +0x97
    BOOL _hasShowSetStatusView; // +0x98
    BOOL _hasSetupLyricService; // +0x99
    BOOL _viewHasAppear; // +0x9a
    BOOL _sendingLocation; // +0x9b
    BOOL _hasFetchedLBS; // +0x9c
    MMMusicLiveMusicOperationView * _musicOperationView; // +0xa0
    id <MMMusicLiveViewControllerDelegate> _delegate; // +0xa8
    MMMusicDotMVDataSource * _mvDataSource; // +0xb0
    MMMusicLiveCommentView * _commentView; // +0xb8
    MMMusicInfo * _musicInfo; // +0xc0
    MMMusicLiveLyricDisplayView * _lyricView; // +0xc8
    MMMusicLiveVCTopBarView * _topBarView; // +0xd0
    UILabel * _likeNumLabel; // +0xd8
    MMUIButton * _likeBtn; // +0xe0
    UILabel * _commentNumLabel; // +0xe8
    MMUIButton * _commentBtn; // +0xf0
    UILabel * _shareTipsLabel; // +0xf8
    MMUIButton * _shareBtn; // +0x100
    MMMusicSetStatusBubbleView * _setStatusView; // +0x108
    MMUIButton * _playBtn; // +0x110
    MMUIActivityIndicatorView * _loadingView; // +0x118
    unsigned long long _state; // +0x120
    SendAppMsgHandler * _sendAppMsgHandler; // +0x128
    MMMusicLiveCommentModel * _commentModel; // +0x130
    MMMusicLiveInputView * _inputView; // +0x138
    UIView * _inputBackgroundView; // +0x140
    MMUIButton * _hideInputBackgroundBtn; // +0x148
    UIView * _inputControlView; // +0x150
    UILabel * _inputControlLabel; // +0x158
    UIView * _bottomContainerView; // +0x160
    MMMsgCommonTipsView * _deletedCommonTips; // +0x168
    UIButton * _nextBtn; // +0x170
    MMMusicMVPostingStateView * _postingStateView; // +0x178
    MMMusicVideoImageDownloader * _imageDownLoader; // +0x180
    MMMusicOpenThirdAppHelper * _openThirdAppHelper; // +0x188
    MMMusicForwardHandler * _forwardHandler; // +0x190
    MMMusicFavHandler * _favHandler; // +0x198
    MMMsgCommonTipsView * _notSupportedMVTipsView; // +0x1a0
    WCUIAlertView * _currAlertView; // +0x1a8
    double _sendLocationTime; // +0x1b0
    WCLocationInfo * _cacheLocationInfo; // +0x1b8
    WCLocationInfo * _currentLocationInfo; // +0x1c0
    MMMusicLiveSendLocationBubbleView * _sendLocationHintView; // +0x1c8
    unsigned long long _geoTag; // +0x1d0
    unsigned long long _curShareSource; // +0x1d8
    NSString * _jumpToThirdAppItemTitle; // +0x1e0
    MMScrollActionSheet * _scrollActionSheet; // +0x1e8
    ForwardMessageLogicController * _forwardLogicController; // +0x1f0
}
+ (id)logStr:(id)arg1;
- (id)getImageDownLoader;
- (id)thirdAppHelper;
- (id)getForwardHandler;
- (id)getFavHandler;
- (void)showMoreMenuInView:(id)arg1 justShare:(BOOL)arg2;
- (void)onClickOpenMusicAppWithSource:(unsigned long long)arg1;
- (void)mmMusicOpenThirdAppHelper:(id)arg1 onOpen3rdMusicAppWithType:(unsigned long long)arg2 source:(unsigned long long)arg3;
- (id)mmMusicOpenThirdAppHelperGetShareItem:(id)arg1;
- (void)mmMusicForwardHandlerOnStartLoading:(id)arg1;
- (void)mmMusicForwardHandlerOnEndLoading:(id)arg1;
- (void)mmMusicForwardHandlerOnShareActionSuccess:(id)arg1;
- (void)mmMusicForwardHandler:(id)arg1 onShareToFriends:(id)arg2 withSource:(unsigned long long)arg3;
- (void)mmMusicForwardHandler:(id)arg1 getForwardViewControllerAndPresent:(id)arg2;
- (void)mmMusicForwardHandler:(id)arg1 onShareToWcWithForwardViewController:(id)arg2 andSource:(unsigned long long)arg3;
- (id)mmMusicForwardHandlerGetMusicShareItem:(id)arg1;
- (void)mmMusicFavHandlerOnStartLoading:(id)arg1;
- (void)mmMusicFavHandlerOnEndLoading:(id)arg1;
- (void)mmMusicFavHandlerOnAddFav:(id)arg1;
- (id)mmMusicFavHandlerGetMusicShareItem:(id)arg1;
- (void)doShareToFriendsWithSource:(unsigned long long)arg1;
- (void)doShareToFriendsWithSource:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)doShareToWcWithSource:(unsigned long long)arg1;
- (void)doAddToFavorites;
- (id)getCoverImageDataWithDefault:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (id)getMessageWrap:(id)arg1;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (id)initWithMusicInfo:(id)arg1;
- (id)likeNumLabel;
- (id)likeBtn;
- (id)commentNumLabel;
- (id)commentBtn;
- (id)shareBtn;
- (id)playBtn;
- (id)loadingView;
- (id)shareTipsLabel;
- (id)setStatusView;
- (id)bottomContainerView;
- (id)sendAppMsgHandler;
- (id)deletedCommonTips;
- (id)nextBtn;
- (id)notSupportedMVTipsView;
- (void)loadView;
- (void)initView;
- (double)getSetStatusViewShowTime;
- (void)showSetStatusView;
- (BOOL)canShare;
- (void)hideSetStatusView:(BOOL)arg1;
- (void)reloadData;
- (void)reloadInteractionNumbers;
- (void)reloadTopBar;
- (void)reloadSongStatus:(id)arg1;
- (void)setupLyricService;
- (void)tryShowListenLyricLoadingViewWithScene:(unsigned long long)arg1;
- (void)removeLyricLoadingView;
- (id)singleLineLyricResolver;
- (id)currentLyric;
- (void)reloadMusician:(id)arg1;
- (void)setPushedFromType:(unsigned long long)arg1;
- (void)initCommentView;
- (void)initPostingStateView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)layout;
- (void)layoutLyricView;
- (double)minTopForBotttomUI;
- (void)layoutCollectionToolItems;
- (void)onClickOpen3rdMusicAppWithSource:(unsigned long long)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)liveLyricDisplayView:(id)arg1 completeShowLyric:(id)arg2;
- (void)resetCommentFrame;
- (void)handleTapInputView;
- (void)showMessageInputArea;
- (void)handleTapInputBackground;
- (void)closeMessageInputArea;
- (void)handlePanInputBackground:(id)arg1;
- (void)onClickHideInputBackgroundBtn;
- (void)onCommentViewContentChanged;
- (void)liveCommentView:(id)arg1 didTappedDetailWithModel:(id)arg2;
- (void)onCommentLongPressed:(id)arg1;
- (void)onCommentClicked:(id)arg1;
- (void)didCommitText:(id)arg1;
- (double)getVisibleHeight;
- (void)onInputViewShowChange:(BOOL)arg1;
- (BOOL)inputToolDisableExpression;
- (id)interactionStatisticsFromDelegate;
- (void)didSendLocation;
- (BOOL)isOverSendLocationFrequency;
- (double)getUserStaySecond;
- (id)sendLocationHintView;
- (void)showSendLocationHintView;
- (void)hideSendLocationHintView:(BOOL)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)fetchLocation;
- (BOOL)checkAndFetchRecommendGPSInfo;
- (void)fetchRecommendGPSInfoByUserGpsCache;
- (void)getRecommendPOIInfoByUserGPS;
- (void)getGPSListAccordingWithLatitude:(double)arg1 andLongitude:(double)arg2;
- (void)OnGetLBSLife:(id)arg1 Error:(int)arg2;
- (id)convertLbsLifeToWCLocationInfoWithLbsLife:(id)arg1;
- (void)updateLocationCityInfo:(id)arg1;
- (id)evolvePoiAddressFromLbsLife:(id)arg1;
- (void)fetchAddressByCurrentLocation;
- (void)stopGeocoder;
- (void)sendNetLocationMsg:(id)arg1;
- (void)onClickSetStatus;
- (void)onClickCreateMV;
- (void)onClickOpenMVListBtn;
- (void)onTopBarTappedBack;
- (id)openThirdAppHelper;
- (void)onClickAudioTypeButton;
- (id)requestGetAppIconImageWithSize:(CGSize)arg1;
- (id)requestGetAppName;
- (BOOL)isQQMusic;
- (int)currentMusicAudioType;
- (id)onMusicLiveTopBarViewRequestSourceViewInfo:(id)arg1;
- (void)onTopBarOpenMusicInfoHalfScreen;
- (void)onTopBarOpenApp;
- (void)onTopBarJumpMusician:(id)arg1;
- (BOOL)isChannelMusic;
- (void)onLyricService:(id)arg1 curentLyricChangeTo:(id)arg2 timeToNext:(double)arg3 currIndex:(unsigned int)arg4;
- (void)updateSliderProgress:(double)arg1;
- (unsigned int)updateSliderProgressEnd;
- (double)getSliderMusicTimeInSecondPerPx;
- (void)updateFinderAuthorWithDesc:(id)arg1;
- (void)updateInfoBarNickName:(id)arg1 avatarUrl:(id)arg2;
- (void)setCurrentAudienceCount:(unsigned long long)arg1;
- (void)updateWhenMusicPaused;
- (void)updateWhenMusicPlayed;
- (void)showBufferingView;
- (void)hideBufferingView;
- (void)appendCommentWithModel:(id)arg1 isNotice:(BOOL)arg2;
- (void)didClickLikeBtn;
- (void)layoutLikeBtnAnimated:(BOOL)arg1 isLike:(BOOL)arg2;
- (void)showActionSheetOnLongPress;
- (void)didClickShareBtn;
- (void)didClickPlayBtn;
- (void)didClickPauseBtn;
- (void)didClickCommentBtn;
- (void)didClickCreateBtn;
- (void)didTapLyrics;
- (void)playLikeAnimationFromGesture:(id)arg1 fromView:(id)arg2;
- (void)onMusicSliderProgressChanged:(double)arg1 isSliding:(BOOL)arg2;
- (void)onMusicSliderProgressBeginSeeking;
- (void)onMusicSliderProgressDidSeek:(double)arg1;
- (void)onMusicSliderProgressDidClick:(double)arg1;
- (void)runMusicOperationViewAnim;
- (void)onMusicPause:(double)arg1;
- (void)onMusicResume:(double)arg1;
- (void)onAuthorInfoViewClickMVAvatar;
- (void)onAuthorInfoViewClickMVNickName;
- (void)onAuthorInfoViewClickFinderHitLabel;
- (void)onAuthorInfoViewClickSwitch;
- (void)onClickOpenMusicAppLabel;
- (unsigned long long)calcStatusFromAction:(unsigned long long)arg1 andCurStatus:(unsigned long long)arg2;
- (void)onOpen3rdMusicWebPage;
- (void)updateCommentLikeShare:(BOOL)arg1;
- (void)updateShareButtonEnabled:(BOOL)arg1;
- (void)updateCommentLikeEnabled:(BOOL)arg1;
- (void)updateLiveVCStateByAction:(unsigned long long)arg1;
- (void)onWillSwitchToMMMusicLiveViewController:(BOOL)arg1;
- (void)onSwitchToMMMusicLiveViewController:(BOOL)arg1;
- (void)onClickLyricsViewAlbum:(BOOL)arg1;
- (void)onSlideLyricsViewAlbum:(BOOL)arg1;
- (void)onSlideLyricsPanel:(BOOL)arg1;
- (void)onMusicLyricDidSeekToTime:(double)arg1;
- (void)mmMusicSetStatusBubbleViewDidClick:(id)arg1;
- (void)openSetStatusPageWithDelegate:(id)arg1 viewController:(id)arg2 forceFullScreen:(BOOL)arg3 source:(unsigned long long)arg4;
- (void)onTextStatePublished;
- (void)onTipsViewClick:(id)arg1;
- (id)musicOperationView;
- (void)setMusicOperationView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mvDataSource;
- (void)setMvDataSource:(id)arg1;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (BOOL)isClearing;
- (void)setIsClearing:(BOOL)arg1;
- (BOOL)isOperationNeedToShow;
- (void)setIsOperationNeedToShow:(BOOL)arg1;
- (BOOL)isOperationClearing;
- (void)setIsOperationClearing:(BOOL)arg1;
- (BOOL)isAllClearing;
- (void)setIsAllClearing:(BOOL)arg1;
- (BOOL)isShowingKeyboard;
- (void)setIsShowingKeyboard:(BOOL)arg1;
- (BOOL)isInLyricsVC;
- (void)setIsInLyricsVC:(BOOL)arg1;
- (BOOL)isInHalfInfoVC;
- (void)setIsInHalfInfoVC:(BOOL)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)lyricView;
- (void)setLyricView:(id)arg1;
- (id)topBarView;
- (void)setTopBarView:(id)arg1;
- (void)setLikeNumLabel:(id)arg1;
- (void)setLikeBtn:(id)arg1;
- (void)setCommentNumLabel:(id)arg1;
- (void)setCommentBtn:(id)arg1;
- (void)setShareTipsLabel:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setSetStatusView:(id)arg1;
- (BOOL)hasShowSetStatusView;
- (void)setHasShowSetStatusView:(BOOL)arg1;
- (void)setPlayBtn:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (void)setSendAppMsgHandler:(id)arg1;
- (id)commentModel;
- (void)setCommentModel:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)inputBackgroundView;
- (void)setInputBackgroundView:(id)arg1;
- (id)hideInputBackgroundBtn;
- (void)setHideInputBackgroundBtn:(id)arg1;
- (id)inputControlView;
- (void)setInputControlView:(id)arg1;
- (id)inputControlLabel;
- (void)setInputControlLabel:(id)arg1;
- (void)setBottomContainerView:(id)arg1;
- (void)setDeletedCommonTips:(id)arg1;
- (void)setNextBtn:(id)arg1;
- (id)postingStateView;
- (void)setPostingStateView:(id)arg1;
- (BOOL)hasSetupLyricService;
- (void)setHasSetupLyricService:(BOOL)arg1;
- (id)imageDownLoader;
- (void)setImageDownLoader:(id)arg1;
- (void)setOpenThirdAppHelper:(id)arg1;
- (id)forwardHandler;
- (void)setForwardHandler:(id)arg1;
- (id)favHandler;
- (void)setFavHandler:(id)arg1;
- (void)setNotSupportedMVTipsView:(id)arg1;
- (BOOL)viewHasAppear;
- (void)setViewHasAppear:(BOOL)arg1;
- (id)currAlertView;
- (void)setCurrAlertView:(id)arg1;
- (double)sendLocationTime;
- (void)setSendLocationTime:(double)arg1;
- (id)cacheLocationInfo;
- (void)setCacheLocationInfo:(id)arg1;
- (id)currentLocationInfo;
- (void)setCurrentLocationInfo:(id)arg1;
- (BOOL)sendingLocation;
- (void)setSendingLocation:(BOOL)arg1;
- (void)setSendLocationHintView:(id)arg1;
- (BOOL)hasFetchedLBS;
- (void)setHasFetchedLBS:(BOOL)arg1;
- (unsigned long long)geoTag;
- (void)setGeoTag:(unsigned long long)arg1;
- (unsigned long long)curShareSource;
- (void)setCurShareSource:(unsigned long long)arg1;
- (id)jumpToThirdAppItemTitle;
- (void)setJumpToThirdAppItemTitle:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (id)forwardLogicController;
- (void)setForwardLogicController:(id)arg1;
- (void).cxx_destruct;
@end

