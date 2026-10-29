@interface KvReportItem18589 : KvReportBaseItem
{
    unsigned int _opType; // +0x8
    unsigned int _scene; // +0xc
}
- (id)initWithOpType:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
@end

