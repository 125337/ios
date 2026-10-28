@interface MsgImgSearchPhashService : MMUserService <PBMessageObserverDelegate, IScanGoodsServiceExt, MMServiceProtocol>
{
    NSMutableSet * _needCallbackContextSets; // +0x8
    MemoryMappedKV * _searchPhashSlotKV; // +0x10
}
+ (BOOL)isSearchPhashEnable;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getPhashInfoWithPhashStr:(id)arg1;
- (void)setPhashInfo:(id)arg1 forPhashStr:(id)arg2;
- (void)recordAndSearchPhashWithContext:(id)arg1;
- (void)handleSearchPhashReq:(id)arg1 context:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSearchPhashResp:(id)arg1;
- (id)imageForMessageWrap:(id)arg1;
- (void)onFetchPhashConfigureSuccess:(id)arg1 confVersion:(id)arg2;
- (void)onFetchPhashConfigureFail:(long long)arg1 errorMsg:(id)arg2;
- (id)memoryMappedKV;
- (id)cdnFileIDForContext:(id)arg1;
- (id)needCallbackContextSets;
- (void)setNeedCallbackContextSets:(id)arg1;
- (id)searchPhashSlotKV;
- (void)setSearchPhashSlotKV:(id)arg1;
- (void).cxx_destruct;
@end
