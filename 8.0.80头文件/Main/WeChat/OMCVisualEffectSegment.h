@interface OMCVisualEffectSegment : OMCElementSegment
- (CGSize)normalizedContentSize;
- (void)setNormalizedContentSize:(CGSize)arg1;
- (SharedPtr<XMSVisualEffectSegment>)backingVisualEffectSegment;
@end
