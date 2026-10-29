@interface EditImageScrollView : MMUIScrollView <UIScrollViewDelegate, EditImageOperationDelegate, UIGestureRecognizerDelegate>
{
    double _naturalTopLength; // +0x8
    BOOL _isZooming; // +0x10
    BOOL _isScrolling; // +0x11
    unsigned int _gestureMonitor; // +0x14
    double _minimunScaleWhenInit; // +0x18
    BOOL _isInShockZoomArea; // +0x20
    unsigned int _fromEntrance; // +0x24
    id <EditImageOperationDelegate> m_delegate; // +0x28
    EditImageView * oEditImageView; // +0x30
    UIPanGestureRecognizer * _panGesture; // +0x38
    UITapGestureRecognizer * _tapGesture; // +0x40
    UIPinchGestureRecognizer * _pinchGesture; // +0x48
    UIRotationGestureRecognizer * _rotateGesture; // +0x50
    UILongPressGestureRecognizer * _longPressGesture; // +0x58
    unsigned long long _rotationOrientationOverall; // +0x60
    unsigned long long _editImageUIStyle; // +0x68
    double __lastScale; // +0x70
    unsigned long long _editImageContentType; // +0x78
    WCEditViewControllerUIConfig * _uiConfig; // +0x80
    CGPoint __lastOffset; // +0x88
    CGRect _imageFrame; // +0x98
    CGRect _cropFrame; // +0xb8
    CGRect _initialFrame; // +0xd8
    CGRect __lastGridFrame; // +0xf8
    CGRect __lastCropFrame; // +0x118
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 uiConfig:(id)arg2;
- (void)initGestures;
- (void)reloadViews:(BOOL)arg1;
- (void)loadImage:(id)arg1 withDrawLayerArray:(id)arg2 withEditEntrance:(unsigned int)arg3;
- (CGRect)getEditViewFrame;
- (CGRect)getMinZoomViewFrame;
- (void)loadOriginalImage:(id)arg1 withImageData:(id)arg2;
- (void)onImageRotatedByOrientation:(unsigned long long)arg1;
- (CGRect)cropFunctionInitialArea;
- (double)limitAreaLeft;
- (double)limitAreaTop;
- (double)limitAreaWidth;
- (double)limitAreaHeight;
- (CGRect)getLimitAreaFrame;
- (void)adjustScrollViewZoomScale;
- (void)adjustScrollViewContentInset;
- (double)adjustMinScaleIfNeed:(double)arg1;
- (double)minScaleWithFrame:(CGRect)arg1;
- (void)adjustScroolViewToFreeContentInset;
- (void)cropImage:(CGRect)arg1;
- (void)cropImageWithoutAnimation:(CGRect)arg1;
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
- (void)editImageDidRecordAnOperation;
- (int)checkToolType;
- (void)useImageTool:(int)arg1;
- (void)changeLineColor:(id)arg1;
- (void)changeLineWidth:(double)arg1;
- (void)onClickDoneBtn:(id /* block */)arg1;
- (id)getEditImageAttrSnapshot;
- (void)applyAiImageAsUndoableOperation:(id)arg1;
- (void)onClickCancelBtn;
- (void)setMusicLyricIsOn:(BOOL)arg1;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (void)updateMusicLyricsCropTime:(struct)arg1;
- (void)setCancelBtnFrame:(CGRect)arg1;
- (void)updateFixedPositionWidgetWithTipsButton:(id)arg1 lineView:(id)arg2;
- (id)getEditImageAttr;
- (id)getEditImageAttr:(BOOL)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)activateCustomGestures;
- (void)deactivateCustomGestures;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewPOIWidgetHiddenStateChange:(BOOL)arg1;
- (void)dragaAndDropWidget;
- (CGRect)getAssetPreviewFrame;
- (void)onAddNewPOIWidget;
- (void)onAddRealNewMainTextWidget;
- (void)onTapGesture;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (void)setFromEntrance:(unsigned int)arg1;
- (void)setEditImageContentType:(unsigned long long)arg1;
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
- (id)_pinchGesture;
- (void)set_pinchGesture:(id)arg1;
- (id)_rotateGesture;
- (void)set_rotateGesture:(id)arg1;
- (id)_longPressGesture;
- (void)set_longPressGesture:(id)arg1;
- (unsigned long long)_rotationOrientationOverall;
- (void)set_rotationOrientationOverall:(unsigned long long)arg1;
- (unsigned long long)editImageUIStyle;
- (unsigned int)fromEntrance;
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
- (BOOL)isInShockZoomArea;
- (void)setIsInShockZoomArea:(BOOL)arg1;
- (void).cxx_destruct;
@end
