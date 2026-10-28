@interface WAReportNewXmlPushLibsMsgItem : WAReportBaseItem
{
    unsigned int _busiType; // +0x8
    unsigned int _msgType; // +0xc
    unsigned int _state; // +0x10
    unsigned long long _receiveTime; // +0x18
    NSString * _msgId; // +0x20
}
+ (void)reportWithMsg:(id)arg1 state:(unsigned int)arg2;
- (int)reportID;
- (id)reportString;
- (unsigned long long)receiveTime;
- (void)setReceiveTime:(unsigned long long)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (unsigned int)busiType;
- (void)setBusiType:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)state;
- (void)setState:(unsigned int)arg1;
- (void).cxx_destruct;
@end
