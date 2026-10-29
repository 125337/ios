@interface BrsConversationPlugin : NSObject <IContactMgrExt, IMMNewSessionMgrExt, MMFlutterPlugin, BrsConversationListApi>
{
    MMFlutterViewController * _viewController; // +0x8
    MMBaseSessionStorage * _m_sessionStorage; // +0x10
    BrsConversationListCallbackApi * _conversationListCallbackApi; // +0x18
    NSMutableSet * _clickSet; // +0x20
    NSMutableArray * _contactArrSortedByUpdateTime; // +0x28
    NSMutableArray * _contactArrSortedByCreateTime; // +0x30
    NSMutableDictionary * _sessionDataMap; // +0x38
    long long _sortType; // +0x40
    NSObject<OS_dispatch_queue> * _queue; // +0x48
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)initContact;
- (void)initSession;
- (void)initAndSortData;
- (void)sort;
- (id)getConversationCountWithError:(id *)arg1;
- (void)getConversationListOrderByUpdateTimeBuffer:(long long)arg1 size:(long long)arg2 completion:(id /* block */)arg3;
- (void)getConversationListOrderByCreateTimeBuffer:(long long)arg1 size:(long long)arg2 completion:(id /* block */)arg3;
- (void)unSubscribeContactUsername:(id)arg1 error:(id *)arg2;
- (void)doSearchWithError:(id *)arg1;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 error:(id *)arg4;
- (void)gotoMyNotifySettingSource:(long long)arg1 error:(id *)arg2;
- (void)enterChattingUsername:(id)arg1 error:(id *)arg2;
- (id)convertContactData:(id)arg1;
- (void)onNeedReload;
- (void)onDidDeleteAllSession;
- (void)onNewBrandContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)reportOnClickItem:(id)arg1;
- (void)report27270:(int)arg1;
- (void)notifyFlutterReload;
- (BOOL)isContactNeedExtraFiltered:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)m_sessionStorage;
- (void)setM_sessionStorage:(id)arg1;
- (id)conversationListCallbackApi;
- (void)setConversationListCallbackApi:(id)arg1;
- (id)clickSet;
- (void)setClickSet:(id)arg1;
- (id)contactArrSortedByUpdateTime;
- (void)setContactArrSortedByUpdateTime:(id)arg1;
- (id)contactArrSortedByCreateTime;
- (void)setContactArrSortedByCreateTime:(id)arg1;
- (id)sessionDataMap;
- (void)setSessionDataMap:(id)arg1;
- (long long)sortType;
- (void)setSortType:(long long)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end
