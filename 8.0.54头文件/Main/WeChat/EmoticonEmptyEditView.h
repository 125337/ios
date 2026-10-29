@interface EmoticonEmptyEditView : UIView <EditImageWidgetToolDelegate, UIGestureRecognizerDelegate>
{
    EditImageWidgetTool * m_highlightWidgetTool; // +0x8
    UIView * m_topLayersView; // +0x10
    UIView * m_movingLayersView; // +0x18
    UIView * m_markView; // +0x20
    NSMutableArray * m_widgetToolArray; // +0x28
    unsigned long long m_topViewsCount; // +0x30
    MMTimer * m_timer; // +0x38
    BOOL m_tapOnly; // +0x40
    EditImageDeleteBarView * _deleteBar; // +0x48
    id <EditImageAnimatedOperationDelegate><EmoticonEmptyEditViewGestureDelegate> _delegate; // +0x50
}
- (id)initWithEditViewFrame:(CGRect)arg1;
- (id)initWithEditViewFrame:(CGRect)arg1 tapOnly:(BOOL)arg2;
- (void)configGestureSetting;
- (void)setEditViewCornerRadius:(double)arg1;
- (id)exportEditImageLayer;
- (id)exportEmoticonMd5List;
- (unsigned long long)widgetToolsCount;
- (void)startGesture;
- (void)endGesture:(id)arg1;
- (void)bringWidgetviewToFront:(id)arg1;
- (void)bringWidgetviewBack:(id)arg1;
- (void)updateViewIndex;
- (void)removeSubview:(id)arg1;
- (int)checkToolType;
- (void)widgetToolBecomeFirstResponder:(id)arg1;
- (double)scrollViewZoomScale;
- (void)addNewWidget:(id)arg1;
- (void)checkWidgetOutside:(id)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)findGestureWidget:(id)arg1;
- (void)addNewSubview:(id)arg1;
- (void)toolArrayAddTool:(id)arg1;
- (void)toolArrayRemoveTool:(id)arg1;
- (void)startTimer;
- (void)cancelTimer;
- (void)triggerTimer;
- (void)setDeleteBarHidden:(BOOL)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)_deleteBar;
- (void)set_deleteBar:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

