@interface WCPayKindaCacheBoolInfo : NSObject <PBCoding>
{
    BOOL _data; // +0x8
    long long _expired_time; // +0x10
}
+ (void)PBArrayAdd_expired_time;
+ (void)PBArrayAdd_data;
+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;
- (id)getPBPropertyTable;
- (void)genFromDic:(id)arg1;
- (long long)expired_time;
- (void)setExpired_time:(long long)arg1;
- (BOOL)data;
- (void)setData:(BOOL)arg1;
@end

