@interface OMJClipSegment : OMJSegment <OMJCropAdjustable, OMJRotationAdjustable>
{
    unsigned long long _clipType; // +0x8
    SharedPtr<XMJClipSegment> _backingClipSegment; // +0x10
}
- (id)initWithBackingSegment:(const void *)arg1;
- (id)assetInfo;
- (struct)clipDuration;
- (struct)timeRangeInClip;
- (BOOL)setTimeRangeInClip:(struct)arg1;
- (CGRect)normalizedCropRect;
- (void)setNormalizedCropRect:(CGRect)arg1 shouldCommit:(BOOL)arg2;
- (unsigned long long)rotationMode;
- (void)setRotationMode:(unsigned long long)arg1 shouldCommit:(BOOL)arg2;
- (SharedPtr<XMFClip>)backingClip;
- (SharedPtr<XAKAsset>)backingAsset;
- (SharedPtr<XMJClipSegment>)backingClipSegment;
- (id)description;
- (unsigned long long)clipType;
- (void)setBackingClipSegment:(SharedPtr<XMJClipSegment>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
