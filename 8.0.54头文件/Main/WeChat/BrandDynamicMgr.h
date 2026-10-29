@interface BrandDynamicMgr : MMUserService <MMServiceProtocol, BizDynamicCardMrgDelegate>
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onAdServerInfoEvent:(id)arg1;
- (void)onRecFeedsAdServerInfoEvent:(id)arg1;
- (void)onDynamicCardInfoEvent:(int)arg1 msgId:(unsigned long long)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4;
@end

