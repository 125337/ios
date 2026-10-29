@interface FlutterBizConversationPlugin : NSObject <IContactMgrExt, BrandDatabaseNotifyDelegate, PBMessageObserverDelegate, MMFlutterPlugin, ConversationListApi>
{
    BOOL _batchUnsubscribeLoadingShown; // +0x8
    int _bizType; // +0xc
    UIViewController * _viewController; // +0x10
    unsigned long long _source; // +0x18
    ConversationListCallbackApi * _conversationListCallbackApi; // +0x20
    NSMutableSet * _clickSet; // +0x28
    UIViewController * _currentViewController; // +0x30
    NSMutableArray * _contactArrSortedByUpdateTime; // +0x38
    NSMutableArray * _contactArrSortedByCreateTime; // +0x40
    NSMutableDictionary * _digestDataMap; // +0x48
    long long _sortType; // +0x50
    NSObject<OS_dispatch_queue> * _queue; // +0x58
    NSMutableSet * _setFastLoadTemplateType; // +0x60
    long long _flutterReloadGeneration; // +0x68
    NSMutableSet * _batchPendingUsernames; // +0x70
    NSMutableArray * _batchSuccessUsernames; // +0x78
    NSMutableArray * _batchCGIRemainingUsernames; // +0x80
}
- (id)init;
- (void)dealloc;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)initContact;
- (void)initDigest;
- (void)initAndSortData;
- (void)sort;
- (id)getConversationCountWithError:(id *)arg1;
- (void)getConversationListOrderByUpdateTimeBuffer:(long long)arg1 size:(long long)arg2 completion:(id /* block */)arg3;
- (void)getConversationListOrderByCreateTimeBuffer:(long long)arg1 size:(long long)arg2 completion:(id /* block */)arg3;
- (void)unSubscribeContactUsername:(id)arg1 error:(id *)arg2;
- (void)unSubscribeAllContactsUsernames:(id)arg1 error:(id *)arg2;
- (void)hideBatchUnsubscribeLoading;
- (void)sendBatchUnSubscribeCGIWithUsernames:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)proceedBatchUnsubscribeOrFinish;
- (void)finishBatchUnsubscribe;
- (void)reloadNowFlutter;
- (void)doSearchWithError:(id *)arg1;
- (void)enterProfileUsername:(id)arg1 addContactScene:(long long)arg2 error:(id *)arg3;
- (void)fetchDigestWithError:(id *)arg1;
- (id)convertContactData:(id)arg1;
- (void)gotoUrlInfo:(id)arg1 error:(id *)arg2;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 error:(id *)arg4;
- (void)onNewBrandContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onDataChange:(id)arg1 Username:(id)arg2;
- (void)onAbnormalInfoDidUpdate:(id)arg1;
- (void)reportOnClickItem:(id)arg1;
- (void)report27270:(int)arg1;
- (void)notifyFlutterReload;
- (BOOL)isContactNeedExtraFiltered:(id)arg1;
- (BOOL)isValidBizTypeContact:(id)arg1;
- (id)digestInfoForUsername:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (id)conversationListCallbackApi;
- (void)setConversationListCallbackApi:(id)arg1;
- (id)clickSet;
- (void)setClickSet:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)contactArrSortedByUpdateTime;
- (void)setContactArrSortedByUpdateTime:(id)arg1;
- (id)contactArrSortedByCreateTime;
- (void)setContactArrSortedByCreateTime:(id)arg1;
- (id)digestDataMap;
- (void)setDigestDataMap:(id)arg1;
- (long long)sortType;
- (void)setSortType:(long long)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)setFastLoadTemplateType;
- (void)setSetFastLoadTemplateType:(id)arg1;
- (long long)flutterReloadGeneration;
- (void)setFlutterReloadGeneration:(long long)arg1;
- (id)batchPendingUsernames;
- (void)setBatchPendingUsernames:(id)arg1;
- (id)batchSuccessUsernames;
- (void)setBatchSuccessUsernames:(id)arg1;
- (BOOL)batchUnsubscribeLoadingShown;
- (void)setBatchUnsubscribeLoadingShown:(BOOL)arg1;
- (id)batchCGIRemainingUsernames;
- (void)setBatchCGIRemainingUsernames:(id)arg1;
- (void).cxx_destruct;
@end
