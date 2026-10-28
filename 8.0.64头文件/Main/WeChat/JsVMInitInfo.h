@interface JsVMInitInfo : NSObject
{
    unsigned long long _beginTime; // +0x8
    unsigned long long _endTime; // +0x10
}
- (unsigned long long)beginTime;
- (void)setBeginTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
@end
