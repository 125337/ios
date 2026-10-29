@interface MMFreezeBalanceMsg : NSObject
{
    int _wordingSize; // +0x8
    NSString * _wording; // +0x10
    long long _wordingColor; // +0x18
    long long _bgColor; // +0x20
    NSString * _routeUrl; // +0x28
    NSString * _leftIcon; // +0x30
    NSString * _rightIcon; // +0x38
}
+ (id)FreezeBalanceMsgWithWording:(id)arg1 wordingColor:(long long)arg2 wordingSize:(int)arg3 bgColor:(long long)arg4 routeUrl:(id)arg5 leftIcon:(id)arg6 rightIcon:(id)arg7;
- (id)initWithWording:(id)arg1 wordingColor:(long long)arg2 wordingSize:(int)arg3 bgColor:(long long)arg4 routeUrl:(id)arg5 leftIcon:(id)arg6 rightIcon:(id)arg7;
- (id)description;
- (id)wording;
- (long long)wordingColor;
- (int)wordingSize;
- (long long)bgColor;
- (id)routeUrl;
- (id)leftIcon;
- (id)rightIcon;
- (void).cxx_destruct;
@end

