@interface ChatBotShareHistoryCDNManager : NSObject
{
    NSCache * _historyPathCache; // +0x8
}
+ (id)sharedManager;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)_permanentUploadBizReqPayload;
- (id)init;
- (void)uploadHistoryAtPath:(id)arg1 completion:(id /* block */)arg2;
- (id)parseHistoryInfoFromMessageContent:(id)arg1;
- (id)parseHistoryInfoFromRecordItem:(id)arg1;
- (id)chatBotHistoryXMLWithInfo:(id)arg1 title:(id)arg2 desc:(id)arg3;
- (id)parseHistoryDisplayInfoFromMessageContent:(id)arg1;
- (id)parseHistoryDisplayInfoFromRecordItem:(id)arg1;
- (id)_historySummaryFromMessageContent:(id)arg1;
- (id)_historySummaryFromPlainText:(id)arg1;
- (id)cachePathForHistoryInfo:(id)arg1;
- (void)prepareLocalHistoryPathForInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)_cacheKeyForHistoryInfo:(id)arg1;
- (id)_stringValueForKey:(id)arg1 fromObject:(id)arg2;
- (id)_keyValuePairsFromText:(id)arg1;
- (id)_firstMatchInContent:(id)arg1 pattern:(id)arg2;
- (void)_dispatchCompletion:(id /* block */)arg1 historyInfo:(id)arg2;
- (void)_dispatchPathCompletion:(id /* block */)arg1 path:(id)arg2;
- (id)historyPathCache;
- (void)setHistoryPathCache:(id)arg1;
- (void).cxx_destruct;
@end
