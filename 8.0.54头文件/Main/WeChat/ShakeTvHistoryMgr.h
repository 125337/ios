@interface ShakeTvHistoryMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    BOOL _hadLoadCache; // +0x8
    NSMutableArray * _shakeTvList; // +0x10
}
- (void)onServiceInit;
- (void)dealloc;
- (void)tryLoadCache;
- (void)saveHistory;
- (void)opShakeTvHistory:(unsigned int)arg1 brandUserName:(id)arg2;
- (id)pathForCache;
- (void)addTvItem:(id)arg1;
- (void)deleteTvItem:(id)arg1 needSaveCache:(BOOL)arg2;
- (void)notifyDeleteTvItem:(id)arg1;
- (void)deleteTvItem:(id)arg1;
- (id)getHistoryTvItemList;
- (void)clearAllHistory;
- (void)handleShakeTvTempSession:(id)arg1 deeplinkUrl:(id)arg2 currVC:(id)arg3 statScene:(unsigned int)arg4 openLinkScene:(int)arg5;
- (void)handleOpTvHist:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end

