@interface WCSNSMessage : NSObject
{
    NSString * msgID; // +0x8
    NSString * objID; // +0x10
    NSString * parentObjID; // +0x18
    WCUserComment * comment; // +0x20
    WCUserComment * refComment; // +0x28
    BOOL hasRead; // +0x30
    unsigned int delStatus; // +0x34
    WCSNSRewardInfo * rewardInfo; // +0x38
    NSString * _clientId; // +0x40
}
+ (id)fromSnsActionGroup:(id)arg1;
- (id)init;
- (id)description;
- (BOOL)isWCMessageDeleted;
- (BOOL)isWCDataItemDeleted;
- (void)upgradeDataIfNeeded;
- (long long)msgTypeFromClientId;
- (id)msgID;
- (void)setMsgID:(id)arg1;
- (id)objID;
- (void)setObjID:(id)arg1;
- (id)parentObjID;
- (void)setParentObjID:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)refComment;
- (void)setRefComment:(id)arg1;
- (BOOL)hasRead;
- (void)setHasRead:(BOOL)arg1;
- (unsigned int)delStatus;
- (void)setDelStatus:(unsigned int)arg1;
- (id)rewardInfo;
- (void)setRewardInfo:(id)arg1;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (void).cxx_destruct;
@end

