@interface BTLNotifyBarReportItem : MMObject
{
    BOOL _isClick; // +0x8
    unsigned int _exposeTimes; // +0xc
    unsigned int _exposeTimestamp; // +0x10
    unsigned int _msgType; // +0x14
    NSString * _bizUserName; // +0x18
}
- (unsigned int)exposeTimes;
- (void)setExposeTimes:(unsigned int)arg1;
- (unsigned int)exposeTimestamp;
- (void)setExposeTimestamp:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)bizUserName;
- (void)setBizUserName:(id)arg1;
- (BOOL)isClick;
- (void)setIsClick:(BOOL)arg1;
- (void).cxx_destruct;
@end

