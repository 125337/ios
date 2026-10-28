@interface IamBizAudioPlayList : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizAudioPlayListCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizAudioPlayListDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizAudioPlayListDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (void)initWithCategoryItem:(int)arg1 categoryItem:(id)arg2;
- (void)initWithTingItems:(int)arg1 items:(id)arg2;
- (void)playFromIndex:(int)arg1;
- (int)getType;
- (id)getCategoryId;
- (BOOL)getIsValid;
- (optional<NSData *>)getCategoryItem;
- (BOOL)getIsSingle;
- (BOOL)getUpHasMore;
- (BOOL)getDownHasMore;
- (BOOL)getCanEdit;
- (int)getItemsCount;
- (id)getItem:(int)arg1;
- (id)getItems;
- (id)generateTapeItem;
- (void)refresh;
- (void)deleteItem:(int)arg1;
- (void)passiveDeleteItem:(int)arg1;
- (void)batchDeleteItems:(id)arg1 passive:(BOOL)arg2;
- (void)moveItem:(int)arg1 toIndex:(int)arg2;
- (void)loadDownMore;
- (void)loadUpMore;
- (void)subscribeTapeItemUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeTapeItemUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeTapeItemUpdatedEvent:(id)arg1;
- (void)subscribeTingItemUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeTingItemUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeTingItemUpdatedEvent:(id)arg1;
- (void)subscribeItemsReloadedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeItemsReloadedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeItemsReloadedEvent:(id)arg1;
- (void)subscribeLoadingStatusChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeLoadingStatusChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeLoadingStatusChangedEvent:(id)arg1;
- (void)subscribeLoadMoreSuccessEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeLoadMoreSuccessEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeLoadMoreSuccessEvent:(id)arg1;
- (void)subscribeLoadErrorEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeLoadErrorEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeLoadErrorEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
