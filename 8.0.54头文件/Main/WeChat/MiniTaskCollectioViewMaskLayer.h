@interface MiniTaskCollectioViewMaskLayer : CALayer
{
    CAShapeLayer * _subLeftMask; // +0x8
    CAShapeLayer * _subRightMask; // +0x10
    CAShapeLayer * _subMaskForOneCell; // +0x18
    CALayer * _guardLayer; // +0x20
    CALayer * _bigGuardLayer; // +0x28
    MiniTaskCollectioViewMaskLayerConfig * _config; // +0x30
}
- (id)initWithConfig:(id)arg1;
- (void)updateSubMaskLayersWithCellCount:(unsigned long long)arg1;
- (void)hideMaskLayer;
- (void)showMaskLayer;
- (void)setupSublayers;
- (CGRect)transCellRectToMaskRect:(CGRect)arg1;
- (id)subLeftMask;
- (void)setSubLeftMask:(id)arg1;
- (id)subRightMask;
- (void)setSubRightMask:(id)arg1;
- (id)subMaskForOneCell;
- (void)setSubMaskForOneCell:(id)arg1;
- (id)guardLayer;
- (void)setGuardLayer:(id)arg1;
- (id)bigGuardLayer;
- (void)setBigGuardLayer:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

