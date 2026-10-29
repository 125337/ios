@interface FTSMsgItem : NSObject
{
    BOOL _isInvalid; // +0x8
    unsigned int _localId; // +0xc
    unsigned int _createTime; // +0x10
    NSString * _userName; // +0x18
    NSString * _ftsContent; // +0x20
    CMessageWrap * _msgWrap; // +0x28
}
- (long long)compareMsgItemAscending:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)ftsContent;
- (void)setFtsContent:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (BOOL)isInvalid;
- (void)setIsInvalid:(BOOL)arg1;
- (void).cxx_destruct;
@end

