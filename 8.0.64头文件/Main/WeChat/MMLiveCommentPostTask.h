@interface MMLiveCommentPostTask : NSObject
{
    unsigned int _msgType; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    NSString * _content; // +0x18
    double _localSeq; // +0x20
    NSString * _clientMsgId; // +0x28
    NSString * _nickName; // +0x30
    NSMutableDictionary * _externInfo; // +0x38
}
- (void)addExternInfo:(id)arg1;
- (void)configPostTaskID:(unsigned long long)arg1;
- (id)externInfo;
- (unsigned long long)postTaskID;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (double)localSeq;
- (void)setLocalSeq:(double)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (void)setExternInfo:(id)arg1;
- (void).cxx_destruct;
@end
