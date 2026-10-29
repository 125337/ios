@interface YuanbaoHongbaoGenImageInfo : NSObject <NSCoding>
{
    unsigned long long _expiredTimestamp; // +0x8
    unsigned long long _quota; // +0x10
    NSString * _packetId; // +0x18
    unsigned long long _quotaUsed; // +0x20
    NSString * _token; // +0x28
    NSString * _channel; // +0x30
}
+ (id)CurrentGenImageInfo;
- (id)initWithExpiresIn:(unsigned long long)arg1 quota:(unsigned long long)arg2 packetId:(id)arg3 channel:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;
- (BOOL)isExpired;
- (BOOL)isQuotaUsedUp;
- (void)useQuota;
- (unsigned long long)expiredTimestamp;
- (void)setExpiredTimestamp:(unsigned long long)arg1;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)arg1;
- (id)packetId;
- (void)setPacketId:(id)arg1;
- (unsigned long long)quotaUsed;
- (void)setQuotaUsed:(unsigned long long)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (void).cxx_destruct;
@end
