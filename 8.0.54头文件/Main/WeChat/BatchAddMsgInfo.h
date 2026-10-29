@interface BatchAddMsgInfo : NSObject
{
    BOOL _isCanAddDB; // +0x8
    BOOL _isInsertNew; // +0x9
    BOOL _addDBResult; // +0xa
    BOOL _isNotify; // +0xb
    BOOL _isNeedChangeDisplay; // +0xc
    unsigned int _uiDes; // +0x10
    CMessageWrap * _wrapMsg; // +0x18
    NSString * _chatName; // +0x20
    unsigned long long _addMsgType; // +0x28
    NSString * _clusterType; // +0x30
}
- (id)realChatName;
- (id)wrapMsg;
- (void)setWrapMsg:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)uiDes;
- (void)setUiDes:(unsigned int)arg1;
- (BOOL)isCanAddDB;
- (void)setIsCanAddDB:(BOOL)arg1;
- (unsigned long long)addMsgType;
- (void)setAddMsgType:(unsigned long long)arg1;
- (id)clusterType;
- (void)setClusterType:(id)arg1;
- (BOOL)isInsertNew;
- (void)setIsInsertNew:(BOOL)arg1;
- (BOOL)addDBResult;
- (void)setAddDBResult:(BOOL)arg1;
- (BOOL)isNotify;
- (void)setIsNotify:(BOOL)arg1;
- (BOOL)isNeedChangeDisplay;
- (void)setIsNeedChangeDisplay:(BOOL)arg1;
- (void).cxx_destruct;
@end

