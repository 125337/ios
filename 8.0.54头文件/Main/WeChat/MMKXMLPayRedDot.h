@interface MMKXMLPayRedDot : NSObject
{
    NSString * _reddotId; // +0x8
    long long _expireTime; // +0x10
    NSString * _wording; // +0x18
}
+ (id)KXMLPayRedDotWithReddotId:(id)arg1 expireTime:(long long)arg2 wording:(id)arg3;
- (id)initWithReddotId:(id)arg1 expireTime:(long long)arg2 wording:(id)arg3;
- (id)description;
- (id)reddotId;
- (long long)expireTime;
- (id)wording;
- (void).cxx_destruct;
@end

