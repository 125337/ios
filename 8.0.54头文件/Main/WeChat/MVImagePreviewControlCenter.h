@interface MVImagePreviewControlCenter : NSObject <MMImagePickerControlCenter>
{
    BOOL _showAssetWithLocationOnly; // +0x8
    BOOL _isOpenSendOriginVideo; // +0x9
    BOOL _canSendOriginImage; // +0xa
    BOOL _forceSendOriginImage; // +0xb
    BOOL _isUserActionCheckShowed; // +0xc
    BOOL _enforceUserActionCheck; // +0xd
    BOOL _enforceUserActionUnCheck; // +0xe
    BOOL _isUserActionSelected; // +0xf
    BOOL _isHidePreviewPlayButton; // +0x10
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
    BOOL _isPresentInSplitVC; // +0x1f
    BOOL _isAllowCache; // +0x20
    BOOL _isPickerFinished; // +0x21
    BOOL _doNotAutoHandleImageEditorDismiss; // +0x22
    BOOL _isEditMode; // +0x23
    BOOL _isOriginalImage; // +0x24
    BOOL _videoDirectToEdit; // +0x25
    BOOL _imageDirectToEdit; // +0x26
    BOOL _buttonEnableAfterSend; // +0x27
    int _maxImageCount; // +0x28
    int _compressType; // +0x2c
    int _previewEditScene; // +0x30
    long long _livePhotoMode; // +0x38
    NSNumber * _bottomInset; // +0x40
    long long _userActionCheckScene; // +0x48
    NSString * _userActionCheckTitle; // +0x50
    id <MMAssetPickerUserActionTipsProtocol> _userActionTipsActivity; // +0x58
    unsigned long long _maxGifDataSize; // +0x60
    NSArray * _selectedImageURLs; // +0x68
    NSArray * _selectedImageAssets; // +0x70
    WCFinderEditOptionModel * _finderOptionModel; // +0x78
    NSMutableDictionary * _dicExtInfo; // +0x80
    unsigned long long _authScene; // +0x88
    NSString * _finishWording; // +0x90
    NSString * _currentAlbum; // +0x98
    id /* block */ _assetSelectedBlock; // +0xa0
}
- (BOOL)isOpenSendOriginVideo;
- (BOOL)canSendOriginImage;
- (BOOL)forceSendOriginImage;
- (long long)userActionCheckScene;
- (BOOL)isUserActionCheckShowed;
- (BOOL)enforceUserActionCheck;
- (BOOL)enforceUserActionUnCheck;
- (BOOL)isUserActionSelected;
- (id)userActionCheckTitle;
- (BOOL)isHidePreviewPlayButton;
- (BOOL)canSendVideoMessage;
- (BOOL)isOnlyShowVideoMessage;
- (BOOL)isNotShowVideoSizeAlertView;
- (BOOL)isAsyncCompositeEnabled;
- (BOOL)canSendMultiImage;
- (BOOL)canSendMultiVideo;
- (BOOL)showPreviewView;
- (BOOL)customizesClickAction;
- (BOOL)returnMetaForVideo;
- (BOOL)canSendGif;
- (unsigned long long)maxGifDataSize;
- (BOOL)canHybridSendAsset;
- (int)maxImageCount;
- (BOOL)isPresentInSplitVC;
- (BOOL)isAllowCache;
- (BOOL)isPickerFinished;
- (id)finderOptionModel;
- (id)dicExtInfo;
- (void)cancelImagePicker;
- (BOOL)videoDirectToEdit;
- (BOOL)imageDirectToEdit;
- (BOOL)buttonEnableAfterSend;
- (id)finishWording;
- (void)selectedAssets:(id)arg1;
- (void)selectedVideo:(id)arg1;
- (void)selectedSight:(id)arg1;
- (void)selectedEditImageAttr:(id)arg1;
- (void)selectAsset:(id)arg1;
- (void)selectedFinderPostSession:(id)arg1;
- (void)selectedClickNextAction;
- (int)getPickerScene;
- (void)increasePreviewCount;
- (void)reportPreviewCount;
- (unsigned long long)authScene;
- (long long)livePhotoMode;
- (void)setLivePhotoMode:(long long)arg1;
- (id)bottomInset;
- (void)setBottomInset:(id)arg1;
- (BOOL)showAssetWithLocationOnly;
- (void)setShowAssetWithLocationOnly:(BOOL)arg1;
- (void)setIsOpenSendOriginVideo:(BOOL)arg1;
- (void)setCanSendOriginImage:(BOOL)arg1;
- (void)setForceSendOriginImage:(BOOL)arg1;
- (void)setUserActionCheckScene:(long long)arg1;
- (void)setIsUserActionCheckShowed:(BOOL)arg1;
- (void)setEnforceUserActionCheck:(BOOL)arg1;
- (void)setEnforceUserActionUnCheck:(BOOL)arg1;
- (void)setIsUserActionSelected:(BOOL)arg1;
- (void)setUserActionCheckTitle:(id)arg1;
- (id)userActionTipsActivity;
- (void)setUserActionTipsActivity:(id)arg1;
- (void)setIsHidePreviewPlayButton:(BOOL)arg1;
- (void)setCanSendVideoMessage:(BOOL)arg1;
- (void)setIsOnlyShowVideoMessage:(BOOL)arg1;
- (void)setIsNotShowVideoSizeAlertView:(BOOL)arg1;
- (void)setIsAsyncCompositeEnabled:(BOOL)arg1;
- (void)setCanSendMultiImage:(BOOL)arg1;
- (void)setCanSendMultiVideo:(BOOL)arg1;
- (BOOL)needThumbImage;
- (void)setNeedThumbImage:(BOOL)arg1;
- (void)setShowPreviewView:(BOOL)arg1;
- (void)setCustomizesClickAction:(BOOL)arg1;
- (void)setReturnMetaForVideo:(BOOL)arg1;
- (void)setCanSendGif:(BOOL)arg1;
- (void)setMaxGifDataSize:(unsigned long long)arg1;
- (void)setCanHybridSendAsset:(BOOL)arg1;
- (BOOL)disableVideoSelection;
- (void)setDisableVideoSelection:(BOOL)arg1;
- (void)setMaxImageCount:(int)arg1;
- (BOOL)canDragSelect;
- (void)setCanDragSelect:(BOOL)arg1;
- (id)selectedImageURLs;
- (void)setSelectedImageURLs:(id)arg1;
- (id)selectedImageAssets;
- (void)setSelectedImageAssets:(id)arg1;
- (int)compressType;
- (void)setCompressType:(int)arg1;
- (void)setIsPresentInSplitVC:(BOOL)arg1;
- (void)setIsAllowCache:(BOOL)arg1;
- (void)setIsPickerFinished:(BOOL)arg1;
- (BOOL)doNotAutoHandleImageEditorDismiss;
- (void)setDoNotAutoHandleImageEditorDismiss:(BOOL)arg1;
- (void)setFinderOptionModel:(id)arg1;
- (void)setDicExtInfo:(id)arg1;
- (void)setAuthScene:(unsigned long long)arg1;
- (void)setFinishWording:(id)arg1;
- (id)currentAlbum;
- (void)setCurrentAlbum:(id)arg1;
- (BOOL)isEditMode;
- (void)setIsEditMode:(BOOL)arg1;
- (int)previewEditScene;
- (void)setPreviewEditScene:(int)arg1;
- (BOOL)isOriginalImage;
- (void)setIsOriginalImage:(BOOL)arg1;
- (void)setVideoDirectToEdit:(BOOL)arg1;
- (void)setImageDirectToEdit:(BOOL)arg1;
- (void)setButtonEnableAfterSend:(BOOL)arg1;
- (id /* block */)assetSelectedBlock;
- (void)setAssetSelectedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

