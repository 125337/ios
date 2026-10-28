@interface MMAssetPickerController : MMUIViewController <UIViewControllerPreviewingDelegate, MMImageCropperDelegate, WCActionSheetDelegate, MMAlbumDropPickerControllerDelegate, MMAssetPickerControllerFinderAssetDelegate, WCEditVideoViewControllerDelegate, MMAlbumAccessAuthViewDelegate, MMAssetCellDelegate, MMAssetViewDelegate, MMAssetDragSelectDelegate, WCFinderLongVideoChooseHelperDelegate, MMSightCameraViewControllerDelegate, MMAssetPickerSliderDelegate, WCFinderFeedPickerViewControllerDelegate, MMAlbumDropableTitleWithMultipleSectionViewDelegate, UITableViewDataSource, UITableViewDelegate, MMImagePreviewBrowserControllerDelegate>
{
    NSMutableArray * _imageDictionaries; // +0x70
    UIView * _bottomBarFloatView; // +0x78
    UILabel * _bottomBarFloatLabel; // +0x80
    MMUIButton * _previewButton; // +0x88
    MMUIButton * _templateComposingButton; // +0x90
    double _realBottomBarHeight; // +0x98
    BOOL _isOriginalImageForSend; // +0xa0
    BOOL _needThumbImage; // +0xa1
    int _compressType; // +0xa4
    double _assetWidth; // +0xa8
    id <UIViewControllerPreviewing> _previewingContext; // +0xb0
    UIButton * m_sendButton; // +0xb8
    MMUIButton * m_originImageCheck; // +0xc0
    MMUIButton * m_userActionCheck; // +0xc8
    NSMutableDictionary * m_dicSectionTitle; // +0xd0
    NSMutableDictionary * m_dicAssetsByTitle; // +0xd8
    NSMutableArray * m_arrAssetInfoByIndex; // +0xe0
    NSMutableDictionary * m_dicAssetsSize; // +0xe8
    BOOL _isOriginSelected; // +0xf0
    BOOL _disableInteractivePop; // +0xf1
    BOOL _isHiddenSliderTopMask; // +0xf2
    BOOL _isSupportHeif; // +0xf3
    BOOL _m_isJustReturnMMAsset; // +0xf4
    BOOL _m_hasClickSendButton; // +0xf5
    BOOL _m_directToFirstAlbum; // +0xf6
    BOOL _isDefaultAlbum; // +0xf7
    BOOL _didFinishLoadAlbum; // +0xf8
    BOOL _reloadAnimating; // +0xf9
    BOOL _didSwitchToCamera; // +0xfa
    BOOL _isTopBarAnimating; // +0xfb
    BOOL _isDragged; // +0xfc
    BOOL _bPickerStyleForFile; // +0xfd
    BOOL _isAccessLimited; // +0xfe
    BOOL _isAssetScrollViewUserDragging; // +0xff
    BOOL _isAlbumOptimizeClicfgOn; // +0x100
    id <MMAssetPickerControllerDelegate> _m_delegate; // +0x108
    id <MMImagePickerControlCenter> _controlCenter; // +0x110
    MMTableView * _tableView; // +0x118
    UIImageView * _bottomBar; // +0x120
    MMAlbum * _m_album; // +0x128
    NSMutableArray * _selectedAssetInfos; // +0x130
    WCFinderFeedPickerSelectedInfo * _selectedFinderDataInfo; // +0x138
    MMAssetDragSelectHelper * _dragSelectHelper; // +0x140
    EditImageAttr * _editingInfo; // +0x148
    WCFinderSyncComposeResModel * _preCompositionResult; // +0x150
    VideoEncodeTask * _preEncodeTask; // +0x158
    VideoEncodeTask * _postEncodeTask; // +0x160
    WCFinderPreviewEditVideoCompositionTask * _preFinderTask; // +0x168
    WCFinderPreviewEditVideoCompositionTask * _postFinderTask; // +0x170
    unsigned long long _preCompressCount; // +0x178
    NSDateFormatter * _dateFormatter; // +0x180
    long long _colNum; // +0x188
    NSMutableSet * _selectedDefaultAssetIds; // +0x190
    NSMutableSet * _selectedOtherAssetIds; // +0x198
    NSMutableSet * _dragSelectedAssetIds; // +0x1a0
    NSMutableSet * _limitAssetIds; // +0x1a8
    MMAsset * _lastSelectedAsset; // +0x1b0
    long long _reloadAnimateCounter; // +0x1b8
    MMAlbumDropPickerController * _dropController; // +0x1c0
    MMAssetPickerControllerProxyObjectForAllAsset * _m_proxyPreviewObjectForAllAsset; // +0x1c8
    MMUILabel * _tipsLabel; // +0x1d0
    MMUIImageView * _originSelectIconView; // +0x1d8
    MMUILabel * _rawTotalSizeLabel; // +0x1e0
    UIView * _navBarBlurView; // +0x1e8
    UIView * _accessLimitTipView; // +0x1f0
    UIView * _bottomBarBlurView; // +0x1f8
    MMAlbumAccessAuthView * _accessAuthView; // +0x200
    MMScrollView * _assetPickerScrollView; // +0x208
    MMAssetPickerActionBottomView * _bottomActionView; // +0x210
    MMSightCameraViewController * _sightCameraVC; // +0x218
    MMAssetPickerSlider * _slider; // +0x220
    NSMutableArray * _hybridFileArray; // +0x228
    NSMutableArray * _hybridAVAssetArray; // +0x230
    NSMutableArray * _assetExifInfo; // +0x238
    UIView * _finderTemplateLegalTipView; // +0x240
    long long _waitingToSelectIndex; // +0x248
    long long _waitingToPreviewIndex; // +0x250
    NSString * _waitingToSelectAssetId; // +0x258
    unsigned long long _m_adjustRevertIndex; // +0x260
    MMAlbumAuthorizationReportObject * _accessAuthReportObject; // +0x268
    MMImagePickerVideoCompressQueue * _videoCompressQueue; // +0x270
    NSMutableSet * _autoSelectAssetViews; // +0x278
    MMUIButton * _skipBtn; // +0x280
    NSMutableArray * _failAssets; // +0x288
    NSMutableDictionary * _cameraTakenPhotoDictionary; // +0x290
    UILabel * _bottomBarTipsLabel; // +0x298
    NSHashTable * _assetInfoTable; // +0x2a0
    MMAssetPickerControllerState * _assetPickerState; // +0x2a8
    WCFinderFeedPickerViewController * _finderPickerController; // +0x2b0
    MMAlbumDropableTitleWithMultipleSectionView * _multipleSectionTitle; // +0x2b8
    MMDropableTitleView * _defaultDropableTitle; // +0x2c0
    MMAssetUserActionTipsView * _userActionTipsView; // +0x2c8
    UIEdgeInsets _additionalTableViewInsets; // +0x2d0
}
- (void)onWCEditVideoPreComposeViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)onWCEditVideoPreCancelEditor:(id)arg1;
- (void)cancelAsyncEditVideo;
- (void)cancelSyncEditVideo;
- (void)preAsyncHandleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2;
- (void)preSyncEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2;
- (void)onEditVideoWithAssets:(id)arg1 entranceType:(unsigned long long)arg2;
- (void)processAssetAndPresentToFinderTemplateProcessVCWithAssets:(id)arg1 entranceType:(unsigned long long)arg2;
- (void)processAssetAndPresentToFinderEditVCWithAssets:(id)arg1 entranceType:(unsigned long long)arg2;
- (void)onEditTemplateVideoWithAssets:(id)arg1;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (BOOL)enableAsyncCompositeVideo:(id)arg1;
- (void)handleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2 isAsyncCompositeEnabled:(BOOL)arg3;
- (void)asyncHandleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2;
- (void)syncHandleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2;
- (void)editVideoViewController:(id)arg1 currentVC:(id)arg2 requestToLaunchMJAppWithScene:(unsigned long long)arg3 launchType:(long long)arg4 editTab:(long long)arg5 musicId:(id)arg6 exportedOpenWX:(int)arg7 launchCallback:(id /* block */)arg8;
- (void)finderTemplateProcessVC:(id)arg1 didExportFinishWithPath:(id)arg2 outputParams:(id)arg3;
- (void)finderTemplateVideoVC:(id)arg1 didExportFinishWithPath:(id)arg2 outputParams:(id)arg3;
- (void)finderProcessWithTemplateVideoPath:(id)arg1 templateParams:(id)arg2;
- (void)onEditImageWithAssets:(id)arg1 fromScene:(unsigned long long)arg2 entranceScene:(unsigned long long)arg3;
- (void)processAssetAndPresentToFinderTemplateVCWithAssets:(id)arg1 images:(id)arg2 materials:(id)arg3 fromScene:(unsigned long long)arg4 entranceScene:(unsigned long long)arg5;
- (void)processAssetAndPresentToFinderImageEditVCWithAssets:(id)arg1 images:(id)arg2 fromScene:(unsigned long long)arg3 entranceScene:(unsigned long long)arg4;
- (void)onPreviewEmoticonImageWithAssets:(id)arg1 fromScene:(unsigned long long)arg2 entranceScene:(unsigned long long)arg3;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (BOOL)isForbidPageSheet;
- (id)initForJustReturnMMAsset:(BOOL)arg1 withAdjustRevertIndex:(unsigned long long)arg2 withDirectToFirstAlbum:(BOOL)arg3;
- (id)init;
- (void)reloadData;
- (void)dealloc;
- (unsigned long long)selectedAssetInfosCount;
- (unsigned long long)selectedVideoAssetCount;
- (id)getSelectedAssets;
- (id)getSelectedAssetInfos;
- (void)addAssetSize:(id)arg1 forAsset:(unsigned long long)arg2;
- (long long)overrideUserInterfaceStyle;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (BOOL)hasSelectImageAsset;
- (BOOL)hasSelectVideoAsset;
- (BOOL)hasSelectBothImageAndVideoAsset;
- (BOOL)isAssetSelectable:(id)arg1;
- (void)assetUnselectableToast:(id)arg1;
- (void)rebuildAlbumData;
- (BOOL)canShowAddButton;
- (BOOL)canShowCameraButtonInPicker;
- (void)_tryToLoadPhotoData;
- (BOOL)isPhotoAuthorized;
- (BOOL)isWechatAuthorized;
- (BOOL)isSystemAuthNotDetermined;
- (BOOL)isSystemAuthDenied;
- (void)requestWechatAuthAndLoadAlbum;
- (void)tryStartLoadAlbum;
- (void)initData;
- (void)reportAccessAuthInterruptIfNeeded;
- (void)initView;
- (void)initAssetPickerScrollView;
- (BOOL)canAssetPickerPagingScroll;
- (void)updateAssetPickerScrollViewScrollableState;
- (unsigned long long)assetsPickerPages;
- (BOOL)canShowFinderPage;
- (BOOL)canShowCameraPage;
- (void)initTableView;
- (UIEdgeInsets)getTableViewContentInset;
- (void)updateTableViewContentInset;
- (id)navigationBarBackgroundColor;
- (double)getContentViewY;
- (void)initFooterViewButtonWithTitle:(id)arg1 andImage:(id)arg2;
- (void)initBottomBar;
- (void)initUserActionTipsViewIfNeeded;
- (void)layoutUserActionTipsViewIfNeeded;
- (BOOL)isUserActionTipsShow;
- (void)startUserActionTipsShowAnimationIfNeeded;
- (void)initTemplateComposingButtonForFinderMJPublisher;
- (void)templateComposingButtonDidTouchUpInside:(id)arg1;
- (void)initBottomBarFloatView;
- (void)initBottomActionView;
- (unsigned long long)suitableShortVideoToolbarUIStyle16To9;
- (void)activeCameraIfNeeded;
- (id)tryGetSightCameraVC;
- (void)switchToCameraWithAnimate:(BOOL)arg1;
- (void)performSwitchCameraAnimation;
- (void)switchToPickerWithAnimate:(BOOL)arg1 isDelayDeActiveCamera:(BOOL)arg2;
- (void)showBottomBarIfNeeded;
- (void)hideBottomBarIfNeeded;
- (void)initTitleView;
- (id)navTitleView;
- (void)initNoAuthTitleView;
- (void)showOperationBtnWithoutAuth;
- (void)initBottomFinderTemplateLegalTipsView;
- (void)onReShowTemplateLegalTips;
- (void)initBottomAccessLimitTipView;
- (void)tryInitAccessAuthView;
- (void)initPickerSlider;
- (BOOL)canShowPickerSlider;
- (double)tableViewScrollContentOffsetYPercent;
- (void)setTopBottomBarHidden:(BOOL)arg1 completionBlock:(id /* block */)arg2;
- (void)showTopBottomBar:(id /* block */)arg1;
- (void)hideTopBottomBar:(id /* block */)arg1;
- (void)updateTopBottomBarStateForShow;
- (void)updateTopBottomBarStateForHide;
- (void)layoutBottomBarWithTop:(double)arg1;
- (BOOL)useTransparentNavibar;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)adjustTitleView;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)adjustSubviewRects;
- (void)initGesture;
- (BOOL)shouldInteractiveDismiss;
- (id)assetPickerState;
- (id)packedAssetPickerState;
- (void)updateOriginImageCheckAccessibility;
- (void)scrollToBottom;
- (void)reloadAssetPickerWithPreview:(BOOL)arg1 dataSource:(BOOL)arg2;
- (void)reloadPhotoViewWithAnimated:(BOOL)arg1 scrollToBottom:(BOOL)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)configureSkipBtnVisibleState:(BOOL)arg1;
- (void)reloadBottomBar;
- (int)pickerScene;
- (unsigned int)getVideoUploadScene:(BOOL)arg1;
- (void)reloadCameraButton;
- (void)reloadCameraButtonOnCell:(id)arg1;
- (id)prepareImagePreviewControllerWithStartAssetInfo:(id)arg1;
- (id)prepareImagePreviewControllerWithStartAssetInfo:(id)arg1 justPreviewSelected:(BOOL)arg2;
- (void)removeImagePreviewControllerIfShowing:(id /* block */)arg1;
- (void)previewTextStateVideoWithAssetInfo:(id)arg1;
- (void)handlePreviewTextStateVideoWithAnAvAsset:(id)arg1 AssetInfo:(id)arg2;
- (void)previewImageWithAssetInfo:(id)arg1;
- (void)startPreviewLoadingIfPreviewing;
- (void)stopPreviewLoading;
- (void)reloadPreviewOnMainThread;
- (void)editAssetWithAssetInfo:(id)arg1 andFinishPicker:(BOOL)arg2;
- (void)previewImageOfSelectedWithIndex:(unsigned int)arg1;
- (void)saveEditedImage:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)saveEditedVideo:(id /* block */)arg1;
- (void)saveAsset:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)editPhoto:(id)arg1 withScene:(int)arg2;
- (void)onOriginImageCheck:(id)arg1;
- (void)onClickUserActionCheck:(id)arg1;
- (void)handleClickUserActionCheck;
- (void)onQuit;
- (void)OnPreview:(id)arg1;
- (void)OnSkipBtnClick:(id)arg1;
- (void)OnAssetSend:(id)arg1;
- (void)OnEmoticonAssetSend;
- (void)onJumpToSystemSetting:(id)arg1;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)onClickFooterViewButton;
- (void)sendSelectedMedia;
- (void)removeAllSeletedMedia;
- (void)removeBarBlurEffect;
- (void)addOutterSelectInfo;
- (void)adjustTableViewInitOffset;
- (void)recordSelectedAsset:(id)arg1;
- (void)recordSelectedAsset:(id)arg1 browserController:(id)arg2;
- (void)recordDragSelectedAsset:(id)arg1;
- (void)recordUnselectedAsset:(id)arg1;
- (id)getAlbumTitleView;
- (void)albumDropPicker:(id)arg1 didSelectAtAlbum:(id)arg2 isDefault:(BOOL)arg3;
- (void)authorizeErrorWithAlbumDropPicker:(id)arg1;
- (void)readAlbumsErrorWithAlbumDropPicker:(id)arg1;
- (void)onAlbumChanged:(id)arg1 changeInfo:(id)arg2;
- (void)removeAssetsInChangeInfo:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)assetsForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)cellHeight;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)stopLoadingAfterSent;
- (void)stopLoadingAndShowError:(id)arg1 duration:(double)arg2;
- (void)reactivePreviewBrowserSendButton;
- (BOOL)startPreviewBrowserLoading;
- (void)stopPreviewBrowserLoading;
- (void)reloadPreviewBrowser;
- (void)processingImage;
- (void)generateOriginAssetData:(id)arg1 data:(id)arg2 dic:(id)arg3;
- (void)postProcessImages;
- (void)sendFail;
- (void)showTipWithWording:(id)arg1;
- (void)showRawTotalSize:(unsigned long long)arg1;
- (void)updateSelectTotalSize;
- (void)setIsOriginSelected:(BOOL)arg1;
- (void)hiddenExceedFileLimitTips;
- (void)showExceedFileLimitTips;
- (BOOL)isSelectedAssetInfosContainsVideo;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)handleAssetPickerDidScroll;
- (void)assetPickerScrollViewDidEndScroll;
- (void)handleHorizontalScrollForCamera;
- (void)handleHorizontalScrollForFinder;
- (void)updateNavigationBarAndBottomActionViewStateWithScrollPercent:(double)arg1;
- (void)onSwitchToSectionAtIndex:(unsigned long long)arg1;
- (void)onAlbumTitleWillDeactive;
- (void)onAlbumSectionBeginSwitch;
- (void)onClickDropableTitleView:(id)arg1;
- (void)switchToPageIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)initFinderPickerView;
- (void)finderFeedPickerViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (id)finderFeedPickerNavigationController;
- (void)finderFeedPickerViewControllerAddSelected:(id)arg1;
- (void)finderFeedPickerViewControllerRemoveSelected;
- (void)assetPickerSlider:(id)arg1 didChangeActiveState:(BOOL)arg2;
- (void)assetPickerSlider:(id)arg1 didChangeValue:(double)arg2;
- (void)onPickMorePhoto;
- (void)onOpenCamera;
- (BOOL)canOpenCameraWithVideoMode;
- (id)onAssetViewWillSelect:(id)arg1;
- (id)onAssetViewDidSelect:(id)arg1;
- (id)onAssetViewWillDeselect:(id)arg1;
- (id)onAssetViewDidDeselect:(id)arg1;
- (void)onSelectAssetFinished:(id)arg1 isAutoSelct:(BOOL)arg2;
- (void)onAssetView:(id)arg1 liveButtonSelectChange:(BOOL)arg2;
- (void)cancelSelectFromImagePreview;
- (void)sendImageFromScene:(long long)arg1;
- (void)loadAssetForFinderPost:(id)arg1 postAction:(id /* block */)arg2;
- (void)selectedFinderPostShortAsset;
- (void)_onFinderEdit;
- (BOOL)hasBeenAddedCheckWithArray:(id)arg1 andImage:(id)arg2;
- (BOOL)canSelectAssetInPreview:(id)arg1;
- (void)onImagePreviewBrowserControllerStartEditing;
- (void)onImagePreviewBrowserControllerCancelEditing;
- (void)onImagePreviewBrowserControllerCancelPreview;
- (void)onImagePreviewBrowserControllerResumePreview;
- (void)onImagePreviewBrowserControllerStartExportingWithAssetId:(id)arg1;
- (void)onImagePreviewBrowserControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)previewBrowser:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (id)getReportInfo;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 sliderContentOffset:(CGPoint)arg3;
- (id)dictionaryWithJsonString:(id)arg1;
- (id)dictionaryWithGPSInfoString:(id)arg1;
- (void)onFinishEditAssetInfo:(id)arg1;
- (void)onRemoveSelectedInfoWithAssetId:(id)arg1;
- (void)onRemoveSelectedInfo:(id)arg1;
- (void)updateSectionTitle;
- (void)onUpdateLivePhotoIconDisplayStatus:(id)arg1;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2 browserController:(id)arg3;
- (void)clickAssetInfo:(id)arg1;
- (void)sendVideoWithAsset:(id)arg1;
- (void)onMoveSelectedInfo:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)onOriginImageCheckChanged;
- (id)previewBrowser:(id)arg1 withBrowserView:(id)arg2 willChangeUserActionCheckTo:(BOOL)arg3 enabled:(BOOL)arg4;
- (id)previewBrowser:(id)arg1 withBrowserView:(id)arg2 didChangeUserActionCheckTo:(BOOL)arg3 enabled:(BOOL)arg4;
- (id)previewBrowser:(id)arg1 willLoadBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 didLoadBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 willSelectBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 didSelectBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 willDeselectBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 didDeselectBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 willEditVideoAsset:(id)arg2;
- (id)previewBrowser:(id)arg1 didEditVideoAsset:(id)arg2 byEditAttr:(id)arg3;
- (void)previewBrowserDidFinished:(id)arg1;
- (id)_onUserActionCheckChangedFromSource:(long long)arg1;
- (void)updateAssetPickerControllerWithState:(id)arg1;
- (BOOL)isSendButtonEnable;
- (long long)indexInSelectedAssetInfosForAssetInfo:(id)arg1;
- (CGRect)assetViewFrameGlobal:(id)arg1;
- (void)waitingToSelectIndex:(long long)arg1 assetId:(id)arg2;
- (void)waitingToPreviewIndex:(long long)arg1 assetId:(id)arg2;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightCameraClose:(id)arg1;
- (void)onSightCameraViewControllerDidStopCamera;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightCameraViewControllerCancelEditing;
- (void)onSightCameraViewControllerDidTakeMedia;
- (void)onSightCameraViewControllerDidOpenCamera;
- (void)onSightCameraViewControllerStartExportingWithAssetId:(id)arg1;
- (void)onSightCameraViewControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (BOOL)canAsyncCompositeVideo;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)sendVideoWithURL:(id)arg1 aigcContent:(id)arg2;
- (void)sendVideoWithDraft:(id)arg1;
- (void)sendImageWithEditImageAttr:(id)arg1;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostSession:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (void)onAccessAuthOpenSystemSetting;
- (void)openSystemSetting;
- (void)onAccessAuthShowLimitedPhotos;
- (void)onAccessAuthOpenWechatSetting;
- (void)longVideoChooseHelper:(id)arg1 postSession:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)asyncGetAssetVideo:(id)arg1 compress:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)compressAndSendVideo:(id)arg1;
- (id /* block */)getVideoExportCallbackBlockWithAsset:(id)arg1 URL:(id)arg2 noCompress:(BOOL)arg3 exifLogInfo:(id)arg4;
- (unsigned long long)getPickerSceneFromOptionObj;
- (BOOL)getPickerWAVideoCompressedFromOptionObj;
- (void)OnCompressBegin;
- (void)OnCompressEnd:(id)arg1;
- (void)OnCompressedSuccess:(id)arg1;
- (long long)getSelectedFirstAssetType;
- (void)OnCancel:(id)arg1;
- (void)didClickCancel;
- (void)onRealAlbumFinsihLoad:(id)arg1;
- (id)genSendBtnDataReportDict;
- (id)dragSelectIndexPathForRowAtPoint:(CGPoint)arg1;
- (BOOL)dragSelectAssetIsSelectedAtPoint:(CGPoint)arg1;
- (void)dragSelectDoActionForIndexPath:(id)arg1 select:(BOOL)arg2;
- (void)notifyLimitTips:(id)arg1 assetInfo:(id)arg2 scene:(unsigned long long)arg3 showAlert:(BOOL)arg4;
- (id)convertAssetIndexPathFromPoint:(CGPoint)arg1;
- (id)assetViewForIndexPath:(id)arg1;
- (id)convertTableIndexPathFromAssetIndexPath:(id)arg1;
- (void)scrollVisibleToIndexPath:(id)arg1;
- (void)registerYReportSdk;
- (void)bindBottomSendBtnToReport;
- (BOOL)isOnFinderScene;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)m_album;
- (void)setM_album:(id)arg1;
- (BOOL)isOriginSelected;
- (BOOL)disableInteractivePop;
- (void)setDisableInteractivePop:(BOOL)arg1;
- (id)selectedAssetInfos;
- (void)setSelectedAssetInfos:(id)arg1;
- (id)selectedFinderDataInfo;
- (void)setSelectedFinderDataInfo:(id)arg1;
- (id)dragSelectHelper;
- (void)setDragSelectHelper:(id)arg1;
- (BOOL)isHiddenSliderTopMask;
- (void)setIsHiddenSliderTopMask:(BOOL)arg1;
- (BOOL)isSupportHeif;
- (void)setIsSupportHeif:(BOOL)arg1;
- (id)editingInfo;
- (void)setEditingInfo:(id)arg1;
- (id)preCompositionResult;
- (void)setPreCompositionResult:(id)arg1;
- (id)preEncodeTask;
- (void)setPreEncodeTask:(id)arg1;
- (id)postEncodeTask;
- (void)setPostEncodeTask:(id)arg1;
- (id)preFinderTask;
- (void)setPreFinderTask:(id)arg1;
- (id)postFinderTask;
- (void)setPostFinderTask:(id)arg1;
- (unsigned long long)preCompressCount;
- (void)setPreCompressCount:(unsigned long long)arg1;
- (UIEdgeInsets)additionalTableViewInsets;
- (void)setAdditionalTableViewInsets:(UIEdgeInsets)arg1;
- (BOOL)m_isJustReturnMMAsset;
- (void)setM_isJustReturnMMAsset:(BOOL)arg1;
- (BOOL)m_hasClickSendButton;
- (void)setM_hasClickSendButton:(BOOL)arg1;
- (BOOL)m_directToFirstAlbum;
- (void)setM_directToFirstAlbum:(BOOL)arg1;
- (BOOL)isDefaultAlbum;
- (void)setIsDefaultAlbum:(BOOL)arg1;
- (BOOL)didFinishLoadAlbum;
- (void)setDidFinishLoadAlbum:(BOOL)arg1;
- (id)dateFormatter;
- (void)setDateFormatter:(id)arg1;
- (long long)colNum;
- (void)setColNum:(long long)arg1;
- (id)selectedDefaultAssetIds;
- (void)setSelectedDefaultAssetIds:(id)arg1;
- (id)selectedOtherAssetIds;
- (void)setSelectedOtherAssetIds:(id)arg1;
- (id)dragSelectedAssetIds;
- (void)setDragSelectedAssetIds:(id)arg1;
- (id)limitAssetIds;
- (void)setLimitAssetIds:(id)arg1;
- (id)lastSelectedAsset;
- (void)setLastSelectedAsset:(id)arg1;
- (long long)reloadAnimateCounter;
- (void)setReloadAnimateCounter:(long long)arg1;
- (BOOL)reloadAnimating;
- (void)setReloadAnimating:(BOOL)arg1;
- (id)dropController;
- (void)setDropController:(id)arg1;
- (id)m_proxyPreviewObjectForAllAsset;
- (void)setM_proxyPreviewObjectForAllAsset:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)originSelectIconView;
- (void)setOriginSelectIconView:(id)arg1;
- (id)rawTotalSizeLabel;
- (void)setRawTotalSizeLabel:(id)arg1;
- (id)navBarBlurView;
- (void)setNavBarBlurView:(id)arg1;
- (id)accessLimitTipView;
- (void)setAccessLimitTipView:(id)arg1;
- (id)bottomBarBlurView;
- (void)setBottomBarBlurView:(id)arg1;
- (id)accessAuthView;
- (void)setAccessAuthView:(id)arg1;
- (id)assetPickerScrollView;
- (void)setAssetPickerScrollView:(id)arg1;
- (id)bottomActionView;
- (void)setBottomActionView:(id)arg1;
- (id)sightCameraVC;
- (void)setSightCameraVC:(id)arg1;
- (BOOL)didSwitchToCamera;
- (void)setDidSwitchToCamera:(BOOL)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (BOOL)isTopBarAnimating;
- (void)setIsTopBarAnimating:(BOOL)arg1;
- (id)hybridFileArray;
- (void)setHybridFileArray:(id)arg1;
- (id)hybridAVAssetArray;
- (void)setHybridAVAssetArray:(id)arg1;
- (id)assetExifInfo;
- (void)setAssetExifInfo:(id)arg1;
- (id)finderTemplateLegalTipView;
- (void)setFinderTemplateLegalTipView:(id)arg1;
- (long long)waitingToSelectIndex;
- (void)setWaitingToSelectIndex:(long long)arg1;
- (long long)waitingToPreviewIndex;
- (void)setWaitingToPreviewIndex:(long long)arg1;
- (id)waitingToSelectAssetId;
- (void)setWaitingToSelectAssetId:(id)arg1;
- (BOOL)isDragged;
- (void)setIsDragged:(BOOL)arg1;
- (BOOL)bPickerStyleForFile;
- (void)setBPickerStyleForFile:(BOOL)arg1;
- (unsigned long long)m_adjustRevertIndex;
- (void)setM_adjustRevertIndex:(unsigned long long)arg1;
- (id)accessAuthReportObject;
- (void)setAccessAuthReportObject:(id)arg1;
- (id)videoCompressQueue;
- (void)setVideoCompressQueue:(id)arg1;
- (BOOL)isAccessLimited;
- (void)setIsAccessLimited:(BOOL)arg1;
- (id)autoSelectAssetViews;
- (void)setAutoSelectAssetViews:(id)arg1;
- (id)skipBtn;
- (void)setSkipBtn:(id)arg1;
- (id)failAssets;
- (void)setFailAssets:(id)arg1;
- (id)cameraTakenPhotoDictionary;
- (void)setCameraTakenPhotoDictionary:(id)arg1;
- (id)bottomBarTipsLabel;
- (void)setBottomBarTipsLabel:(id)arg1;
- (id)assetInfoTable;
- (void)setAssetInfoTable:(id)arg1;
- (void)setAssetPickerState:(id)arg1;
- (id)finderPickerController;
- (void)setFinderPickerController:(id)arg1;
- (id)multipleSectionTitle;
- (void)setMultipleSectionTitle:(id)arg1;
- (id)defaultDropableTitle;
- (void)setDefaultDropableTitle:(id)arg1;
- (BOOL)isAssetScrollViewUserDragging;
- (void)setIsAssetScrollViewUserDragging:(BOOL)arg1;
- (id)userActionTipsView;
- (void)setUserActionTipsView:(id)arg1;
- (BOOL)isAlbumOptimizeClicfgOn;
- (void)setIsAlbumOptimizeClicfgOn:(BOOL)arg1;
- (void).cxx_destruct;
@end
