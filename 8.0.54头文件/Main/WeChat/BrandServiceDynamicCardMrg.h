@interface BrandServiceDynamicCardMrg : NSObject
{
    BrandServiceDynamicCardMrgCallbackBridge * callback_; // +0x8
}
+ (id)shareInstance;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (BrandServiceDynamicCardMrgBridge *)bridge;
- (void)mockInsertCanvas:(unsigned int)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)callOnAdServerInfo:(id)arg1;
- (void)callOnRecFeedsAdServerInfo:(id)arg1;
- (void)callOnDynamicCardInfo:(unsigned int)arg1 msgId:(unsigned long long)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4;
- (id)getAllDynamicCardInfo:(unsigned int)arg1;
- (BOOL)setAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (BOOL)setFeedsAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (BOOL)setAdCardRequestInfo:(unsigned long long)arg1 adInfo:(id)arg2;
- (BOOL)deleteDynamicCard:(unsigned long long)arg1 dynamicCardType:(unsigned int)arg2;
@end

