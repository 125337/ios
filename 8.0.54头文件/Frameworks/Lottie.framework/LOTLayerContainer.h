@interface LOTLayerContainer : CALayer
{
    LOTTransformInterpolator * _transformInterpolator; // +0x8
    LOTNumberInterpolator * _opacityInterpolator; // +0x10
    NSNumber * _inFrame; // +0x18
    NSNumber * _outFrame; // +0x20
    CALayer * DEBUG_Center; // +0x28
    LOTRenderGroup * _contentsGroup; // +0x30
    LOTMaskContainer * _maskLayer; // +0x38
    NSString * _layerName; // +0x40
    NSNumber * _timeStretchFactor; // +0x48
    CALayer * _wrapperLayer; // +0x50
    NSDictionary * _valueInterpolators; // +0x58
    CGRect _viewportBounds; // +0x60
}
+ (BOOL)needsDisplayForKey:(id)arg1;
- (id)initWithModel:(id)arg1 inLayerGroup:(id)arg2;
- (void)commonInitializeWith:(id)arg1 inLayerGroup:(id)arg2;
- (void)buildContents:(id)arg1;
- (void)_setImageForAsset:(id)arg1;
- (id)actionForKey:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)display;
- (void)displayWithFrame:(id)arg1;
- (void)displayWithFrame:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)setViewportBounds:(CGRect)arg1;
- (void)searchNodesForKeypath:(id)arg1;
- (void)setValueDelegate:(id)arg1 forKeypath:(id)arg2;
- (id)layerName;
- (id)timeStretchFactor;
- (CGRect)viewportBounds;
- (id)wrapperLayer;
- (id)valueInterpolators;
- (void).cxx_destruct;
@end

