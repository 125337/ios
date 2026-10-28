@interface KvReportItem30451 : KvReportBaseItem
{
    unsigned int _blueLinkRedirectionType; // +0x8
    unsigned int _opType; // +0xc
    NSString * _bizUsername; // +0x10
    NSString * _systemMessage; // +0x18
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)systemMessage;
- (void)setSystemMessage:(id)arg1;
- (unsigned int)blueLinkRedirectionType;
- (void)setBlueLinkRedirectionType:(unsigned int)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
