@interface KvReportItem20635 : KvReportBaseItem
{
    unsigned int _RecallType_23; // +0x8
    unsigned int _IsMsgExposed_24; // +0xc
    NSString * _AId_21; // +0x10
    NSString * _TraceId_22; // +0x18
}
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (id)AId_21;
- (void)setAId_21:(id)arg1;
- (id)TraceId_22;
- (void)setTraceId_22:(id)arg1;
- (unsigned int)RecallType_23;
- (void)setRecallType_23:(unsigned int)arg1;
- (unsigned int)IsMsgExposed_24;
- (void)setIsMsgExposed_24:(unsigned int)arg1;
- (void).cxx_destruct;
@end
