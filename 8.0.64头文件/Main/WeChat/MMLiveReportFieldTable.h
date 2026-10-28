@interface MMLiveReportFieldTable : NSObject
{
    NSMutableDictionary * _fieldDict; // +0x8
    Class _reportHandlerClass; // +0x10
}
+ (void)addFieldWidthTable:(id)arg1 withClass:(Class)arg2 forFieldName:(id)arg3 forFieldIndex:(unsigned int)arg4;
- (id)init;
- (id)fieldsSortByIndex;
- (id)serializeAsLogString:(id)arg1;
- (id)fieldDict;
- (void)setFieldDict:(id)arg1;
- (Class)reportHandlerClass;
- (void)setReportHandlerClass:(Class)arg1;
- (void).cxx_destruct;
@end
