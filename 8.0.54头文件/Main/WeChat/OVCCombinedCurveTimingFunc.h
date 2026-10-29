@interface OVCCombinedCurveTimingFunc : NSObject
{
    SharedPtr<XMFCombinedCurveTimingFunc> _backingTimingFunc; // +0x8
}
- (id)initWithSourceDuration:(struct)arg1 targetDuration:(struct)arg2 controlPoints:(id)arg3;
- (struct)mapTime:(struct)arg1;
- (struct)reverseMapTime:(struct)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

