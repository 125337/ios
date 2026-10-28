@interface WCPayPluginTopMsgItem : NSObject <PBCoding>
{
    unsigned int _msgCreateTime; // +0x8
    long long _msgSvrId; // +0x10
    NSString * _msgContent; // +0x18
    NSString * _username; // +0x20
}
+ (void)PBArrayAdd_msgSvrId;
+ (void)PBArrayAdd_msgContent;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_username;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)msgSvrId;
- (void)setMsgSvrId:(long long)arg1;
- (id)msgContent;
- (void)setMsgContent:(id)arg1;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
