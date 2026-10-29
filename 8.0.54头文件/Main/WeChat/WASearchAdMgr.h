@interface WASearchAdMgr : MMUserService <PBMessageObserverDelegate, MMKernelExt, MMServiceProtocol>
- (void)dealloc;
- (id)getKVLogHead;
- (void)weAppClickStream:(id)arg1 keywordId:(id)arg2 clickType:(int)arg3 searchScene:(long long)arg4;
- (void)reportADLog:(unsigned int)arg1 logExt:(id)arg2;
- (void)weAppSearchADClick:(id)arg1 statKeywordId:(id)arg2 searchId:(id)arg3 docId:(id)arg4 position:(long long)arg5 appUserName:(id)arg6 appVersion:(id)arg7 adBuffer:(id)arg8 searchScene:(long long)arg9 clickExtInfo:(id)arg10;
- (void)handleAdLogResp:(id)arg1;
- (void)handleWeAppSearchAdClickResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end

