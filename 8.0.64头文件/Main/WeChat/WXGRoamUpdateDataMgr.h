@interface WXGRoamUpdateDataMgr : MMUserService <IMsgExt, MMServiceProtocol>
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
@end
