@interface MMFinderLiveAnchorCustomizeRewardStyleSelectLogic : NSObject <WCActionSheetDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate>
{
    BOOL _isNeedSelectImage; // +0x8
    unsigned int _loadingResourceCount; // +0xc
    id <MMFinderLiveAnchorCustomizeRewardStyleSelectLogicDelegate> _delegate; // +0x10
    MMFinderLiveAnchorCustomizeRewardItem * _rewardItem; // +0x18
    NSString * _selectedSkinId; // +0x20
    NSString * _customText; // +0x28
    long long _customImageIndex; // +0x30
    PAGFile * _previewPagFile; // +0x38
    NSMutableArray * _customImageCacheArray; // +0x40
    NSString * _defaultCustomText; // +0x48
    NSArray * _rewardCustomizableAttributeArray; // +0x50
    MMFinderLiveTaskId * _taskId; // +0x58
    UIImage * _originCustomImage; // +0x60
    MMFinderLiveAnchorCustomizeRewardPagFileLoader * _pagFileLoader; // +0x68
    WCActionSheet * _chooseImageActionSheet; // +0x70
    UIViewController * _hostingVc; // +0x78
    CGSize _imageLayerSize; // +0x80
}
- (id)initWithTaskId:(id)arg1 rewardItem:(id)arg2 delegate:(id)arg3;
- (void)updateCurrentSkinId:(id)arg1;
- (void)updateCurrentAnimationWithUrl:(id)arg1 identifier:(id)arg2;
- (void)updateCurrentText:(id)arg1;
- (id)getAlertMessageWithInputText:(id)arg1;
- (BOOL)checkInputTextInvalid:(id)arg1;
- (BOOL)isCharacterValid:(id)arg1;
- (void)updateCurrentImageAtCacheArrayIndex:(long long)arg1;
- (void)updateCurrentImage:(id)arg1;
- (void)resetCustomImage;
- (void)preloadAllAnimationPagFile;
- (id)pagFileIdentifierWithSkinId:(id)arg1;
- (void)refreshPreviewPagFile;
- (void)claimResourceLoadingStart;
- (void)claimResourceLoadingEnd;
- (void)chooseNewImage;
- (void)showChooseImageActionSheet;
- (void)showFinderCameraViewController;
- (void)showFinderImagePickerView;
- (void)commitCurrentStyle;
- (void)commitWithStyleValue:(id)arg1;
- (BOOL)isAnyStyleChanged;
- (BOOL)isSelectedSkinChanged;
- (BOOL)isCustomTextChanged;
- (BOOL)isCustomImageChanged;
- (BOOL)isCurStyleValid;
- (BOOL)isCurColorValid;
- (BOOL)isCurTextValid;
- (BOOL)isCurImageValid;
- (BOOL)isLoadingResource;
- (BOOL)isNeedSelectImage;
- (id)customImage;
- (id)selectedSkinAnimationUrl;
- (id)rewardCustomizableAttributeArray;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (BOOL)isFrontCamera;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rewardItem;
- (void)setRewardItem:(id)arg1;
- (id)selectedSkinId;
- (void)setSelectedSkinId:(id)arg1;
- (id)customText;
- (void)setCustomText:(id)arg1;
- (long long)customImageIndex;
- (void)setCustomImageIndex:(long long)arg1;
- (id)previewPagFile;
- (void)setPreviewPagFile:(id)arg1;
- (id)customImageCacheArray;
- (void)setCustomImageCacheArray:(id)arg1;
- (void)setIsNeedSelectImage:(BOOL)arg1;
- (CGSize)imageLayerSize;
- (void)setImageLayerSize:(CGSize)arg1;
- (id)defaultCustomText;
- (void)setDefaultCustomText:(id)arg1;
- (void)setRewardCustomizableAttributeArray:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)originCustomImage;
- (void)setOriginCustomImage:(id)arg1;
- (unsigned int)loadingResourceCount;
- (void)setLoadingResourceCount:(unsigned int)arg1;
- (id)pagFileLoader;
- (void)setPagFileLoader:(id)arg1;
- (id)chooseImageActionSheet;
- (void)setChooseImageActionSheet:(id)arg1;
- (id)hostingVc;
- (void)setHostingVc:(id)arg1;
- (void).cxx_destruct;
@end
