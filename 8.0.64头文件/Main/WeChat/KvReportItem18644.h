@interface KvReportItem18644 : KvReportBaseItem
{
    unsigned int _SessionId_24; // +0x8
    unsigned int _Pos_25; // +0xc
    NSString * _BizUserName_21; // +0x10
    long long _CardID_22; // +0x18
    NSString * _FbContent_23; // +0x20
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (id)BizUserName_21;
- (void)setBizUserName_21:(id)arg1;
- (long long)CardID_22;
- (void)setCardID_22:(long long)arg1;
- (id)FbContent_23;
- (void)setFbContent_23:(id)arg1;
- (unsigned int)SessionId_24;
- (void)setSessionId_24:(unsigned int)arg1;
- (unsigned int)Pos_25;
- (void)setPos_25:(unsigned int)arg1;
- (void).cxx_destruct;
@end
