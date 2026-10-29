@interface WAEnableCopyPathMenuInfo : NSObject <PBCoding>
{
    unsigned int _recvTime; // +0x8
    unsigned int _expireSeconds; // +0xc
    NSString * _appid; // +0x10
}
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_recvTime;
+ (void)PBArrayAdd_expireSeconds;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)recvTime;
- (void)setRecvTime:(unsigned int)arg1;
- (unsigned int)expireSeconds;
- (void)setExpireSeconds:(unsigned int)arg1;
- (void).cxx_destruct;
@end

