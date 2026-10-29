@interface MMImagePickerController : MMUINavigationController <UINavigationControllerDelegate, MMImagePickerControlCenter>
{
    BOOL _isOpenSendOriginVideo; // +0x8
    BOOL _canSendOriginImage; // +0x9
    BOOL _forceSendOriginImage; // +0xa
    BOOL _isUserActionCheckShowed; // +0xb
    BOOL _enforceUserActionCheck; // +0xc
    BOOL _enforceUserActionUnCheck; // +0xd
    BOOL _isUserActionSelected; // +0xe
    BOOL _isHidePreviewPlayButton; // +0xf
    BOOL _shouldShowFinderMJPublisherTemplateComposingButton; // +0x10
    BOOL _canSendVideoMessage; // +0x11
    BOOL _isOnlyShowVideoMessage; // +0x12
    BOOL _isNotShowVideoSizeAlertView; // +0x13
    BOOL _isAsyncCompositeEnabled; // +0x14
    BOOL _canSendMultiImage; // +0x15
    BOOL _canSendMultiVideo; // +0x16
    BOOL _needThumbImage; // +0x17
    BOOL _showPreviewView; // +0x18
    BOOL _customizesClickAction; // +0x19
    BOOL _returnMetaForVideo; // +0x1a
    BOOL _canSendGif; // +0x1b
    BOOL _canHybridSendAsset; // +0x1c
    BOOL _disableVideoSelection; // +0x1d
    BOOL _canDragSelect; // +0x1e
    BOOL _isOriginalImage; // +0x1f
    BOOL _isEditMode; // +0x20
    BOOL _isPresentInSplitVC; // +0x21
    BOOL _isAllowCache; // +0x22
    BOOL _isPickerFinished; // +0x23
    BOOL _doNotAutoHandleImageEditorDismiss; // +0x24
    BOOL _videoDirectToEdit; // +0x25
    BOOL _imageDirectToEdit; // +0x26
    BOOL _buttonEnableAfterSend; // +0x27
    BOOL _showSkipBtn; // +0x28
    BOOL _showsCameraButtonInPicker; // +0x29
    BOOL _showsCameraButtonAtBottom; // +0x2a
    BOOL _isCameraButtonDisabled; // +0x2b
    BOOL _toVideoTemplateEditor; // +0x2c
    BOOL _toVideoTemplateSelectAndEditViewController; // +0x2d
    BOOL _showFinderPicker; // +0x2e
    BOOL _showAssetWithLocationOnly; // +0x2f
    int _maxImageCount; // +0x30
    int _compressType; // +0x34
    int _previewEditScene; // +0x38
    id <MMImagePickerControllerDelegate> m_delegate; // +0x40
    MMAssetPickerController * _photoPicker; // +0x48
    long long _userActionCheckScene; // +0x50
    NSString * _userActionCheckTitle; // +0x58
    id <MMAssetPickerUserActionTipsProtocol> _userActionTipsActivity; // +0x60
    NSNumber * _bottomInset; // +0x68
    NSString * _finishWording; // +0x70
    NSString * _currentAlbum; // +0x78
    NSArray * _selectedImageURLs; // +0x80
    NSArray * _selectedImageAssets; // +0x88
    MMImagePickerControllerPreviewReportObject * m_previewReportObject; // +0x90
    EditImageLogicController * _editImageLogicController; // +0x98
    EditVideoLogicController * _editVideoLogicController; // +0xa0
    unsigned long long _maxGifDataSize; // +0xa8
    WCFinderEditOptionModel * _finderOptionModel; // +0xb0
    NSMutableDictionary * _dicExtInfo; // +0xb8
    NSString * _pickerBottomFloatText; // +0xc0
    long long _livePhotoMode; // +0xc8
    NSString * _footerViewButtonTitle; // +0xd0
    NSString * _videoTemplateId; // +0xd8
    NSString * _videoTemplateMusicId; // +0xe0
    NSString * _pickerBottomTips; // +0xe8
    WCFinderPickerTemplateParams * _finderTemplateParams; // +0xf0
    MMFinderLiveImagePickerParams * _finderLiveParams; // +0xf8
    id /* block */ _assetSelectedBlock; // +0x100
    unsigned long long _authScene; // +0x108
    unsigned long long _enterTime; // +0x110
    _NSRange _selectCountLimit; // +0x118
}
- (id)initForJustReturnMMAsset:(BOOL)arg1 withAdjustRevertIndex:(unsigned long long)arg2 withDirectToFirstAlbum:(BOOL)arg3 withOnlyShowVideoMessage:(BOOL)arg4 withNotShowVideoSizeAlertView:(BOOL)arg5 withPickerVCForceFullScrenn:(BOOL)arg6;
- (id)init;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)isFinderScene;
- (id)getReportExtInfoDismissState:(BOOL)arg1 eventCode:(long long)arg2;
- (void)removeImageDatas;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willChangeUserActionCheckTo:(BOOL)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didChangeUserActionCheckTo:(BOOL)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willEditVideoAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didEditVideoAsset:(id)arg2 byEditAttr:(id)arg3 withCurrentState:(id)arg4;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)didFinishPickingWithAssetInfos:(id)arg1 isUsingTemplate:(BOOL)arg2;
- (void)customBottomComposingButtonEnabledStateDidChange:(BOOL)arg1;
- (id)customBottomComposingButtonForAssetPreviewing:(BOOL)arg1;
- (void)cancelImagePicker;
- (void)assetPickerWillAppear;
- (void)selectedClickNextAction;
- (void)selectedAssets:(id)arg1;
- (void)didClickSkipBtn;
- (void)assetPickerDidPopOrDismiss;
- (void)didCancelEditImage;
- (void)didCancelEditVideo;
- (void)selectedVideo:(id)arg1;
- (void)selectedSight:(id)arg1;
- (void)selectedEditImageAttr:(id)arg1;
- (void)selectAsset:(id)arg1;
- (void)selectFinderDataItem:(id)arg1;
- (void)failToFetchAssets:(id)arg1;
- (void)selectedFinderPostSession:(id)arg1;
- (void)openCameraWithVideoMode:(BOOL)arg1 viewController:(id)arg2;
- (id)getCameraWithVideoMode:(BOOL)arg1 viewController:(id)arg2;
- (void)onClickFooterViewButton;
- (void)startEditing;
- (void)cancelEditing;
- (void)startPreview;
- (void)cancelPreview;
- (void)didCancelSightCamera;
- (void)didTakeMedia;
- (void)assetPickerControllerDidAppear;
- (void)didOpenCamera;
- (void)startExportingWithAssetId:(id)arg1;
- (void)endExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)increasePreviewCount;
- (void)reportPreviewCount;
- (id)pickerReportInfo;
- (void)reportPicerReportInfo;
- (void)reportPickerActionInfo;
- (void)reportPickerCancelActionInfo;
- (void)logStartImagePicker;
- (void)logImagePickerFinishLoad:(BOOL)arg1;
- (int)getPickerScene;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)setEditImageLogicController:(id)arg1;
- (void)setEditVideoLogicController:(id)arg1;
- (void)onAssetPickerControlCenterClickPostFinderLongVideoWithPostSession:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)photoPicker;
- (void)setPhotoPicker:(id)arg1;
- (BOOL)isOpenSendOriginVideo;
- (void)setIsOpenSendOriginVideo:(BOOL)arg1;
- (BOOL)canSendOriginImage;
- (void)setCanSendOriginImage:(BOOL)arg1;
- (BOOL)forceSendOriginImage;
- (void)setForceSendOriginImage:(BOOL)arg1;
- (long long)userActionCheckScene;
- (void)setUserActionCheckScene:(long long)arg1;
- (BOOL)isUserActionCheckShowed;
- (void)setIsUserActionCheckShowed:(BOOL)arg1;
- (BOOL)enforceUserActionCheck;
- (void)setEnforceUserActionCheck:(BOOL)arg1;
- (BOOL)enforceUserActionUnCheck;
- (void)setEnforceUserActionUnCheck:(BOOL)arg1;
- (BOOL)isUserActionSelected;
- (void)setIsUserActionSelected:(BOOL)arg1;
- (id)userActionCheckTitle;
- (void)setUserActionCheckTitle:(id)arg1;
- (id)userActionTipsActivity;
- (void)setUserActionTipsActivity:(id)arg1;
- (BOOL)isHidePreviewPlayButton;
- (void)setIsHidePreviewPlayButton:(BOOL)arg1;
- (BOOL)shouldShowFinderMJPublisherTemplateComposingButton;
- (void)setShouldShowFinderMJPublisherTemplateComposingButton:(BOOL)arg1;
- (BOOL)canSendVideoMessage;
- (void)setCanSendVideoMessage:(BOOL)arg1;
- (BOOL)isOnlyShowVideoMessage;
- (void)setIsOnlyShowVideoMessage:(BOOL)arg1;
- (BOOL)isNotShowVideoSizeAlertView;
- (void)setIsNotShowVideoSizeAlertView:(BOOL)arg1;
- (BOOL)isAsyncCompositeEnabled;
- (void)setIsAsyncCompositeEnabled:(BOOL)arg1;
- (BOOL)canSendMultiImage;
- (void)setCanSendMultiImage:(BOOL)arg1;
- (BOOL)canSendMultiVideo;
- (void)setCanSendMultiVideo:(BOOL)arg1;
- (id)bottomInset;
- (void)setBottomInset:(id)arg1;
- (BOOL)needThumbImage;
- (void)setNeedThumbImage:(BOOL)arg1;
- (BOOL)showPreviewView;
- (void)setShowPreviewView:(BOOL)arg1;
- (BOOL)customizesClickAction;
- (void)setCustomizesClickAction:(BOOL)arg1;
- (BOOL)returnMetaForVideo;
- (void)setReturnMetaForVideo:(BOOL)arg1;
- (BOOL)canSendGif;
- (void)setCanSendGif:(BOOL)arg1;
- (BOOL)canHybridSendAsset;
- (void)setCanHybridSendAsset:(BOOL)arg1;
- (BOOL)disableVideoSelection;
- (void)setDisableVideoSelection:(BOOL)arg1;
- (int)maxImageCount;
- (void)setMaxImageCount:(int)arg1;
- (BOOL)canDragSelect;
- (void)setCanDragSelect:(BOOL)arg1;
- (int)compressType;
- (void)setCompressType:(int)arg1;
- (id)finishWording;
- (void)setFinishWording:(id)arg1;
- (id)currentAlbum;
- (void)setCurrentAlbum:(id)arg1;
- (id)selectedImageURLs;
- (void)setSelectedImageURLs:(id)arg1;
- (id)selectedImageAssets;
- (void)setSelectedImageAssets:(id)arg1;
- (BOOL)isOriginalImage;
- (void)setIsOriginalImage:(BOOL)arg1;
- (BOOL)isEditMode;
- (void)setIsEditMode:(BOOL)arg1;
- (int)previewEditScene;
- (void)setPreviewEditScene:(int)arg1;
- (BOOL)isPresentInSplitVC;
- (void)setIsPresentInSplitVC:(BOOL)arg1;
- (BOOL)isAllowCache;
- (void)setIsAllowCache:(BOOL)arg1;
- (BOOL)isPickerFinished;
- (void)setIsPickerFinished:(BOOL)arg1;
- (BOOL)doNotAutoHandleImageEditorDismiss;
- (void)setDoNotAutoHandleImageEditorDismiss:(BOOL)arg1;
- (id)m_previewReportObject;
- (void)setM_previewReportObject:(id)arg1;
- (id)editImageLogicController;
- (id)editVideoLogicController;
- (unsigned long long)maxGifDataSize;
- (void)setMaxGifDataSize:(unsigned long long)arg1;
- (BOOL)videoDirectToEdit;
- (void)setVideoDirectToEdit:(BOOL)arg1;
- (BOOL)imageDirectToEdit;
- (void)setImageDirectToEdit:(BOOL)arg1;
- (BOOL)buttonEnableAfterSend;
- (void)setButtonEnableAfterSend:(BOOL)arg1;
- (id)finderOptionModel;
- (void)setFinderOptionModel:(id)arg1;
- (BOOL)showSkipBtn;
- (void)setShowSkipBtn:(BOOL)arg1;
- (id)dicExtInfo;
- (void)setDicExtInfo:(id)arg1;
- (id)pickerBottomFloatText;
- (void)setPickerBottomFloatText:(id)arg1;
- (long long)livePhotoMode;
- (void)setLivePhotoMode:(long long)arg1;
- (id)footerViewButtonTitle;
- (void)setFooterViewButtonTitle:(id)arg1;
- (BOOL)showsCameraButtonInPicker;
- (void)setShowsCameraButtonInPicker:(BOOL)arg1;
- (BOOL)showsCameraButtonAtBottom;
- (void)setShowsCameraButtonAtBottom:(BOOL)arg1;
- (BOOL)isCameraButtonDisabled;
- (void)setIsCameraButtonDisabled:(BOOL)arg1;
- (BOOL)toVideoTemplateEditor;
- (void)setToVideoTemplateEditor:(BOOL)arg1;
- (id)videoTemplateId;
- (void)setVideoTemplateId:(id)arg1;
- (id)videoTemplateMusicId;
- (void)setVideoTemplateMusicId:(id)arg1;
- (id)pickerBottomTips;
- (void)setPickerBottomTips:(id)arg1;
- (_NSRange)selectCountLimit;
- (void)setSelectCountLimit:(_NSRange)arg1;
- (BOOL)toVideoTemplateSelectAndEditViewController;
- (void)setToVideoTemplateSelectAndEditViewController:(BOOL)arg1;
- (id)finderTemplateParams;
- (void)setFinderTemplateParams:(id)arg1;
- (id)finderLiveParams;
- (void)setFinderLiveParams:(id)arg1;
- (BOOL)showFinderPicker;
- (void)setShowFinderPicker:(BOOL)arg1;
- (id /* block */)assetSelectedBlock;
- (void)setAssetSelectedBlock:(id /* block */)arg1;
- (BOOL)showAssetWithLocationOnly;
- (void)setShowAssetWithLocationOnly:(BOOL)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

