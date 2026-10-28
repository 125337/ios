@interface MVVideoEffectRendererView : UIView <MTKViewDelegate>
{
    BOOL _shouldClearDisplayContent; // +0x8
    BOOL _isApplicationActive; // +0x9
    MAVEffectRenderer * _effectRender; // +0x10
    MAVMTLView * _glkView; // +0x18
    NSMutableArray * _pendingTaskList; // +0x20
    NSArray * _transitionList; // +0x28
    NSObject<OS_dispatch_queue> * _renderDispatchQueue; // +0x30
    CGRect _displayFrame; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)setupSubviews;
- (void)shouldRender:(id)arg1;
- (void)_shouldRender:(id)arg1;
- (void)displayGlkView;
- (void)renderToScreenWithTask:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)updateSubviewFrame;
- (CGSize)rendererSize;
- (void)addBlurEffectForRenderWithRadius:(float)arg1;
- (void)setTransitions:(id)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (BOOL)isValidStatus;
- (id)pendingTaskList;
- (id)effectRender;
- (id)glkView;
- (void)clearDisplay;
- (void)setEffectRender:(id)arg1;
- (void)setGlkView:(id)arg1;
- (void)setPendingTaskList:(id)arg1;
- (id)transitionList;
- (void)setTransitionList:(id)arg1;
- (BOOL)shouldClearDisplayContent;
- (void)setShouldClearDisplayContent:(BOOL)arg1;
- (id)renderDispatchQueue;
- (void)setRenderDispatchQueue:(id)arg1;
- (CGRect)displayFrame;
- (void)setDisplayFrame:(CGRect)arg1;
- (BOOL)isApplicationActive;
- (void)setIsApplicationActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
