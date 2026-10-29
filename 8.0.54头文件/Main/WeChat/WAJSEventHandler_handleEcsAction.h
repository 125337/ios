@interface WAJSEventHandler_handleEcsAction : WAJSEventHandler_BaseEvent <SessionSelectControllerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)handleSelectContact:(id)arg1;
- (void)handleOpenEcs:(id)arg1;
- (void)handlePrintLog:(id)arg1;
- (void)handleOpenGiveGiftPage:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (BOOL)onShouldFilterContact:(id)arg1;
- (BOOL)filterContact:(id)arg1;
- (void)handleGiveGiftCgi:(id)arg1;
- (void)handleGiveGiftResp:(id)arg1 ticket:(id)arg2;
- (void)handleNotifyGiftPaySuc:(id)arg1;
@end

