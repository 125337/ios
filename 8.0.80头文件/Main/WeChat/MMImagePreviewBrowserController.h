@interface MMImagePreviewBrowserController : WCDragToCloseViewController <EditVideoLogicItemDelegate, WCEditVideoViewControllerDelegate, WCFinderLongVideoChooseHelperDelegate, EditVideoOptionsDelegate, EditImageInitialViewDelegate, WCEditImageViewControllerDelegate, WCFinderPostViewControllerDelegate, WCFinderCreateCoordinatorDelegate, MMAssetPickerBrowserViewDelegate, MMAssetSelectedCollectionViewDelegate, MultiImageScrollViewDelegate, WCActionSheetDelegate>
{
    MMAssetSelectCheckButton * m_selectCheckButton; // +0x70
    MultiImageScrollView * _pagingScrollView; // +0x78
    MMAssetSelectedCollectionView * m_selectedCollectionView; // +0x80
    UIButton * m_sendButton; // +0x88
    UIView * oTitleBackGroundView; // +0x90
    UIView * _bottomBar; // +0x98
    MMUIButton * _templateComposingButton; // +0xa0
    MMUIButton * _originImageCheck; // +0xa8
    MMUIButton * _userActionCheck; // +0xb0
    UILabel * _originImageLabel; // +0xb8
    MMUIActivityIndicatorView * _originIndictorView; // +0xc0
    MMUIButton * m_cropVideoButton; // +0xc8
    MMUIButton * _editButton; // +0xd0
    UIButton * _backButton; // +0xd8
    UIView * _titleView; // +0xe0
    MMUILabel * _titleLabel; // +0xe8
    BOOL isChangePageBySelected; // +0xf0
    BOOL showEditForFirstPreviewAsset; // +0xf1
    NSMutableDictionary * m_browserViewCache; // +0xf8
    UILabel * m_tipInfoLabel; // +0x100
    UIButton * m_errorInfoBar; // +0x108
    BOOL m_hasClickSendButton; // +0x110
    BOOL _bHideBottomBar; // +0x111
    BOOL _justPreviewSelected; // +0x112
    BOOL _requestToEditDirectly; // +0x113
    BOOL _cancelToClearAttr; // +0x114
    BOOL _isOriginSelected; // +0x115
    unsigned int _startPageIndex; // +0x118
    int _pickerScene; // +0x11c
    id <MMImagePickerControlCenter> controlCenter; // +0x120
    id <MMImagePreviewBrowserControllerDelegate> m_delegate; // +0x128
    EditImageIntialView * _editImageInitialView; // +0x130
    EditVideoLogicItem * editVideoLogicItem; // +0x138
    id <MMImagePreviewBrowserControllerDataSource> _m_dataSource; // +0x140
    MMAsset * __editAsset; // +0x148
    UIImageView * _originImageView; // +0x150
    UIView * _blurView; // +0x158
    VideoEncodeTask * _postEncodeTask; // +0x160
    WCFinderPreviewEditVideoCompositionTask * _postFinderTask; // +0x168
    MMUIButton * _cancelRemuxButton; // +0x170
    VideoEncodeTask * _videoEncodeTask; // +0x178
    NSString * _currentTaskId; // +0x180
    MMUILabel * _rawTotalSizeLabel; // +0x188
    NSMutableSet * _livePhotoShowSet; // +0x190
    UIView * _redDotView; // +0x198
    MsgMediaGroupCombineSendView * _combineSendView; // +0x1a0
    NSString * _miaojianMetaInfo; // +0x1a8
}
+ (unsigned long long)editImageEnterSceneWithPickerScene:(int)arg1;
- (void)setupFinderTemplateComposingButtonReport;
- (void)onEditVideo:(int)arg1 withEditEntrance:(unsigned long long)arg2;
- (void)processAssetAndPushToTemplateVCWithAssetInfo:(id)arg1;
- (void)processAssetAndToEditVCWithAssetInfo:(id)arg1 scene:(int)arg2 withEditEntrance:(unsigned long long)arg3;
- (void)_onCheckMiaoJianMetaWithAssetInfo:(id)arg1 from:(int)arg2 whenDone:(id /* block */)arg3;
- (void)_clearMiaoJianMetaInfo;
- (void)_updateMiaoJianMetaInfo:(id)arg1;
- (void)_onFinderEditWithAssetInfo:(id)arg1 scene:(int)arg2 editEntrance:(unsigned long long)arg3;
- (void)loadAssetForFinderPost:(id)arg1 postAction:(id /* block */)arg2;
- (void)onFinderEdit:(int)arg1 entrance:(unsigned long long)arg2 assetsArray:(id)arg3;
- (id)dictionaryWithGPSInfoString:(id)arg1;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)onWCEditVideoViewControllerLongVideoWithPostSession:(id)arg1;
- (void)onWCEditVideoViewControllerPostFinderDidCancel;
- (void)onEditFinish;
- (void)onEditDoneInChatAlbum:(BOOL)arg1;
- (void)doOnEditFinish;
- (void)onEditDoneInTimelineAlbum;
- (void)onClickEditVideoBackBarButton;
- (void)onClickEditVideoDoneBarButton;
- (void)showProgressRemuxLoading;
- (void)cancelRemux;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (BOOL)enableAsyncCompositeVideo:(id)arg1;
- (void)handleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2 isAsyncCompositeEnabled:(BOOL)arg3;
- (void)syncHandleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2;
- (void)asyncHandleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2;
- (void)longVideoChooseHelper:(id)arg1 postSession:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)returnToTimelineOrAlbum;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 andForceChangeToScene:(unsigned int)arg3;
- (void)editVideoViewController:(id)arg1 currentVC:(id)arg2 requestToLaunchMJAppWithScene:(unsigned long long)arg3 launchType:(long long)arg4 editTab:(long long)arg5 musicId:(id)arg6 exportedOpenWX:(int)arg7 launchCallback:(id /* block */)arg8;
- (void)_dismissEditVideoViewController:(id)arg1;
- (BOOL)exportUseCancelLoading;
- (void)finderTemplateProcessVC:(id)arg1 didExportFinishWithPath:(id)arg2 outputParams:(id)arg3;
- (void)finderTemplateVideoVC:(id)arg1 didExportFinishWithPath:(id)arg2 outputParams:(id)arg3;
- (void)processWithTemplateVideoPath:(id)arg1 templateParams:(id)arg2;
- (float)getMaxDuration;
- (void)onEditImage:(int)arg1 withEditEntrance:(unsigned int)arg2;
- (void)processAssetAndPresentTemplateVCWithAssetsArray:(id)arg1 imageArray:(id)arg2 materialInfo:(id)arg3 scene:(int)arg4 withEditEntrance:(unsigned int)arg5;
- (void)processAssetAndPresentEditImageVCWithAssetsArray:(id)arg1 imageArray:(id)arg2 scene:(int)arg3 withEditEntrance:(unsigned int)arg4;
- (void)getDisplayImage:(id /* block */)arg1;
- (void)getOriginalImage:(id /* block */)arg1;
- (id)xiaoWeiCurrentViewController;
- (id)xiaoWeiEditImageInitialView;
- (BOOL)editImageInitialView:(id)arg1 shouldEnableXiaoWeiEntryForScene:(unsigned int)arg2 entrance:(unsigned int)arg3;
- (void)onClickAskXiaoWeiWithImage:(id)arg1 buttonFrame:(CGRect)arg2;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (id)c2CUserName;
- (unsigned int)c2CRoomSize;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)setCreateCoordinator:(id)arg1;
- (id)createCoordinator;
- (void)handleFinishEditingVideo:(id)arg1 editor:(id)arg2;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)triggerFinderPostActionWith:(id)arg1;
- (id)init;
- (BOOL)useBlackStatusbar;
- (void)initBottomBar;
- (void)layoutBottomBarExtra;
- (void)initCombineSendViewIfNeeded;
- (BOOL)isCombineSendHidden;
- (void)setCombineSendHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)initOriginImageButton;
- (void)initUserActionCheck;
- (void)initTemplateComposingButtonForFinderMJPublisher;
- (void)templateComposingButtonDidTouchUpInside:(id)arg1;
- (void)initSelectCheckButton;
- (void)initTopAndBottomButtonForEmotion;
- (void)initBackBarButton;
- (void)initTitle;
- (void)updateTitleView;
- (void)initDoneBarbutton;
- (void)initBackgroundView;
- (void)showErrorInfoBarWithInfo:(id)arg1;
- (void)OnClickBackBarButton:(id)arg1;
- (void)close;
- (void)OnClickDoneBarButton;
- (void)initView;
- (void)initRemuxView;
- (void)onTapCancel;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initSingleImagePreviewWithHorizontalPadding:(double)arg1;
- (void)update;
- (void)reloadData;
- (void)reloadSelectedCollectionView;
- (void)reloadCurrentBrowserView;
- (void)reactiveSendButton;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldHideNavigationBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidTransitionToNewSize;
- (BOOL)hidesStatusBar;
- (void)setIsOriginSelected:(BOOL)arg1;
- (void)updateisOriginSelectedAccessibility;
- (long long)overrideUserInterfaceStyle;
- (BOOL)isSnsScene;
- (void)handleEditImage:(id)arg1;
- (void)onEditImage:(id)arg1;
- (unsigned long long)imagePickerSceneToEditImageEnterScene;
- (void)onEditVideo:(id)arg1;
- (void)OnCrop:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)prepareSend;
- (void)sendSelectedImage;
- (void)_updatePreviewPickerForBrowserView:(id)arg1 assetInfo:(id)arg2;
- (void)updateSendButtonSelectedAssetCount;
- (void)OnSend:(id)arg1;
- (void)OnEdit:(id)arg1;
- (void)onOriginImageCheck:(id)arg1;
- (void)onClickUserActionCheck:(id)arg1;
- (void)cancelSelected;
- (void)OnSelectedButtonClicked;
- (void)OnSelectedButtonDone;
- (void)ContinueDealSelectedButtonDone:(id)arg1;
- (void)setBottomAndTopBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBottomAndTopBarHiddenWithAnimation:(BOOL)arg1;
- (void)updateEditButtonEnableWithAssetInfo:(id)arg1;
- (void)updateSelectCheckButtonWithIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)updateSelectedButtonWithAssetInfo:(id)arg1;
- (id)rawTotalSizeLabel;
- (void)updateOriginSizeLabel;
- (void)updateBottomBarWithAssetInfo:(id)arg1 stateInfo:(id)arg2;
- (void)shouldShowErrorInfoBarWithAssetInfo:(id)arg1 stateInfo:(id)arg2;
- (void)changeToPageWithAssetInfo:(id)arg1;
- (void)resizeBlurViewWithCollectionVisiable:(BOOL)arg1;
- (void)showSelectedCollectionViewIfNeed;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)handleLivePhotoLongPress:(long long)arg1;
- (void)onScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)onScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)ImageScrollViewWillBeginDragging:(id)arg1;
- (void)ImageScrollViewDidEndDecelerating:(id)arg1;
- (void)hideVCAnimation;
- (void)multiImageScrollViewWillBeginDragging;
- (void)multiImageScrollViewDidEndDecelerating;
- (void)onChangePage;
- (void)checkEditRedDotState;
- (id)currentBrowserView;
- (BOOL)currentAssetIsVideo;
- (void)onAssetBrowserViewWillLoad:(id)arg1;
- (void)onAssetBrowserViewLoadFinished:(id)arg1;
- (BOOL)_onInterceptForDidLoadBrowserView:(id)arg1;
- (void)onAssetBrowserViewSingleTap:(id)arg1;
- (void)onAssetBrowserViewPlayingStateChanged:(id)arg1 isPlaying:(BOOL)arg2;
- (BOOL)isOriginSelected:(id)arg1;
- (void)onAssetSelectedCollectionViewClickAtIndex:(unsigned long long)arg1;
- (void)onAssetSelectedCollectionViewMoveAssetInfo:(id)arg1 oldIndex:(unsigned long long)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)currentViewController;
- (BOOL)isAssetSelectable:(id)arg1;
- (double)calculateLivePhotoButtonBottomPos;
- (void)updateVideoProgressBarStatus;
- (void)updateLivePhotoButtonPosition;
- (void)setLivePhotoButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)startPlayLivePhoto:(long long)arg1;
- (void)pausePlayLivePhoto:(long long)arg1;
- (void)reportLivePhotoPlayData:(long long)arg1 index:(long long)arg2;
- (void)clearLivePlayer:(long long)arg1;
- (void)updateLivePhotoViewWithAssetInfo:(id)arg1;
- (void)onUpdateLivePhotoIconDisplayStatus:(id)arg1;
- (void)onChangePageForLivePhotoWithAssetInfo:(id)arg1;
- (BOOL)isShowLivePhotoGuide;
- (void)onAcceptButtonDidClick;
- (void)showLivePhotoGuideView;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_hasClickSendButton;
- (void)setM_hasClickSendButton:(BOOL)arg1;
- (id)_editImageInitialView;
- (void)set_editImageInitialView:(id)arg1;
- (id)editVideoLogicItem;
- (void)setEditVideoLogicItem:(id)arg1;
- (id)m_dataSource;
- (void)setM_dataSource:(id)arg1;
- (id)_editAsset;
- (void)set_editAsset:(id)arg1;
- (unsigned int)startPageIndex;
- (void)setStartPageIndex:(unsigned int)arg1;
- (id)originImageView;
- (void)setOriginImageView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (BOOL)bHideBottomBar;
- (void)setBHideBottomBar:(BOOL)arg1;
- (BOOL)justPreviewSelected;
- (void)setJustPreviewSelected:(BOOL)arg1;
- (id)postEncodeTask;
- (void)setPostEncodeTask:(id)arg1;
- (id)postFinderTask;
- (void)setPostFinderTask:(id)arg1;
- (BOOL)requestToEditDirectly;
- (void)setRequestToEditDirectly:(BOOL)arg1;
- (id)cancelRemuxButton;
- (void)setCancelRemuxButton:(id)arg1;
- (id)videoEncodeTask;
- (void)setVideoEncodeTask:(id)arg1;
- (id)currentTaskId;
- (void)setCurrentTaskId:(id)arg1;
- (BOOL)cancelToClearAttr;
- (void)setCancelToClearAttr:(BOOL)arg1;
- (BOOL)isOriginSelected;
- (void)setRawTotalSizeLabel:(id)arg1;
- (int)pickerScene;
- (void)setPickerScene:(int)arg1;
- (id)livePhotoShowSet;
- (void)setLivePhotoShowSet:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (id)combineSendView;
- (void)setCombineSendView:(id)arg1;
- (id)miaojianMetaInfo;
- (void)setMiaojianMetaInfo:(id)arg1;
- (void).cxx_destruct;
@end
