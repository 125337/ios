@interface WCFinderProfileInfoSpecialPadding : NSObject
{
    NSString * _name; // +0x8
    long long _preViewTag; // +0x10
    long long _nextViewTag; // +0x18
    double _padding; // +0x20
}
+ (id)createWithName:(id)arg1 padding:(double)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (long long)preViewTag;
- (void)setPreViewTag:(long long)arg1;
- (long long)nextViewTag;
- (void)setNextViewTag:(long long)arg1;
- (double)padding;
- (void)setPadding:(double)arg1;
- (void).cxx_destruct;
@end
