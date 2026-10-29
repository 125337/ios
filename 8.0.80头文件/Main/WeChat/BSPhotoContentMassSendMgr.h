@interface BSPhotoContentMassSendMgr : MMUserService <MMServiceProtocol, IMsgExt>
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)insertPhotoMassSend:(id)arg1;
- (BOOL)isSubscriptionBrand:(id)arg1;
@end
