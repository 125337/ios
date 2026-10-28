@interface MMCapturePreviewBrowserControlCenter : NSObject <MMImagePickerControlCenter>
{
    BOOL canSendMultiVideo; // +0x8
    BOOL canSendOriginImage; // +0x9
    BOOL canSendVideoMessage; // +0xa
    BOOL enforceUserActionCheck; // +0xb
    BOOL enforceUserActionUnCheck; // +0xc
    BOOL canSendMultiImage; // +0xd
    BOOL canHybridSendAsset; // +0xe
    BOOL disableVideoSelection; // +0xf
    BOOL isAsyncCompositeEnabled; // +0x10
    BOOL isNotShowVideoSizeAlertView; // +0x11
    BOOL isUserActionSelected; // +0x12
    BOOL returnMetaForVideo; // +0x13
    BOOL showPreviewView; // +0x14
    BOOL canDragSelect; // +0x15
    BOOL customizesClickAction; // +0x16
    BOOL doNotAutoHandleImageEditorDismiss; // +0x17
    BOOL forceSendOriginImage; // +0x18
    BOOL isAllowCache; // +0x19
    BOOL isEditMode; // +0x1a
    BOOL isHidePreviewPlayButton; // +0x1b
    BOOL buttonEnableAfterSend; // +0x1c
    BOOL canSendGif; // +0x1d
    BOOL imageDirectToEdit; // +0x1e
    BOOL isOnlyShowVideoMessage; // +0x1f
    BOOL isOpenSendOriginVideo; // +0x20
    BOOL isOriginalImage; // +0x21
    BOOL isPickerFinished; // +0x22
    BOOL isPresentInSplitVC; // +0x23
    BOOL isUserActionCheckShowed; // +0x24
    BOOL needThumbImage; // +0x25
    BOOL showAssetWithLocationOnly; // +0x26
    BOOL videoDirectToEdit; // +0x27
    BOOL canShowMultiSelectAndInfo; // +0x28
    int maxImageCount; // +0x2c
    int compressType; // +0x30
    int previewEditScene; // +0x34
    NSArray * selectedImageURLs; // +0x38
    NSArray * selectedImageAssets; // +0x40
    long long userActionCheckScene; // +0x48
    NSMutableDictionary * dicExtInfo; // +0x50
    NSString * currentAlbum; // +0x58
    WCFinderEditOptionModel * finderOptionModel; // +0x60
    NSString * finishWording; // +0x68
    unsigned long long authScene; // +0x70
    NSNumber * bottomInset; // +0x78
    long long livePhotoMode; // +0x80
    unsigned long long maxGifDataSize; // +0x88
    NSString * userActionCheckTitle; // +0x90
    id <MMAssetPickerUserActionTipsProtocol> userActionTipsActivity; // +0x98
}
- (void)cancelImagePicker;
- (void)selectAsset:(id)arg1;
- (void)selectFinderDataItem:(id)arg1;
- (void)selectedAssets:(id)arg1;
- (void)selectedClickNextAction;
- (void)selectedEditImageAttr:(id)arg1;
- (void)selectedFinderPostSession:(id)arg1;
- (void)selectedSight:(id)arg1;
- (void)selectedVideo:(id)arg1;
- (BOOL)canSendMultiVideo;
- (void)setCanSendMultiVideo:(BOOL)arg1;
- (BOOL)canSendOriginImage;
- (void)setCanSendOriginImage:(BOOL)arg1;
- (BOOL)canSendVideoMessage;
- (void)setCanSendVideoMessage:(BOOL)arg1;
- (BOOL)enforceUserActionCheck;
- (void)setEnforceUserActionCheck:(BOOL)arg1;
- (BOOL)enforceUserActionUnCheck;
- (void)setEnforceUserActionUnCheck:(BOOL)arg1;
- (BOOL)canSendMultiImage;
- (void)setCanSendMultiImage:(BOOL)arg1;
- (BOOL)canHybridSendAsset;
- (void)setCanHybridSendAsset:(BOOL)arg1;
- (BOOL)disableVideoSelection;
- (void)setDisableVideoSelection:(BOOL)arg1;
- (BOOL)isAsyncCompositeEnabled;
- (void)setIsAsyncCompositeEnabled:(BOOL)arg1;
- (BOOL)isNotShowVideoSizeAlertView;
- (void)setIsNotShowVideoSizeAlertView:(BOOL)arg1;
- (BOOL)isUserActionSelected;
- (void)setIsUserActionSelected:(BOOL)arg1;
- (int)maxImageCount;
- (void)setMaxImageCount:(int)arg1;
- (BOOL)returnMetaForVideo;
- (void)setReturnMetaForVideo:(BOOL)arg1;
- (id)selectedImageURLs;
- (void)setSelectedImageURLs:(id)arg1;
- (id)selectedImageAssets;
- (void)setSelectedImageAssets:(id)arg1;
- (long long)userActionCheckScene;
- (void)setUserActionCheckScene:(long long)arg1;
- (BOOL)showPreviewView;
- (void)setShowPreviewView:(BOOL)arg1;
- (BOOL)canDragSelect;
- (void)setCanDragSelect:(BOOL)arg1;
- (int)compressType;
- (void)setCompressType:(int)arg1;
- (BOOL)customizesClickAction;
- (void)setCustomizesClickAction:(BOOL)arg1;
- (id)dicExtInfo;
- (void)setDicExtInfo:(id)arg1;
- (id)currentAlbum;
- (void)setCurrentAlbum:(id)arg1;
- (BOOL)doNotAutoHandleImageEditorDismiss;
- (void)setDoNotAutoHandleImageEditorDismiss:(BOOL)arg1;
- (id)finderOptionModel;
- (void)setFinderOptionModel:(id)arg1;
- (id)finishWording;
- (void)setFinishWording:(id)arg1;
- (BOOL)forceSendOriginImage;
- (void)setForceSendOriginImage:(BOOL)arg1;
- (BOOL)isAllowCache;
- (void)setIsAllowCache:(BOOL)arg1;
- (BOOL)isEditMode;
- (void)setIsEditMode:(BOOL)arg1;
- (BOOL)isHidePreviewPlayButton;
- (void)setIsHidePreviewPlayButton:(BOOL)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (id)bottomInset;
- (void)setBottomInset:(id)arg1;
- (BOOL)buttonEnableAfterSend;
- (void)setButtonEnableAfterSend:(BOOL)arg1;
- (BOOL)canSendGif;
- (void)setCanSendGif:(BOOL)arg1;
- (BOOL)imageDirectToEdit;
- (void)setImageDirectToEdit:(BOOL)arg1;
- (BOOL)isOnlyShowVideoMessage;
- (void)setIsOnlyShowVideoMessage:(BOOL)arg1;
- (BOOL)isOpenSendOriginVideo;
- (void)setIsOpenSendOriginVideo:(BOOL)arg1;
- (BOOL)isOriginalImage;
- (void)setIsOriginalImage:(BOOL)arg1;
- (BOOL)isPickerFinished;
- (void)setIsPickerFinished:(BOOL)arg1;
- (BOOL)isPresentInSplitVC;
- (void)setIsPresentInSplitVC:(BOOL)arg1;
- (BOOL)isUserActionCheckShowed;
- (void)setIsUserActionCheckShowed:(BOOL)arg1;
- (long long)livePhotoMode;
- (void)setLivePhotoMode:(long long)arg1;
- (unsigned long long)maxGifDataSize;
- (void)setMaxGifDataSize:(unsigned long long)arg1;
- (BOOL)needThumbImage;
- (void)setNeedThumbImage:(BOOL)arg1;
- (int)previewEditScene;
- (void)setPreviewEditScene:(int)arg1;
- (BOOL)showAssetWithLocationOnly;
- (void)setShowAssetWithLocationOnly:(BOOL)arg1;
- (id)userActionCheckTitle;
- (void)setUserActionCheckTitle:(id)arg1;
- (id)userActionTipsActivity;
- (void)setUserActionTipsActivity:(id)arg1;
- (BOOL)videoDirectToEdit;
- (void)setVideoDirectToEdit:(BOOL)arg1;
- (BOOL)canShowMultiSelectAndInfo;
- (void)setCanShowMultiSelectAndInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
