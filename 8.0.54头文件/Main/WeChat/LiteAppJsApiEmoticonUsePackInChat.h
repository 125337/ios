@interface LiteAppJsApiEmoticonUsePackInChat : LiteAppJsApi <SessionSelectControllerDelegate>
{
    NSString * _pid; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)endWithOK;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (id)getViewController;
- (BOOL)checkMsgControllerFrom:(id)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (void).cxx_destruct;
@end

