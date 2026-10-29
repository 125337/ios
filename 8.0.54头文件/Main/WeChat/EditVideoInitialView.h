@interface EditVideoInitialView : MMUIView <EditImageEmotionToolAttrDelegate, EditVideoCropViewDelegate, EditVideoLogicItemExt, EditVideoBgmViewDelegate, UIGestureRecognizerDelegate, WCActionSheetDelegate, EditImageOperationDelegate, EditImagePenToolAttrDelegate, IUiUtilExt, IMMAssetICloudExt>
{
    EVVideoPreviewBrowserView * _videoPreview; // +0x8
    EditImageScrollView * _eIScrollView; // +0x10
    MMUIView * _topBarView; // +0x18
    MMUIImageView * _topBackgroundView; // +0x20
    MMUIButton * _cancelBtn; // +0x28
    MMUIButton * _doneBtn; // +0x30
    MMUIView * _bottomBarView; // +0x38
    MMUIImageView * _bottomBackgroundView; // +0x40
    MMUIButton * _penBtn; // +0x48
    EditImagePenToolAttrView * _penAttrBar; // +0x50
    MMUIButton * _emotionBtn; // +0x58
    EditImageEmotionToolAttrView * _emotionAttrView; // +0x60
    MMUIButton * _textBtn; // +0x68
    MMUIButton * _cropBtn; // +0x70
    EditVideoCropView * _cropAttrView; // +0x78
    WCEditLoadingModeButton * _bgmBtn; // +0x80
    EditVideoBGMView * _bgmAttrView; // +0x88
    MMUIButton * _sendBtn; // +0x90
    WCEditLoadingModeButton * _poiBtn; // +0x98
    int _lastToolType; // +0xa0
    BOOL _isToolBarOccupy; // +0xa4
    double _lastScale; // +0xa8
    double _lastMinScale; // +0xb0
    double _lastMaxScale; // +0xb8
    CGSize _lastContentSize; // +0xc0
    CGPoint _lastContentOffset; // +0xd0
    double _previewLastScale; // +0xe0
    double _previewLastMinScale; // +0xe8
    double _previewLastMaxScale; // +0xf0
    CGSize _previewLastContentSize; // +0xf8
    UIEdgeInsets _previewLastEdgeInsets; // +0x108
    BOOL _bCropping; // +0x128
    BOOL _hideVideoOriginalSound; // +0x129
    BOOL _isEmoticonBoardSearchEnabled; // +0x12a
    AVAsset * avAsset; // +0x130
    id <EditVideoInitialViewDelegate> delegate; // +0x138
    unsigned long long _entranceType; // +0x140
    id <EditVideoOptionsDelegate> _optionsDelegate; // +0x148
    unsigned long long _editImageUIStyle; // +0x150
    WCStoryPublishReportObj * _publishReportObj; // +0x158
    NSString * _title; // +0x160
    WCEditViewControllerUIConfig * _uiConfig; // +0x168
    MMLoadingView * _loadingView; // +0x170
    EditStoryImageAttr * _storyAttr; // +0x178
    MMUIButton * _moreActionButton; // +0x180
    MMUIImageView * _scopeImageView; // +0x188
    MMUIButton * _textInputTipsView; // +0x190
    UIView * _lineView; // +0x198
    NSMutableArray * _currentMusicLyrics; // +0x1a0
    double _currentMusicLyricsTotalTime; // +0x1a8
    UIImageView * _blurImageView; // +0x1b0
    EditVideoMusicController * _musicController; // +0x1b8
    MMUIButton * _rightTopEntranceBtn; // +0x1c0
}
- (id)initWithFrame:(CGRect)arg1;
- (id)loadingView;
- (void)willMoveToWindow:(id)arg1;
- (void)onEditVideo;
- (void)reportForTimelineEditVideoExposeWithoutCrop;
- (void)reportForTimelineEditVideoExposeWithCrop:(unsigned int)arg1;
- (void)onClickDoneBtn:(id /* block */)arg1;
- (void)onClickBGMBtn;
- (id)storyAttr;
- (id)getStoryAttr;
- (id)getEditImageAttr;
- (void)initView;
- (void)initTopBar;
- (void)initBottomBar;
- (void)initSendLongVideoBtn;
- (BOOL)hasFinderLongVideoEntrance;
- (void)initSendByWeishiBtn;
- (void)initTitle;
- (void)initPenToolAttrBar;
- (void)initEmotionBtn;
- (void)initEmotionToolAttrBar;
- (void)initBGMToolAttrBar;
- (void)initTextToolAttrBar;
- (void)initBGMLogicAndBtn;
- (void)initBgmLogic;
- (void)playMusic;
- (void)clearMusic;
- (void)initBGMBtn;
- (void)initPoiBtn;
- (void)initSendBtn;
- (void)initCropBtn;
- (void)initCropToolAttrBar;
- (void)initVideoPreview;
- (void)initEditImageView;
- (id)scopeImageView;
- (void)initMoreActionButton;
- (void)clickMoreAction;
- (void)initDefaultTextInputTipsView;
- (void)initShowToolBars;
- (CGRect)getPreviewFrame;
- (void)reloadPenToolAttrBar;
- (void)reloadEmotionToolAttrBar;
- (void)reloadCropToolAttrBar;
- (void)reloadTopEditVideoBar;
- (void)reloadBottomEditVideoBar;
- (void)adjustBottomBarYIfNeeded;
- (CGRect)getBtnAccessibilityFrameWithButton:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (BOOL)highlightWidgetToolIsSelected;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandler:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)arg1;
- (void)setEmotionToolAttrViewHidden:(BOOL)arg1;
- (void)setBGMToolAttrViewHidden:(BOOL)arg1;
- (void)easeInOutTopAndBottomBar:(BOOL)arg1;
- (void)showCropVideo:(BOOL)arg1;
- (void)layoutScrollView:(double)arg1;
- (void)firstShowCrop;
- (BOOL)enableFinderEntrance;
- (BOOL)hasWeSeeEntrance;
- (void)initWeSeeReportData:(BOOL)arg1;
- (BOOL)hasWeishiEntrance;
- (void)initWeishiReportData:(BOOL)arg1;
- (double)getVideoScaleForCrop;
- (void)onSendByWeishiBtnClick;
- (void)onSendLongVideoBtnClick;
- (void)returnToTimelineOrAlbum;
- (void)onClickCancel;
- (void)onClickDone;
- (void)handleClickDone;
- (void)onClickPenEdit:(id)arg1;
- (void)onClickEmotionEdit:(id)arg1;
- (void)onClickTextEdit:(id)arg1;
- (void)onClickCropEdit:(id)arg1;
- (void)onClickBGMEdit:(id)arg1;
- (void)onClickPoiBtn;
- (void)updateBtns;
- (void)updateToolBtns;
- (void)selectLastToolType;
- (void)startEmotionTool;
- (void)onEmotionToolBarDoneBtnClicked:(BOOL)arg1;
- (void)clearEmotionToolOperation;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)undoPenEditImage;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)didSelectEmoticonWithWrap:(id)arg1 decodedImage:(id)arg2;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewPOIWidgetHiddenStateChange:(BOOL)arg1;
- (BOOL)scrollViewDidZoom:(id)arg1;
- (BOOL)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)dragaAndDropWidget;
- (void)onAddRealNewMainTextWidget;
- (void)onAddNewPOIWidget;
- (CGRect)getAssetPreviewFrame;
- (void)onEditSuccess:(BOOL)arg1 withTimeRange:(struct)arg2;
- (void)seekToTime:(double)arg1;
- (void)onCropTimeChange:(struct)arg1;
- (void)EditVideoBGMDone:(id)arg1;
- (void)EditVideoBGMViewDidClickTurnOffMusicButton:(BOOL)arg1;
- (void)EditVideoBGMViewLyricOnOffStateChange:(BOOL)arg1;
- (void)EditVideoBGMViewMusicOnOffStateChange:(BOOL)arg1;
- (void)EditVideoBGMViewLyricUpdate:(id)arg1 totalTime:(double)arg2;
- (void)stopRawAndBGMMusicPlay;
- (void)onRestartVideoPlayAt:(double)arg1;
- (void)onEditVideoViewControllerWillDisappear;
- (void)debugTap;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (id)optionsDelegate;
- (void)setOptionsDelegate:(id)arg1;
- (unsigned long long)editImageUIStyle;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (id)publishReportObj;
- (void)setPublishReportObj:(id)arg1;
- (BOOL)hideVideoOriginalSound;
- (void)setHideVideoOriginalSound:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)videoPreview;
- (void)setVideoPreview:(id)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (BOOL)isEmoticonBoardSearchEnabled;
- (void)setIsEmoticonBoardSearchEnabled:(BOOL)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setStoryAttr:(id)arg1;
- (id)moreActionButton;
- (void)setMoreActionButton:(id)arg1;
- (void)setScopeImageView:(id)arg1;
- (id)textInputTipsView;
- (void)setTextInputTipsView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)currentMusicLyrics;
- (void)setCurrentMusicLyrics:(id)arg1;
- (double)currentMusicLyricsTotalTime;
- (void)setCurrentMusicLyricsTotalTime:(double)arg1;
- (id)blurImageView;
- (void)setBlurImageView:(id)arg1;
- (id)musicController;
- (void)setMusicController:(id)arg1;
- (id)rightTopEntranceBtn;
- (void)setRightTopEntranceBtn:(id)arg1;
- (void).cxx_destruct;
@end

