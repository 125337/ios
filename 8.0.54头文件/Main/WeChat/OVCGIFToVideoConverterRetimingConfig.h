@interface OVCGIFToVideoConverterRetimingConfig : NSObject
{
    unsigned long long _loopCount; // +0x8
    struct _presentationDuration; // +0x10
}
- (id)initWithPresentationDuration:(struct)arg1 loopCount:(unsigned long long)arg2;
- (struct)presentationDuration;
- (void)setPresentationDuration:(struct)arg1;
- (unsigned long long)loopCount;
- (void)setLoopCount:(unsigned long long)arg1;
@end

