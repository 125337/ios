@interface EdgeComputingConfigParser : MMObject
- (id)parseNewScriptExptConfig:(id)arg1 withExptItem:(id)arg2;
- (id)parseNewScriptFieldConfig:(id)arg1;
- (id)parseNewSqlExptConfig:(id)arg1 withExptItem:(id)arg2;
- (id)parseScriptConfigModel:(id)arg1 withJson:(id)arg2;
- (id)parseFieldConfigModel:(id)arg1;
- (id)parseSqlConfigModel:(id)arg1 withJson:(id)arg2;
- (id)jsonString2Dictionary:(id)arg1;
- (id)arrayForKey:(id)arg1 withDictionary:(id)arg2;
@end
