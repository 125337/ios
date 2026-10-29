@interface WebStorageGetResult : NSObject
{
    BOOL _bError; // +0x8
    NSString * _value; // +0x10
    NSString * _weightStr; // +0x18
    long long _expireTime; // +0x20
}
- (BOOL)bError;
- (void)setBError:(BOOL)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)weightStr;
- (void)setWeightStr:(id)arg1;
- (long long)expireTime;
- (void)setExpireTime:(long long)arg1;
- (void).cxx_destruct;
@end
