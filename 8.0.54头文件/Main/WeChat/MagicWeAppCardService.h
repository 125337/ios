@interface MagicWeAppCardService : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _frameSetItems; // +0x8
    NSMutableDictionary * _host2biz; // +0x10
}
- (void)onServiceInit;
- (void)startWithHostIfNeeded:(id)arg1 fsPath:(id)arg2;
- (void)stopWithHost:(id)arg1;
- (void)bindFrameSetView:(id)arg1 withBiz:(id)arg2;
- (void)stopDirectly;
- (void)onCreateFrameSet:(id)arg1 forHost:(id)arg2 frameId:(unsigned int)arg3;
- (void)sendOnInsertFrameFromHost:(id)arg1 withFrameId:(unsigned int)arg2 extraData:(id)arg3;
- (void)sendOnRemoveFrameFromHost:(id)arg1 withFrameId:(unsigned int)arg2;
- (void)sendEventFromHost:(id)arg1 withName:(id)arg2 params:(id)arg3;
- (id)getHostForBiz:(id)arg1;
- (id)getBizForHost:(id)arg1;
- (void)cacheBiz:(id)arg1 forHost:(id)arg2;
- (void)removeBizForHost:(id)arg1;
- (void)cacheFrameSetItem:(id)arg1 forHost:(id)arg2 frameId:(unsigned int)arg3;
- (void)removeCacheFrameSetItemForHost:(id)arg1 frameId:(unsigned int)arg2;
- (id)getFrameSetItemCacheForHost:(id)arg1 frameId:(unsigned int)arg2;
- (void)insertMagicBrushFrameForHost:(id)arg1 withAppid:(id)arg2 frameId:(unsigned int)arg3 debugMode:(unsigned int)arg4 pagePath:(id)arg5 fsPath:(id)arg6 extraData:(id)arg7 completion:(id /* block */)arg8;
- (void)removeMagicBrushFrameInHost:(id)arg1 withFrameId:(unsigned int)arg2;
- (void)postMessageToMagicBrushInHost:(id)arg1 withFrameId:(unsigned int)arg2 message:(id)arg3 fromAppid:(id)arg4;
- (id)frameSetItems;
- (void)setFrameSetItems:(id)arg1;
- (id)host2biz;
- (void)setHost2biz:(id)arg1;
- (void).cxx_destruct;
@end

