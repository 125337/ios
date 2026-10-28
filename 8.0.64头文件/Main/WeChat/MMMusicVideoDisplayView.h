@interface MMMusicVideoDisplayView : UIView
{
    BOOL _disableTransition; // +0x8
    NSArray * _transitions; // +0x10
    MVVideoEffectRendererView * _contentView; // +0x18
    MVVideoPixelBuffer * _currentVideoPixelBuffer; // +0x20
    MVVideoPixelBuffer * _previousVideoPixelBuffer; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)shouldRender:(id)arg1;
- (void)tryFixTimeStampIn:(id)arg1;
- (BOOL)isNextVideoBetweenPrevious:(id)arg1 andCurrent:(id)arg2;
- (void)renderToScreen;
- (CGSize)rendererSize;
- (id)generateRenderTask;
- (id)generateTaskWithTransition:(id)arg1;
- (id)generateRenderTaskWithoutTransitioning;
- (id)currentTransition;
- (void)setTransitions:(id)arg1;
- (void)addBlurEffectForRenderWithRadius:(float)arg1;
- (void)clearCachedPixelBuffer;
- (void)layoutSubviews;
- (void)updateSubviewFrame;
- (void)clearDisplay;
- (id)contentView;
- (BOOL)isTransitioningWithCurrentTransition:(id)arg1;
- (BOOL)disableTransition;
- (void)setDisableTransition:(BOOL)arg1;
- (id)transitions;
- (void)setContentView:(id)arg1;
- (id)currentVideoPixelBuffer;
- (void)setCurrentVideoPixelBuffer:(id)arg1;
- (id)previousVideoPixelBuffer;
- (void)setPreviousVideoPixelBuffer:(id)arg1;
- (void).cxx_destruct;
@end
