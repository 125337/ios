@interface OMJFrameRate : NSObject
{
    XMFFrameRate _backingFrameRate; // +0x8
}
+ (id)fromType:(unsigned long long)arg1;
+ (id)fromNumericValue:(float)arg1;
- (id)initWithBackingFrameRate:(const void *)arg1;
- (BOOL)isNull;
- (float)numericValue;
- (struct)frameDuration;
- (unsigned long long)type;
- (long long)frameCountForDuration:(struct)arg1;
- (id)toStringWithCustomUnit:(id)arg1;
- (id)roundToStandard;
- (id)roundToStandardNonFractional;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (XMFFrameRate)backingFrameRate;
- (void)setBackingFrameRate:(XMFFrameRate)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

