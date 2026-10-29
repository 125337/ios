@interface EditImageView : UIImageView <EditImageTextToolDelegate, MosaicToolDelegate, EditImageWidgetToolDelegate>
{
    CGPoint p2Location; // +0x8
    CGPoint p1Location; // +0x18
    CGPoint cLocation; // +0x28
    UITapGestureRecognizer * _tapGesture; // +0x38
    UIPanGestureRecognizer * _panGesture; // +0x40
    UITapGestureRecognizer * _blankGesture; // +0x48
    BOOL _canZoom; // +0x50
    BOOL _canDraw; // +0x51
    unsigned long long _mosaicStyle; // +0x58
    MMTimer * _timer; // +0x60
    MMTimer * _finishDrawingTimer; // +0x68
    MMTimer * _checkEventTimer; // +0x70
    BOOL _hasOriginalImage; // +0x78
    double _originalWaitingTime; // +0x80
    double colorPointMapWidth; // +0x88
    double colorPointMapHeight; // +0x90
    char * colorPointMap; // +0x98
    id /* block */ _completion; // +0xa0
    BOOL isCropped; // +0xa8
    unsigned int undoCount; // +0xac
    unsigned int editEntrance; // +0xb0
    BOOL isRotated; // +0xb4
    UIImageView * imageView; // +0xb8
    NSArray * _viewSeq; // +0xc0
    double _checkEventTimerLimit; // +0xc8
    unsigned long long _startEditTimeInMs; // +0xd0
    double _storyMainTextTop; // +0xd8
    BOOL _isNeedRedrawMosaicImage; // +0xe0
    BOOL _willSetImageLayer; // +0xe1
    BOOL _didSetImageLayer; // +0xe2
    BOOL _animatable; // +0xe3
    BOOL __isBeforeMosaicTool; // +0xe4
    BOOL _hasTapForDraw; // +0xe5
    BOOL _hasShowedDeleteBar; // +0xe6
    BOOL _notCheckOriginalImgWhiteClickDone; // +0xe7
    BOOL _isInEraserMode; // +0xe8
    int _toolType; // +0xec
    unsigned int _fromEntrance; // +0xf0
    NSMutableArray * _drawLayerArray; // +0xf8
    NSMutableArray * _drawLayerBufferArray; // +0x100
    EditImageScrollView * _delegate; // +0x108
    double _lineWidth; // +0x110
    UIColor * _lineColor; // +0x118
    CALayer * _drawLayer; // +0x120
    UIImage * _foregroundImage; // +0x128
    UIImage * _backupImage; // +0x130
    id <WCEditImageToolProtocol> _currentTool; // +0x138
    id _mosaicImage; // +0x140
    NSMutableArray * _textViewArray; // +0x148
    NSMutableArray * _drawViewWidgetArray; // +0x150
    NSMutableArray * _drawViewPenArray; // +0x158
    NSMutableArray * _drawViewMosaicArray; // +0x160
    NSMutableArray * _drawViewCropArray; // +0x168
    NSMutableArray * _drawHierarchyViewArray; // +0x170
    UIImageView * _imgColorView; // +0x178
    EditImageCropOverlayView * _overlayView; // +0x180
    EditImageDeleteBarView * _deleteBar; // +0x188
    NSMutableArray * _drawRevertArray; // +0x190
    EditImageWidgetTool * _highlightWidgetTool; // +0x198
    UIImageView * _penView; // +0x1a0
    UIImageView * _mosaicView; // +0x1a8
    UIView * _tempMosaicView; // +0x1b0
    UIView * _tempPenView; // +0x1b8
    NSMutableArray * _undoViewPenArray; // +0x1c0
    NSMutableArray * _undoViewMosaicArray; // +0x1c8
    unsigned long long _editImageUIStyle; // +0x1d0
    CGPath * __drawPath; // +0x1d8
    NSMutableArray * _drawViewPenColorArray; // +0x1e0
    NSMutableArray * _drawViewGlassMosaicArray; // +0x1e8
    NSMutableArray * _drawViewPaintingMosaicArray; // +0x1f0
    UIView * __superView; // +0x1f8
    double _horizontalEditSafeAreaOffset; // +0x200
    double _verticalEditSafeAreaOffset; // +0x208
    WCEditViewControllerUIConfig * _uiConfig; // +0x210
    unsigned long long _editImageContentType; // +0x218
    EditImageMusicLyricsWidgetTool * _musicLyricsWidget; // +0x220
    EditImagePOITool * _poiWidget; // +0x228
    EditImageTextTool * _textWidget; // +0x230
    WCEditPanGestureFilter * _panFilter; // +0x238
    WCEditImageOperationMgr * _operationMgr; // +0x240
    WCEditImagePenTraceMgr * _penTraceMgr; // +0x248
    WCEditImagePenTraceMgr * _mosaicTraceMgr; // +0x250
    WCEditEraserCurserView * _eraserCurserView; // +0x258
    CGPoint _firstTouchPoint; // +0x260
    CGRect _startImageFrame; // +0x270
    CGRect _editViewFrame; // +0x290
    CGRect _cancelBtnFrame; // +0x2b0
}
- (id)initWithEditViewFrame:(CGRect)arg1;
- (void)initDeleteBar;
- (void)reloadDeleteBar;
- (id)drawViewPenColorArray;
- (id)drawViewGlassMosaicArray;
- (id)drawViewPaintingMosaicArray;
- (void)dealloc;
- (void)initDrawViewArrayAndHierarchyArray:(id)arg1;
- (void)genCacheImage;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)_tryAddAnGestureOperation;
- (void)_tryAddPenEraserOperationWithHiddenPenTraceIndex:(id)arg1;
- (void)_tryAddMosaicEraserOperationWithHiddenPenTraceIndex:(id)arg1;
- (BOOL)findGestureWidget:(id)arg1;
- (void)startTimer;
- (void)cancelTimer;
- (void)triggerTimer;
- (void)startGesture;
- (void)endGesture:(id)arg1;
- (void)bringWidgetviewToFront:(id)arg1;
- (void)bringWidgetviewBack:(id)arg1;
- (void)updateViewIndex;
- (void)widgetToolBecomeFirstResponder:(id)arg1;
- (void)reloadAllWidgetFrame;
- (double)scrollViewZoomScale;
- (void)removeSubview:(id)arg1;
- (void)addNewWidget:(id)arg1;
- (void)dragaAndDropWidget;
- (void)deleteBarSelected;
- (void)deleteBarDeselected;
- (void)reloadViews:(BOOL)arg1;
- (void)reloadImage:(BOOL)arg1;
- (void)loadImage:(id)arg1 withDrawLayerArray:(id)arg2 withEditEntrance:(unsigned int)arg3;
- (void)loadOriginalImage:(id)arg1 withImageData:(id)arg2;
- (BOOL)canZoom;
- (void)scrollViewDidScroll;
- (void)scrollViewDidZoom;
- (void)scrollViewDidEndZoom;
- (BOOL)canPenUndo;
- (BOOL)canMosaicUndo;
- (BOOL)canRedo;
- (BOOL)hasAddPenTrace;
- (void)undoPen;
- (void)undoMosaic;
- (void)redo;
- (void)setEraserModeActive:(BOOL)arg1;
- (int)checkToolType;
- (void)useImageTool:(int)arg1;
- (double)getTextViewTop;
- (void)didSelectEmoticonWithWrap:(id)arg1 decodedImage:(id)arg2;
- (void)changeLineColor:(id)arg1;
- (void)changeLineWidth:(double)arg1;
- (void)changeMosaicStyle:(unsigned long long)arg1;
- (void)setDeleteBarHidden:(BOOL)arg1;
- (BOOL)alreadyHasSubviews;
- (void)addNewSubview:(id)arg1;
- (void)startDrawing;
- (void)finishDrawing;
- (void)resetFinishDrawingTimer;
- (void)finishDrawingTriggerEvent;
- (void)checkWidgetOutside:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)genLastEditView;
- (BOOL)isInPenOrMosaicToolType;
- (id)genEditedImageWithOriginalSize;
- (id)generateWidgetStateList;
- (BOOL)isTextToolType:(int)arg1;
- (void)onClickDoneBtn:(id /* block */)arg1;
- (void)timerTrigger:(id)arg1;
- (void)trueClickDoneBtn;
- (void)onClickCancelBtn;
- (void)revertViewToBegining;
- (BOOL)checkWhetherEdited;
- (void)setMusicLyricIsOn:(BOOL)arg1;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (void)updateMusicLyricsCropTime:(struct)arg1;
- (void)updateFixedPositionWidgetWithTipsButton:(id)arg1 lineView:(id)arg2;
- (id)transToMosaicImage:(id)arg1 blockLevel:(unsigned long long)arg2;
- (void)setColorPointMap:(id)arg1;
- (id)colorOfPoint:(CGPoint)arg1;
- (id)getEditImagePOITool:(id)arg1;
- (BOOL)canGlobalUndo;
- (BOOL)canGlobalRedo;
- (void)globalUndo;
- (void)globalRedo;
- (void)recordAnOperation:(id)arg1;
- (void)undoAddNewSubview:(id)arg1;
- (void)editImageTextTool:(id)arg1 needConfirmEditText:(id)arg2 withColor:(id)arg3 style:(unsigned long long)arg4 backgroundColor:(id)arg5;
- (void)setToolType:(int)arg1;
- (id)_deleteBar;
- (id)getCurrentTool;
- (id)operationMgr;
- (id)musicLyricsWidget;
- (id)mosaicImage;
- (id)_superView;
- (double)initWidgetYPostionFactor;
- (BOOL)shouldShowVerticalEditSafeArea;
- (BOOL)shouldShowHorizontalEditSafeArea;
- (id)getEditImageAttr;
- (id)_drawLayerArray;
- (void)set_drawLayerArray:(id)arg1;
- (id)_drawLayerBufferArray;
- (void)set_drawLayerBufferArray:(id)arg1;
- (id)_delegate;
- (void)set_delegate:(id)arg1;
- (CGRect)_startImageFrame;
- (void)set_startImageFrame:(CGRect)arg1;
- (double)_lineWidth;
- (void)set_lineWidth:(double)arg1;
- (id)_lineColor;
- (void)set_lineColor:(id)arg1;
- (int)_toolType;
- (void)set_toolType:(int)arg1;
- (BOOL)_isNeedRedrawMosaicImage;
- (void)set_isNeedRedrawMosaicImage:(BOOL)arg1;
- (id)_drawLayer;
- (void)set_drawLayer:(id)arg1;
- (id)_foregroundImage;
- (void)set_foregroundImage:(id)arg1;
- (id)_backupImage;
- (void)set_backupImage:(id)arg1;
- (BOOL)_willSetImageLayer;
- (void)set_willSetImageLayer:(BOOL)arg1;
- (BOOL)_didSetImageLayer;
- (void)set_didSetImageLayer:(BOOL)arg1;
- (id)_currentTool;
- (void)set_currentTool:(id)arg1;
- (id)_mosaicImage;
- (void)set_mosaicImage:(id)arg1;
- (id)_textViewArray;
- (void)set_textViewArray:(id)arg1;
- (id)_drawViewWidgetArray;
- (void)set_drawViewWidgetArray:(id)arg1;
- (id)_drawViewPenArray;
- (void)set_drawViewPenArray:(id)arg1;
- (id)_drawViewMosaicArray;
- (void)set_drawViewMosaicArray:(id)arg1;
- (id)_drawViewCropArray;
- (void)set_drawViewCropArray:(id)arg1;
- (id)_drawHierarchyViewArray;
- (void)set_drawHierarchyViewArray:(id)arg1;
- (id)_imgColorView;
- (void)set_imgColorView:(id)arg1;
- (id)_overlayView;
- (void)set_overlayView:(id)arg1;
- (void)set_deleteBar:(id)arg1;
- (id)_drawRevertArray;
- (void)set_drawRevertArray:(id)arg1;
- (id)_highlightWidgetTool;
- (void)set_highlightWidgetTool:(id)arg1;
- (id)_penView;
- (void)set_penView:(id)arg1;
- (id)_mosaicView;
- (void)set_mosaicView:(id)arg1;
- (id)_tempMosaicView;
- (void)set_tempMosaicView:(id)arg1;
- (id)_tempPenView;
- (void)set_tempPenView:(id)arg1;
- (id)_undoViewPenArray;
- (void)set_undoViewPenArray:(id)arg1;
- (id)_undoViewMosaicArray;
- (void)set_undoViewMosaicArray:(id)arg1;
- (unsigned long long)editImageUIStyle;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (unsigned int)fromEntrance;
- (void)setFromEntrance:(unsigned int)arg1;
- (BOOL)animatable;
- (void)setAnimatable:(BOOL)arg1;
- (CGPoint)firstTouchPoint;
- (void)setFirstTouchPoint:(CGPoint)arg1;
- (CGPath *)_drawPath;
- (void)set_drawPath:(CGPath *)arg1;
- (void)setDrawViewPenColorArray:(id)arg1;
- (void)setDrawViewGlassMosaicArray:(id)arg1;
- (void)setDrawViewPaintingMosaicArray:(id)arg1;
- (BOOL)_isBeforeMosaicTool;
- (void)set_isBeforeMosaicTool:(BOOL)arg1;
- (void)set_superView:(id)arg1;
- (CGRect)editViewFrame;
- (void)setEditViewFrame:(CGRect)arg1;
- (BOOL)hasTapForDraw;
- (void)setHasTapForDraw:(BOOL)arg1;
- (double)horizontalEditSafeAreaOffset;
- (void)setHorizontalEditSafeAreaOffset:(double)arg1;
- (double)verticalEditSafeAreaOffset;
- (void)setVerticalEditSafeAreaOffset:(double)arg1;
- (BOOL)hasShowedDeleteBar;
- (void)setHasShowedDeleteBar:(BOOL)arg1;
- (CGRect)cancelBtnFrame;
- (void)setCancelBtnFrame:(CGRect)arg1;
- (BOOL)notCheckOriginalImgWhiteClickDone;
- (void)setNotCheckOriginalImgWhiteClickDone:(BOOL)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (unsigned long long)editImageContentType;
- (void)setEditImageContentType:(unsigned long long)arg1;
- (void)setMusicLyricsWidget:(id)arg1;
- (id)poiWidget;
- (void)setPoiWidget:(id)arg1;
- (id)textWidget;
- (void)setTextWidget:(id)arg1;
- (id)panFilter;
- (void)setPanFilter:(id)arg1;
- (BOOL)isInEraserMode;
- (void)setIsInEraserMode:(BOOL)arg1;
- (void)setOperationMgr:(id)arg1;
- (id)penTraceMgr;
- (void)setPenTraceMgr:(id)arg1;
- (id)mosaicTraceMgr;
- (void)setMosaicTraceMgr:(id)arg1;
- (id)eraserCurserView;
- (void)setEraserCurserView:(id)arg1;
- (void).cxx_destruct;
@end

