@interface LOTCompositionContainer : LOTLayerContainer
{
    NSNumber * _frameOffset; // +0x8
    CALayer * DEBUG_Center; // +0x10
    NSMutableDictionary * _keypathCache; // +0x18
    LOTNumberInterpolator * _timeInterpolator; // +0x20
    NSArray * _childLayers; // +0x28
    NSDictionary * _childMap; // +0x30
}
- (id)initWithModel:(id)arg1 inLayerGroup:(id)arg2 withLayerGroup:(id)arg3 withAssestGroup:(id)arg4;
- (void)initializeWithChildGroup:(id)arg1 withAssetGroup:(id)arg2;
- (void)displayWithFrame:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)setViewportBounds:(CGRect)arg1;
- (void)searchNodesForKeypath:(id)arg1;
- (void)setValueDelegate:(id)arg1 forKeypath:(id)arg2;
- (id)keysForKeyPath:(id)arg1;
- (id)_layerForKeypath:(id)arg1;
- (CGPoint)convertPoint:(CGPoint)arg1 toKeypathLayer:(id)arg2 withParentLayer:(id)arg3;
- (CGRect)convertRect:(CGRect)arg1 toKeypathLayer:(id)arg2 withParentLayer:(id)arg3;
- (CGPoint)convertPoint:(CGPoint)arg1 fromKeypathLayer:(id)arg2 withParentLayer:(id)arg3;
- (CGRect)convertRect:(CGRect)arg1 fromKeypathLayer:(id)arg2 withParentLayer:(id)arg3;
- (void)addSublayer:(id)arg1 toKeypathLayer:(id)arg2;
- (void)maskSublayer:(id)arg1 toKeypathLayer:(id)arg2;
- (id)childLayers;
- (id)childMap;
- (void).cxx_destruct;
@end

