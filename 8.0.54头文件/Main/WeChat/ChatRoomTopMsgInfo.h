@interface ChatRoomTopMsgInfo : NSObject
{
    BOOL _isRevoke; // +0x8
    unsigned int _topId; // +0xc
    unsigned int _msgType; // +0x10
    unsigned int _status; // +0x14
    unsigned int _exposureTime; // +0x18
    NSString * _userName; // +0x20
    NSString * _opUserName; // +0x28
    unsigned long long _msgSvrID; // +0x30
    NSString * _msgSummary; // +0x38
    NSString * _msgUserName; // +0x40
}
- (id)genDBContactChatRoomTopMsg;
- (void)copyFromDBTopMsgInfo:(id)arg1;
- (void)copyFromNetworkTopMsgInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)topId;
- (void)setTopId:(unsigned int)arg1;
- (id)opUserName;
- (void)setOpUserName:(id)arg1;
- (unsigned long long)msgSvrID;
- (void)setMsgSvrID:(unsigned long long)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)msgSummary;
- (void)setMsgSummary:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)msgUserName;
- (void)setMsgUserName:(id)arg1;
- (BOOL)isRevoke;
- (void)setIsRevoke:(BOOL)arg1;
- (unsigned int)exposureTime;
- (void)setExposureTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

