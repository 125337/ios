@interface QVisArcLineLayerPayload : QVisLayerPayload
{
    QArcStyle * _style; // +0x38
    NSArray * _lines; // +0x40
    QArcOverlayAnimation * _animation; // +0x48
}
- (id)style;
- (void)setStyle:(id)arg1;
- (id)lines;
- (void)setLines:(id)arg1;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (void).cxx_destruct;
@end
