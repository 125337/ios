@interface BotContactUtils : MMObject
+ (id)parseClawBotStatusDetail:(id)arg1;
+ (id)parseClawBotStatusNotify:(id)arg1;
+ (id)parseClawBotStatusXml:(id)arg1 rootNodeName:(const char *)arg2;
+ (id)getValidClawBotContact;
+ (void)openClawBotLiteAppFromViewController:(id)arg1;
+ (void)openClawBotChangelogFromViewController:(id)arg1;
+ (id)findTextProviderIn:(id)arg1;
+ (BOOL)shouldFetchClawBotFunctionInfo;
+ (void)markClawBotFunctionInfoFetched;
+ (id)getAllClawBotContacts;
+ (id)buildTextMsgFromMsg:(id)arg1 content:(id)arg2;
+ (void)prepareBotForwardWithMsgList:(id)arg1 msgRecordOriginList:(id)arg2 completion:(id /* block */)arg3;
+ (void)convertRecordMsgsSequentially:(id)arg1 index:(long long)arg2 results:(id)arg3 completion:(id /* block */)arg4;
+ (void)applyShareHelperToMsgList:(id)arg1 skipFilter:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)replaceWithTextMsgsInList:(id)arg1 shareItemMap:(id)arg2 skipFilter:(id /* block */)arg3;
+ (void)prepareMergeForwardWithShareHelper:(id)arg1 completion:(id /* block */)arg2;
+ (void)convertRecordMsgToZipFileMsg:(id)arg1 originalMsgList:(id)arg2 completion:(id /* block */)arg3;
+ (id)zipForwardReportParamsForMsgList:(id)arg1;
+ (void)collectMediaFileWithFileName:(id)arg1 filePath:(id)arg2 mediaFiles:(id)arg3 nameCountMap:(id)arg4;
+ (id)deduplicateFileName:(id)arg1 filePath:(id)arg2 nameCountMap:(id)arg3;
@end
