@interface OccupyMsgRevokeInfo : MMObject <PBCoding>
{
    unsigned int _localID; // +0x8
    unsigned int _createTime; // +0xc
    unsigned long long _msgSvrID; // +0x10
    NSString * _chatName; // +0x18
    NSString * _overwriteMsgID; // +0x20
}
+ (void)PBArrayAdd_localID;
+ (void)PBArrayAdd_msgSvrID;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_overwriteMsgID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithMessageWrap:(id)arg1;
- (unsigned int)localID;
- (void)setLocalID:(unsigned int)arg1;
- (unsigned long long)msgSvrID;
- (void)setMsgSvrID:(unsigned long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)overwriteMsgID;
- (void)setOverwriteMsgID:(id)arg1;
- (void).cxx_destruct;
@end
