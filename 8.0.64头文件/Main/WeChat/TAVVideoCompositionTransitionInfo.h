@interface TAVVideoCompositionTransitionInfo : NSObject
{
    id <TAVVideoTransition> _transition; // +0x8
    TAVVideoTransitionRenderInfo * _renderInfo; // +0x10
}
- (id)transition;
- (void)setTransition:(id)arg1;
- (id)renderInfo;
- (void)setRenderInfo:(id)arg1;
- (void).cxx_destruct;
@end
