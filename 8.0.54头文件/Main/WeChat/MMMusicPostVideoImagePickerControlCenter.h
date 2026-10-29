@interface MMMusicPostVideoImagePickerControlCenter : NSObject <MMImagePickerControlCenter>
{
    BOOL _isOpenSendOriginVideo; // +0x8
    BOOL _canSendOriginImage; // +0x9
    BOOL _forceSendOriginImage; // +0xa
    BOOL _isUserActionCheckShowed; // +0xb
    BOOL _enforceUserActionCheck; // +0xc
    BOOL _enforceUserActionUnCheck; // +0xd
    BOOL _isUserActionSelected; // +0xe
    BOOL _isHidePreviewPlayButton; // +0xf
    BOOL _canSendVideoMessage; // +0x10
    BOOL _isOnlyShowVideoMessage; // +0x11
    BOOL _isNotShowVideoSizeAlertView; // +0x12
    BOOL _isAsyncCompositeEnabled; // +0x13
    BOOL _canSendMultiImage; // +0x14
    BOOL _canSendMultiVideo; // +0x15
    BOOL _needThumbImage; // +0x16
    BOOL _showPreviewView; // +0x17
    BOOL _customizesClickAction; // +0x18
    BOOL _returnMetaForVideo; // +0x19
    BOOL _canSendGif; // +0x1a
    BOOL _canHybridSendAsset; // +0x1b
    BOOL _disableVideoSelection; // +0x1c
    BOOL _canDragSelect; // +0x1d
    BOOL _isOriginalImage; // +0x1e
    BOOL _isEditMode; // +0x1f
    BOOL _isPresentInSplitVC; // +0x20
    BOOL _buttonEnableAfterSend; // +0x21
    BOOL _videoDirectToEdit; // +0x22
    BOOL _imageDirectToEdit; // +0x23
    BOOL _isAllowCache; // +0x24
    BOOL _isPickerFinished; // +0x25
    BOOL _doNotAutoHandleImageEditorDismiss; // +0x26
    BOOL _showAssetWithLocationOnly; // +0x27
    int _maxImageCount; // +0x28
    int _compressType; // +0x2c
    int _previewEditScene; // +0x30
    long long _userActionCheckScene; // +0x38
    NSString * _userActionCheckTitle; // +0x40
    id <MMAssetPickerUserActionTipsProtocol> _userActionTipsActivity; // +0x48
    NSNumber * _bottomInset; // +0x50
    NSString * _finishWording; // +0x58
    NSString * _currentAlbum; // +0x60
    NSArray * _selectedImageURLs; // +0x68
    NSArray * _selectedImageAssets; // +0x70
    WCFinderEditOptionModel * _finderOptionModel; // +0x78
    unsigned long long _maxGifDataSize; // +0x80
    unsigned long long _authScene; // +0x88
    NSMutableDictionary * _dicExtInfo; // +0x90
    id /* block */ _assetSelectedBlock; // +0x98
    long long _livePhotoMode; // +0xa0
}
- (void)cancelImagePicker;
- (void)selectAsset:(id)arg1;
- (void)selectedAssets:(id)arg1;
- (void)selectedFinderPostSession:(id)arg1;
- (void)selectedEditImageAttr:(id)arg1;
- (void)selectedSight:(id)arg1;
- (void)selectedVideo:(id)arg1;
- (void)selectFinderDataItem:(id)arg1;
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
- (BOOL)buttonEnableAfterSend;
- (void)setButtonEnableAfterSend:(BOOL)arg1;
- (id)finderOptionModel;
- (void)setFinderOptionModel:(id)arg1;
- (BOOL)videoDirectToEdit;
- (void)setVideoDirectToEdit:(BOOL)arg1;
- (BOOL)imageDirectToEdit;
- (void)setImageDirectToEdit:(BOOL)arg1;
- (unsigned long long)maxGifDataSize;
- (void)setMaxGifDataSize:(unsigned long long)arg1;
- (BOOL)isAllowCache;
- (void)setIsAllowCache:(BOOL)arg1;
- (BOOL)isPickerFinished;
- (void)setIsPickerFinished:(BOOL)arg1;
- (BOOL)doNotAutoHandleImageEditorDismiss;
- (void)setDoNotAutoHandleImageEditorDismiss:(BOOL)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (id)dicExtInfo;
- (void)setDicExtInfo:(id)arg1;
- (id /* block */)assetSelectedBlock;
- (void)setAssetSelectedBlock:(id /* block */)arg1;
- (long long)livePhotoMode;
- (void)setLivePhotoMode:(long long)arg1;
- (BOOL)showAssetWithLocationOnly;
- (void)setShowAssetWithLocationOnly:(BOOL)arg1;
- (void).cxx_destruct;
@end

