@interface WCEditImageScrollView : MMUIScrollView <UIScrollViewDelegate, WCEditImageOperationDelegate, UIGestureRecognizerDelegate>
{
    double _naturalTopLength; // +0x8
    BOOL _isZooming; // +0x10
    BOOL _isScrolling; // +0x11
    unsigned int _gestureMonitor; // +0x14
    double _minimunScaleWhenInit; // +0x18
    BOOL _shouldNotAdjustInset; // +0x20
    BOOL _isInShockZoomArea; // +0x21
    id <WCEditImageOperationDelegate> m_delegate; // +0x28
    WCEditImageView * oEditImageView; // +0x30
    UIPanGestureRecognizer * _panGesture; // +0x38
    UITapGestureRecognizer * _tapGesture; // +0x40
    UITapGestureRecognizer * _doubleTapGesture; // +0x48
    UIPinchGestureRecognizer * _pinchGesture; // +0x50
    UIRotationGestureRecognizer * _rotateGesture; // +0x58
    UILongPressGestureRecognizer * _longPressGesture; // +0x60
    unsigned long long _rotationOrientationOverall; // +0x68
    unsigned long long _editImageUIStyle; // +0x70
    NSArray * _initialEditWidgetStates; // +0x78
    double __lastScale; // +0x80
    unsigned long long _editImageContentType; // +0x88
    WCEditViewControllerUIConfig * _uiConfig; // +0x90
    CGSize _assetSize; // +0x98
    CGPoint __lastOffset; // +0xa8
    CGRect _imageFrame; // +0xb8
    CGRect _cropFrame; // +0xd8
    CGRect _initialFrame; // +0xf8
    CGRect __lastGridFrame; // +0x118
    CGRect __lastCropFrame; // +0x138
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 uiConfig:(id)arg2;
- (void)initGestures;
- (id)getEditImageView;
- (void)reloadViews:(BOOL)arg1;
- (void)loadImage:(id)arg1 withDrawLayerArray:(id)arg2 withEditEntrance:(unsigned int)arg3;
- (CGRect)getEditViewFrame;
- (CGRect)getMinZoomViewFrame;
- (void)loadOriginalImage:(id)arg1 withImageData:(id)arg2;
- (void)loadVideoWithAsset:(id)arg1;
- (void)loadVideoWithAsset:(id)arg1 isDefaultMute:(BOOL)arg2;
- (void)onImageRotatedByOrientation:(unsigned long long)arg1;
- (void)adjustScrollViewZoomScale;
- (double)adjustMinScaleIfNeed:(double)arg1;
- (double)minScaleWithFrame:(CGRect)arg1;
- (CGRect)cropFunctionInitialArea;
- (double)limitAreaLeft;
- (double)limitAreaTop;
- (double)limitAreaWidth;
- (double)limitAreaHeight;
- (CGRect)getLimitAreaFrame;
- (void)adjustScrollViewContentInset;
- (void)adjustScroolViewToFreeContentInset;
- (void)cropImage:(CGRect)arg1;
- (BOOL)canPenUndo;
- (BOOL)canMosaicUndo;
- (BOOL)canRedo;
- (void)undoPen;
- (void)undoMosaic;
- (void)redo;
- (BOOL)canGlobalUndo;
- (BOOL)canGlobalRedo;
- (void)globalUndo;
- (void)globalRedo;
- (void)recordAnOperation:(id)arg1;
- (void)setEraserModeActive:(BOOL)arg1;
- (int)checkToolType;
- (void)useImageTool:(int)arg1;
- (void)changeLineColor:(id)arg1;
- (void)changeLineWidth:(double)arg1;
- (void)onClickDoneBtn:(id /* block */)arg1;
- (void)onClickCancelBtn;
- (void)setCancelBtnFrame:(CGRect)arg1;
- (void)updateFixedPositionWidgetWithTipsButton:(id)arg1 lineView:(id)arg2;
- (id)getEditImageAttr;
- (id)snapshotAtVideoTime:(double)arg1;
- (id)generateWidgetStateList;
- (void)handleTapGesture:(id)arg1;
- (void)handleDoubleClickGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)activateCustomGestures;
- (void)deactivateCustomGestures;
- (void)setNotCheckOriginalImgWhiteClickDone:(BOOL)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)layoutWithCenter:(CGPoint)arg1;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (void)editImageShowTextInputView:(id)arg1 displayStr:(id)arg2 lineColor:(id)arg3 textStyle:(unsigned long long)arg4;
- (void)dragaAndDropWidget;
- (CGRect)getAssetPreviewFrame;
- (void)editImageDidRecordAnOperation;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (void)setInitialEditWidgetStates:(id)arg1;
- (void)setEditImageContentType:(unsigned long long)arg1;
- (void)setAssetSize:(CGSize)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)oEditImageView;
- (void)setOEditImageView:(id)arg1;
- (CGRect)_imageFrame;
- (void)set_imageFrame:(CGRect)arg1;
- (CGRect)_cropFrame;
- (void)set_cropFrame:(CGRect)arg1;
- (CGRect)_initialFrame;
- (void)set_initialFrame:(CGRect)arg1;
- (id)_panGesture;
- (void)set_panGesture:(id)arg1;
- (id)_tapGesture;
- (void)set_tapGesture:(id)arg1;
- (id)_doubleTapGesture;
- (void)set_doubleTapGesture:(id)arg1;
- (id)_pinchGesture;
- (void)set_pinchGesture:(id)arg1;
- (id)_rotateGesture;
- (void)set_rotateGesture:(id)arg1;
- (id)_longPressGesture;
- (void)set_longPressGesture:(id)arg1;
- (unsigned long long)_rotationOrientationOverall;
- (void)set_rotationOrientationOverall:(unsigned long long)arg1;
- (unsigned long long)editImageUIStyle;
- (id)initialEditWidgetStates;
- (CGSize)assetSize;
- (CGRect)_lastGridFrame;
- (void)set_lastGridFrame:(CGRect)arg1;
- (double)_lastScale;
- (void)set_lastScale:(double)arg1;
- (CGPoint)_lastOffset;
- (void)set_lastOffset:(CGPoint)arg1;
- (CGRect)_lastCropFrame;
- (void)set_lastCropFrame:(CGRect)arg1;
- (unsigned long long)editImageContentType;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (BOOL)shouldNotAdjustInset;
- (void)setShouldNotAdjustInset:(BOOL)arg1;
- (BOOL)isInShockZoomArea;
- (void)setIsInShockZoomArea:(BOOL)arg1;
- (void).cxx_destruct;
@end

