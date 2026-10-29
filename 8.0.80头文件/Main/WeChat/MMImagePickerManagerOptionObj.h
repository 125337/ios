@interface MMImagePickerManagerOptionObj : MMObject <NSCopying>
{
    BOOL _isCamera; // +0x8
    BOOL _isFrontCameraDevice; // +0x9
    BOOL _isOnlyShowVideoMode; // +0xa
    BOOL _isNotShowVideoSizeAlertView; // +0xb
    BOOL _canSendOriginalImage; // +0xc
    BOOL _canSendVideoMessage; // +0xd
    BOOL _canSendMultiImage; // +0xe
    BOOL _needThumbImage; // +0xf
    BOOL m_isJustReturnMMAsset; // +0x10
    BOOL m_directToFirstAlbum; // +0x11
    BOOL _canSendGif; // +0x12
    BOOL _isWAVideoCompressed; // +0x13
    BOOL _isPresentInSplitVC; // +0x14
    BOOL _isAllowCache; // +0x15
    BOOL _isSightCamera; // +0x16
    BOOL _isAutoConfirm; // +0x17
    BOOL _isSightCameraLandscapeEnabled; // +0x18
    BOOL _isAsyncCompositeEnabled; // +0x19
    BOOL _isHidePreviewPlayButton; // +0x1a
    BOOL _customizesClickAction; // +0x1b
    BOOL _forceSendOriginalImage; // +0x1c
    BOOL _hideOriginButton; // +0x1d
    BOOL _isUserActionCheckShowed; // +0x1e
    BOOL _enforceUserActionCheck; // +0x1f
    BOOL _enforceUserActionUnCheck; // +0x20
    BOOL _isUserActionSelected; // +0x21
    BOOL _shouldShowFinderMJPublisherTemplateComposingButton; // +0x22
    BOOL _canSendMultiVideo; // +0x23
    BOOL _canHybridSendAsset; // +0x24
    BOOL _disableVideoSelection; // +0x25
    BOOL _isOpenSendOriginVideo; // +0x26
    BOOL _isPickerCustom; // +0x27
    BOOL _videoDirectToEditMode; // +0x28
    BOOL _imageDirectToEditMode; // +0x29
    BOOL _buttonEnableAfterSend; // +0x2a
    BOOL _isPickerForceFullScreen; // +0x2b
    BOOL _showSkipBtn; // +0x2c
    BOOL _showsCameraButtonInPicker; // +0x2d
    BOOL _showsCameraButtonAtBottom; // +0x2e
    BOOL _isCameraButtonDisabled; // +0x2f
    BOOL _isInternalAction; // +0x30
    BOOL _toVideoTemplateEditor; // +0x31
    BOOL _toVideoTemplateSelectAndEditViewController; // +0x32
    BOOL _shouldHidePickerBottomFloatIcon; // +0x33
    BOOL _shouldShowPickerBottomFloatViewInitialized; // +0x34
    BOOL _showFinderPicker; // +0x35
    BOOL _doNotAutoHandleImageEditorDismiss; // +0x36
    BOOL _isSupportHeif; // +0x37
    BOOL _showAssetWithLocationOnly; // +0x38
    BOOL _canShowMultiSelectAndInfo; // +0x39
    BOOL _shouldHideEditBtnInPreview; // +0x3a
    BOOL _enablePageSheetMode; // +0x3b
    BOOL _enableNewAlbumNavStyle; // +0x3c
    int _previewType; // +0x40
    int _compressType; // +0x44
    int _finishWordMode; // +0x48
    int m_pickerScene; // +0x4c
    int _previewEditScene; // +0x50
    unsigned long long _uiMaxVideoDuration; // +0x58
    unsigned long long _uiMinVideoDuration; // +0x60
    long long _maxImageCount; // +0x68
    NSArray * _selectedImageURLs; // +0x70
    NSArray * _selectedImageAssets; // +0x78
    id _delegateObj; // +0x80
    unsigned long long m_adjustRevertIndex; // +0x88
    unsigned long long _maxGifDataSize; // +0x90
    id /* block */ _assetSelectedBlock; // +0x98
    unsigned long long _authScene; // +0xa0
    double _delayDuration; // +0xa8
    unsigned long long _sightCameraMode; // +0xb0
    long long _userActionCheckScene; // +0xb8
    NSString * _userActionCheckTitle; // +0xc0
    id <MMAssetPickerUserActionTipsProtocol> _userActionTipsActivity; // +0xc8
    long long _canDragSelect; // +0xd0
    NSString * _finishButtonWording; // +0xd8
    MMNearbyPoiInfo * _poiInfo; // +0xe0
    long long _videoQualityType; // +0xe8
    WCFinderEditOptionModel * _finderOptionModel; // +0xf0
    NSString * _monoServiceId; // +0xf8
    NSString * _footerViewButtonTitle; // +0x100
    NSString * _videoTemplateId; // +0x108
    NSString * _videoTemplateMusicId; // +0x110
    NSString * _pickerBottomTips; // +0x118
    WCFinderPickerTemplateParams * _finderTemplateParams; // +0x120
    MMFinderLiveImagePickerParams * _finderLiveParams; // +0x128
    NSString * _pickerBottomFloatText; // +0x130
    UIColor * _pickerBottomIconTintColor; // +0x138
    NSNumber * _bottomInset; // +0x140
    NSMutableDictionary * _dicExtInfo; // +0x148
    long long _livePhotoMode; // +0x150
    unsigned long long _clickToEnterPickerTime; // +0x158
    long long _selectionConfirmMode; // +0x160
    double _pageSheetModeHeight; // +0x168
    _NSRange _selectCountLimit; // +0x170
}
- (void)setByPassInfoObject:(id)arg1 forKey:(id)arg2;
- (id)getByPassInfo;
- (void)setImagePickerByPassInfo:(id)arg1;
- (id)getImagePickerByPassInfo;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setShowsCameraButtonAtBottom:(BOOL)arg1;
- (BOOL)isCamera;
- (void)setIsCamera:(BOOL)arg1;
- (BOOL)isFrontCameraDevice;
- (void)setIsFrontCameraDevice:(BOOL)arg1;
- (BOOL)isOnlyShowVideoMode;
- (void)setIsOnlyShowVideoMode:(BOOL)arg1;
- (BOOL)isNotShowVideoSizeAlertView;
- (void)setIsNotShowVideoSizeAlertView:(BOOL)arg1;
- (unsigned long long)uiMaxVideoDuration;
- (void)setUiMaxVideoDuration:(unsigned long long)arg1;
- (unsigned long long)uiMinVideoDuration;
- (void)setUiMinVideoDuration:(unsigned long long)arg1;
- (int)previewType;
- (void)setPreviewType:(int)arg1;
- (BOOL)canSendOriginalImage;
- (void)setCanSendOriginalImage:(BOOL)arg1;
- (BOOL)canSendVideoMessage;
- (void)setCanSendVideoMessage:(BOOL)arg1;
- (BOOL)canSendMultiImage;
- (void)setCanSendMultiImage:(BOOL)arg1;
- (BOOL)needThumbImage;
- (void)setNeedThumbImage:(BOOL)arg1;
- (long long)maxImageCount;
- (void)setMaxImageCount:(long long)arg1;
- (int)compressType;
- (void)setCompressType:(int)arg1;
- (id)selectedImageURLs;
- (void)setSelectedImageURLs:(id)arg1;
- (id)selectedImageAssets;
- (void)setSelectedImageAssets:(id)arg1;
- (int)finishWordMode;
- (void)setFinishWordMode:(int)arg1;
- (id)delegateObj;
- (void)setDelegateObj:(id)arg1;
- (BOOL)m_isJustReturnMMAsset;
- (void)setM_isJustReturnMMAsset:(BOOL)arg1;
- (int)m_pickerScene;
- (void)setM_pickerScene:(int)arg1;
- (unsigned long long)m_adjustRevertIndex;
- (void)setM_adjustRevertIndex:(unsigned long long)arg1;
- (BOOL)m_directToFirstAlbum;
- (void)setM_directToFirstAlbum:(BOOL)arg1;
- (BOOL)canSendGif;
- (void)setCanSendGif:(BOOL)arg1;
- (BOOL)isWAVideoCompressed;
- (void)setIsWAVideoCompressed:(BOOL)arg1;
- (unsigned long long)maxGifDataSize;
- (void)setMaxGifDataSize:(unsigned long long)arg1;
- (BOOL)isPresentInSplitVC;
- (void)setIsPresentInSplitVC:(BOOL)arg1;
- (BOOL)isAllowCache;
- (void)setIsAllowCache:(BOOL)arg1;
- (id /* block */)assetSelectedBlock;
- (void)setAssetSelectedBlock:(id /* block */)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (BOOL)isSightCamera;
- (void)setIsSightCamera:(BOOL)arg1;
- (BOOL)isAutoConfirm;
- (void)setIsAutoConfirm:(BOOL)arg1;
- (double)delayDuration;
- (void)setDelayDuration:(double)arg1;
- (unsigned long long)sightCameraMode;
- (void)setSightCameraMode:(unsigned long long)arg1;
- (BOOL)isSightCameraLandscapeEnabled;
- (void)setIsSightCameraLandscapeEnabled:(BOOL)arg1;
- (BOOL)isAsyncCompositeEnabled;
- (void)setIsAsyncCompositeEnabled:(BOOL)arg1;
- (int)previewEditScene;
- (void)setPreviewEditScene:(int)arg1;
- (BOOL)isHidePreviewPlayButton;
- (void)setIsHidePreviewPlayButton:(BOOL)arg1;
- (BOOL)customizesClickAction;
- (void)setCustomizesClickAction:(BOOL)arg1;
- (BOOL)forceSendOriginalImage;
- (void)setForceSendOriginalImage:(BOOL)arg1;
- (BOOL)hideOriginButton;
- (void)setHideOriginButton:(BOOL)arg1;
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
- (BOOL)shouldShowFinderMJPublisherTemplateComposingButton;
- (void)setShouldShowFinderMJPublisherTemplateComposingButton:(BOOL)arg1;
- (BOOL)canSendMultiVideo;
- (void)setCanSendMultiVideo:(BOOL)arg1;
- (long long)canDragSelect;
- (void)setCanDragSelect:(long long)arg1;
- (id)finishButtonWording;
- (void)setFinishButtonWording:(id)arg1;
- (BOOL)canHybridSendAsset;
- (void)setCanHybridSendAsset:(BOOL)arg1;
- (BOOL)disableVideoSelection;
- (void)setDisableVideoSelection:(BOOL)arg1;
- (BOOL)isOpenSendOriginVideo;
- (void)setIsOpenSendOriginVideo:(BOOL)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (BOOL)isPickerCustom;
- (void)setIsPickerCustom:(BOOL)arg1;
- (BOOL)videoDirectToEditMode;
- (void)setVideoDirectToEditMode:(BOOL)arg1;
- (BOOL)imageDirectToEditMode;
- (void)setImageDirectToEditMode:(BOOL)arg1;
- (BOOL)buttonEnableAfterSend;
- (void)setButtonEnableAfterSend:(BOOL)arg1;
- (long long)videoQualityType;
- (void)setVideoQualityType:(long long)arg1;
- (BOOL)isPickerForceFullScreen;
- (void)setIsPickerForceFullScreen:(BOOL)arg1;
- (id)finderOptionModel;
- (void)setFinderOptionModel:(id)arg1;
- (BOOL)showSkipBtn;
- (void)setShowSkipBtn:(BOOL)arg1;
- (id)monoServiceId;
- (void)setMonoServiceId:(id)arg1;
- (id)footerViewButtonTitle;
- (void)setFooterViewButtonTitle:(id)arg1;
- (BOOL)showsCameraButtonInPicker;
- (void)setShowsCameraButtonInPicker:(BOOL)arg1;
- (BOOL)showsCameraButtonAtBottom;
- (BOOL)isCameraButtonDisabled;
- (void)setIsCameraButtonDisabled:(BOOL)arg1;
- (BOOL)isInternalAction;
- (void)setIsInternalAction:(BOOL)arg1;
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
- (id)pickerBottomFloatText;
- (void)setPickerBottomFloatText:(id)arg1;
- (id)pickerBottomIconTintColor;
- (void)setPickerBottomIconTintColor:(id)arg1;
- (BOOL)shouldHidePickerBottomFloatIcon;
- (void)setShouldHidePickerBottomFloatIcon:(BOOL)arg1;
- (BOOL)shouldShowPickerBottomFloatViewInitialized;
- (void)setShouldShowPickerBottomFloatViewInitialized:(BOOL)arg1;
- (BOOL)showFinderPicker;
- (void)setShowFinderPicker:(BOOL)arg1;
- (BOOL)doNotAutoHandleImageEditorDismiss;
- (void)setDoNotAutoHandleImageEditorDismiss:(BOOL)arg1;
- (id)bottomInset;
- (void)setBottomInset:(id)arg1;
- (id)dicExtInfo;
- (void)setDicExtInfo:(id)arg1;
- (long long)livePhotoMode;
- (void)setLivePhotoMode:(long long)arg1;
- (BOOL)isSupportHeif;
- (void)setIsSupportHeif:(BOOL)arg1;
- (BOOL)showAssetWithLocationOnly;
- (void)setShowAssetWithLocationOnly:(BOOL)arg1;
- (BOOL)canShowMultiSelectAndInfo;
- (void)setCanShowMultiSelectAndInfo:(BOOL)arg1;
- (unsigned long long)clickToEnterPickerTime;
- (void)setClickToEnterPickerTime:(unsigned long long)arg1;
- (BOOL)shouldHideEditBtnInPreview;
- (void)setShouldHideEditBtnInPreview:(BOOL)arg1;
- (long long)selectionConfirmMode;
- (void)setSelectionConfirmMode:(long long)arg1;
- (BOOL)enablePageSheetMode;
- (void)setEnablePageSheetMode:(BOOL)arg1;
- (double)pageSheetModeHeight;
- (void)setPageSheetModeHeight:(double)arg1;
- (BOOL)enableNewAlbumNavStyle;
- (void)setEnableNewAlbumNavStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
