@interface MMFinderLiveAnchorTaskEntranceMgr : MMUserService <IExptServiceExt, MMServiceProtocol>
{
    int _primarySettingEnrance; // +0x8
    int _fetchMoneyEnrance; // +0xc
    int _liveCompleteEnrance; // +0x10
    int _liveCreateEnrance; // +0x14
}
+ (void)reportForAnchorTaskExpose:(long long)arg1;
+ (void)reportForAnchorTaskClick:(long long)arg1;
+ (void)gotoLiveAnchorTaskWebPageFromNav:(id)arg1 fromScene:(long long)arg2 webviewReturnBlock:(id /* block */)arg3;
+ (void)gotoOperationWebPageFromNav:(id)arg1 urlStr:(id)arg2 webviewReturnBlock:(id /* block */)arg3;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)resetData;
- (void)checkAndUpdateData;
- (BOOL)isEntranceEnableShowAnchorTask:(long long)arg1;
- (void)onExptItemListChange;
- (BOOL)enableShowLiveAnchorTaskEntrance:(long long)arg1;
- (int)primarySettingEnrance;
- (void)setPrimarySettingEnrance:(int)arg1;
- (int)fetchMoneyEnrance;
- (void)setFetchMoneyEnrance:(int)arg1;
- (int)liveCompleteEnrance;
- (void)setLiveCompleteEnrance:(int)arg1;
- (int)liveCreateEnrance;
- (void)setLiveCreateEnrance:(int)arg1;
@end

