@interface GoodsReqRemoteDetectLogic : MMObject <PBMessageObserverDelegate>
- (void)dealloc;
- (void)requestRemoteDetectItemWithReqKey:(id)arg1 andExchangeInfo:(id)arg2;
- (void)doReqeustRemoteDetectTask:(id)arg1;
- (void)handleCallRemoteDetectItemInfoResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end
