@interface KvReportItem21136 : KvReportBaseItem
{
    BOOL _IsClick_26; // +0x8
    unsigned int _ExposeTimes_21; // +0xc
    unsigned int _ExposeTimestamp_22; // +0x10
    unsigned int _MsgType_23; // +0x14
    unsigned int _Sessionid_24; // +0x18
    NSString * _BizUserName_25; // +0x20
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)ExposeTimes_21;
- (void)setExposeTimes_21:(unsigned int)arg1;
- (unsigned int)ExposeTimestamp_22;
- (void)setExposeTimestamp_22:(unsigned int)arg1;
- (unsigned int)MsgType_23;
- (void)setMsgType_23:(unsigned int)arg1;
- (unsigned int)Sessionid_24;
- (void)setSessionid_24:(unsigned int)arg1;
- (id)BizUserName_25;
- (void)setBizUserName_25:(id)arg1;
- (BOOL)IsClick_26;
- (void)setIsClick_26:(BOOL)arg1;
- (void).cxx_destruct;
@end
