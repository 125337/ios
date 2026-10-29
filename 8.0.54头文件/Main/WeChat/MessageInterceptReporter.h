@interface MessageInterceptReporter : NSObject
{
    BOOL _isChatroom; // +0x8
    BOOL _isSelfSend; // +0x9
    long long _msgId; // +0x10
    long long _interceptType; // +0x18
    unsigned long long _lastAction; // +0x20
}
- (id)initWithMsgWrap:(id)arg1;
- (void)reset;
- (void)checkReport;
- (void)recordAction:(unsigned long long)arg1;
- (void)recordAction:(unsigned long long)arg1 copyLen:(unsigned long long)arg2;
- (void)logWithAction:(unsigned long long)arg1 copyLen:(unsigned long long)arg2;
- (long long)msgId;
- (void)setMsgId:(long long)arg1;
- (BOOL)isChatroom;
- (void)setIsChatroom:(BOOL)arg1;
- (BOOL)isSelfSend;
- (void)setIsSelfSend:(BOOL)arg1;
- (long long)interceptType;
- (void)setInterceptType:(long long)arg1;
- (unsigned long long)lastAction;
- (void)setLastAction:(unsigned long long)arg1;
@end

