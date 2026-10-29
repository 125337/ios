@interface WxpayPayLoadingLook : NSObject
{
    BOOL _blocking; // +0x8
    long long _kind; // +0x10
    NSString * _brand; // +0x18
    NSString * _wording; // +0x20
}
+ (id)brandLook:(id)arg1;
+ (id)defaultLook;
+ (id)lookForStyle:(long long)arg1 option:(id)arg2;
- (id)initWithKind:(long long)arg1 brand:(id)arg2 wording:(id)arg3 blocking:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)kind;
- (id)brand;
- (id)wording;
- (BOOL)blocking;
- (void).cxx_destruct;
@end
