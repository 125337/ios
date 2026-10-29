@interface MMLiveReportEventMgr : MMUserService <MMServiceProtocol, ClickStatSwizzleExt>
{
    NSMutableDictionary * _handlerObjects; // +0x8
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)registerNotification;
- (void)unRegisterNotification;
- (void)bindSessionId:(id)arg1 withHandlerClass:(Class)arg2;
- (id)sessionIdOfHandlerClass:(Class)arg1;
- (void)registerReportHandlerClass:(Class)arg1;
- (void)unRegisterReportHandlerClass:(Class)arg1;
- (void)onSendEvent:(id)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onActionSheetClicked:(id)arg1 buttonAtIndex:(long long)arg2 controller:(id)arg3;
- (void)onUIOrientationChanged:(id)arg1;
- (id)handlerObjects;
- (void)setHandlerObjects:(id)arg1;
- (void).cxx_destruct;
@end

