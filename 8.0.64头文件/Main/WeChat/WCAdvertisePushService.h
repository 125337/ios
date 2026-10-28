@interface WCAdvertisePushService : MMUserService <IMsgExt, MMServiceProtocol>
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handlePushMsg:(id)arg1;
- (void)handleDeleteAd:(id)arg1;
@end
