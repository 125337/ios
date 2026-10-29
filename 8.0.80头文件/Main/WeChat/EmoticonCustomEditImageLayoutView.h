@interface EmoticonCustomEditImageLayoutView : WCEditImageLayoutView <EmoticonOriginImgUploadDelegate>
{
    BOOL _hasCroped; // +0x8
    BOOL _hasAddText; // +0x9
    BOOL _hasRemoveBg; // +0xa
    BOOL _hasDeleteAsset; // +0xb
    BOOL _needRemoveBg; // +0xc
    BOOL _isBorderVisible; // +0xd
    BOOL _isDraggingText; // +0xe
    BOOL _isZooming; // +0xf
    BOOL _isLoadRemoveBg; // +0x10
    NSMutableArray * _assetsEditTracker; // +0x18
    NSMutableArray * _originImages; // +0x20
    NSMutableArray * _originImageDatas; // +0x28
    NSMutableArray * _removeBgImages; // +0x30
    NSMutableArray * _imagesAfterEdit; // +0x38
    NSMutableArray * _removeBgBBOXs; // +0x40
    NSMutableArray * _imagesHasCropped; // +0x48
    NSMutableArray * _currentImageAttrArray; // +0x50
    CAGradientLayer * _selectedCollectionMaskLayer; // +0x58
    CAGradientLayer * _animateMaskLayer; // +0x60
    MMUIView * _animateMaskView; // +0x68
    EmoticonCustomOriginImgUploadTask * _uploadTask; // +0x70
    unsigned long long _startRemoveBgTime; // +0x78
    EmoticonCustomEditLoadingView * _removeBgLoadingView; // +0x80
    WCEditImageScrollView * _removeBgImageScrollView; // +0x88
    UIImageView * _removeBgImageView; // +0x90
    id /* block */ _replaceImageBlock; // +0x98
    CALayer * _editImageViewBorderLayer; // +0xa0
    CGSize _initImageSize; // +0xa8
    CGRect _boundingRectInRemoveBg; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onEditImage:(unsigned long long)arg1 withEditEntrance:(unsigned long long)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)initSelectedCollectionView;
- (void)initTopEditImageBar;
- (void)initSelectBtn;
- (void)OnSelectedButtonClicked:(id)arg1;
- (void)deleteCrtAsset:(unsigned long long)arg1 sender:(id)arg2;
- (void)initNextBtn;
- (void)reloadTopEditImageBar;
- (void)reloadBottomEditImageBar;
- (void)initMaskLayer;
- (void)initGifImageView;
- (void)setupEditImageViewBorder;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)onMoveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)updateCollectionView;
- (void)onScrollPosition:(double)arg1 contentWidth:(double)arg2 scrollViewWidth:(double)arg3;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)onCropDone;
- (void)onCropCancel;
- (BOOL)currentImageFirstToSquare;
- (void)OnClickEditImageBackBarButton;
- (void)OnCancel;
- (void)OnClickEditImageDoneBarButton;
- (void)endEditImageView;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)onTextEditImage:(id)arg1;
- (void)onCropEditImage:(id)arg1;
- (void)onCropEditImageWithSuper:(id)arg1;
- (void)doActionTraceWithType:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)onImageRemoveBg:(id)arg1;
- (void)setRemoveBgBtnWithColor:(id)arg1;
- (id)getOriginalImage:(long long)arg1;
- (void)recoverToOriginImage;
- (void)showOriginImageWithArray:(id)arg1;
- (void)startGetRemoveBgImage;
- (CGSize)getInitRemoveBgImageSize:(id)arg1 uploadSize:(CGSize)arg2;
- (CGRect)getEditImageViewFrame;
- (void)startBorderAnimation;
- (void)stopBorderAnimation:(BOOL)arg1;
- (void)fadeOutAnimationBorder;
- (void)showAndFadeOutStaticBorder;
- (void)removeBackgroundFail;
- (void)requestRemoveBackgroundImage:(id)arg1;
- (void)dealWithRemoveBgUrl:(id)arg1;
- (void)dealWithRemoveBgImage:(id)arg1 remoteImage:(BOOL)arg2;
- (CGRect)mapRectFromScaledSize:(CGRect)arg1 sizeBefore:(CGSize)arg2 sizeAfter:(CGSize)arg3;
- (id)deepCopyDrawLayerArray:(id)arg1;
- (void)runOnMainThread:(id /* block */)arg1;
- (void)showEditImageViewBorder;
- (void)hideEditImageViewBorder;
- (CGRect)getEditImageBorderFrame;
- (void)updateEditImageViewBorderFrame;
- (void)checkAndHideBorderIfNeeded;
- (void)updateBorderWhenImageViewBoundsChanged;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidLoadOriginalImage;
- (void)onEmoticonUploadSuccessWithImg:(id)arg1 url:(id)arg2;
- (void)onEmoticonUploadFailWithImg:(id)arg1;
- (BOOL)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (BOOL)scrollViewDidZoom:(id)arg1;
- (id)assetsEditTracker;
- (void)setAssetsEditTracker:(id)arg1;
- (BOOL)hasCroped;
- (void)setHasCroped:(BOOL)arg1;
- (BOOL)hasAddText;
- (void)setHasAddText:(BOOL)arg1;
- (BOOL)hasRemoveBg;
- (void)setHasRemoveBg:(BOOL)arg1;
- (BOOL)hasDeleteAsset;
- (void)setHasDeleteAsset:(BOOL)arg1;
- (BOOL)needRemoveBg;
- (void)setNeedRemoveBg:(BOOL)arg1;
- (id)originImages;
- (void)setOriginImages:(id)arg1;
- (id)originImageDatas;
- (void)setOriginImageDatas:(id)arg1;
- (id)removeBgImages;
- (void)setRemoveBgImages:(id)arg1;
- (id)imagesAfterEdit;
- (void)setImagesAfterEdit:(id)arg1;
- (id)removeBgBBOXs;
- (void)setRemoveBgBBOXs:(id)arg1;
- (id)imagesHasCropped;
- (void)setImagesHasCropped:(id)arg1;
- (id)currentImageAttrArray;
- (void)setCurrentImageAttrArray:(id)arg1;
- (id)selectedCollectionMaskLayer;
- (void)setSelectedCollectionMaskLayer:(id)arg1;
- (id)animateMaskLayer;
- (void)setAnimateMaskLayer:(id)arg1;
- (id)animateMaskView;
- (void)setAnimateMaskView:(id)arg1;
- (id)uploadTask;
- (void)setUploadTask:(id)arg1;
- (unsigned long long)startRemoveBgTime;
- (void)setStartRemoveBgTime:(unsigned long long)arg1;
- (CGSize)initImageSize;
- (void)setInitImageSize:(CGSize)arg1;
- (CGRect)boundingRectInRemoveBg;
- (void)setBoundingRectInRemoveBg:(CGRect)arg1;
- (id)removeBgLoadingView;
- (void)setRemoveBgLoadingView:(id)arg1;
- (id)removeBgImageScrollView;
- (void)setRemoveBgImageScrollView:(id)arg1;
- (id)removeBgImageView;
- (void)setRemoveBgImageView:(id)arg1;
- (id /* block */)replaceImageBlock;
- (void)setReplaceImageBlock:(id /* block */)arg1;
- (id)editImageViewBorderLayer;
- (void)setEditImageViewBorderLayer:(id)arg1;
- (BOOL)isBorderVisible;
- (void)setIsBorderVisible:(BOOL)arg1;
- (BOOL)isDraggingText;
- (void)setIsDraggingText:(BOOL)arg1;
- (BOOL)isZooming;
- (void)setIsZooming:(BOOL)arg1;
- (BOOL)isLoadRemoveBg;
- (void)setIsLoadRemoveBg:(BOOL)arg1;
- (void).cxx_destruct;
@end
