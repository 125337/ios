@interface BoxBTLiveMsgReportItem : MMObject
{
    BOOL _isClick; // +0x8
    unsigned int _exposeTimestamp; // +0xc
    unsigned int _sessionID; // +0x10
    unsigned int _liveScene; // +0x14
    NSString * _bizUserName; // +0x18
    unsigned long long _brandMsgId; // +0x20
    NSString * _liveExportID; // +0x28
}
+ (id)reportKeyWithMsg:(id)arg1;
- (id)toReportString;
- (id)bizUserName;
- (void)setBizUserName:(id)arg1;
- (unsigned long long)brandMsgId;
- (void)setBrandMsgId:(unsigned long long)arg1;
- (unsigned int)exposeTimestamp;
- (void)setExposeTimestamp:(unsigned int)arg1;
- (unsigned int)sessionID;
- (void)setSessionID:(unsigned int)arg1;
- (id)liveExportID;
- (void)setLiveExportID:(id)arg1;
- (BOOL)isClick;
- (void)setIsClick:(BOOL)arg1;
- (unsigned int)liveScene;
- (void)setLiveScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
