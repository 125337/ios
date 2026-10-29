@interface WCSessionJsonDataParser : WCSessionBaseDataParser
- (id)parseSessionFlowConfigModel:(id)arg1;
- (id)parseSessionConfigModel:(id)arg1;
- (id)parsePagePathConfigModel:(id)arg1 withSessionPageId:(id)arg2 withReport:(BOOL)arg3;
- (id)parsePagePathUnitConfigModel:(id)arg1;
- (id)parseDataPathConfigModel:(id)arg1;
- (id)parseViewOperationConfigModel:(id)arg1;
- (id)parseSessionUBAConfigModels:(id)arg1;
- (id)parseSessionUBAUnitConfigModel:(id)arg1;
- (id)jsonString2Dictionary:(id)arg1;
- (id)arrayForKey:(id)arg1 withDictionary:(id)arg2;
@end

