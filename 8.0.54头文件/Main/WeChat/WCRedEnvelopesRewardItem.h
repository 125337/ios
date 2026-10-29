@interface WCRedEnvelopesRewardItem : NSObject <NSCoding, PBCoding>
{
    unsigned int _createTime; // +0x8
    NSString * _userName; // +0x10
    unsigned long long _receiveAmount; // +0x18
    NSString * _sendId; // +0x20
    NSString * _ticket; // +0x28
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_receiveAmount;
+ (void)PBArrayAdd_sendId;
+ (void)PBArrayAdd_ticket;
+ (void)initialize;
+ (id)fromServerObj:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFreeItem;
- (id)description;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned long long)receiveAmount;
- (void)setReceiveAmount:(unsigned long long)arg1;
- (id)sendId;
- (void)setSendId:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (void).cxx_destruct;
@end

