@interface LiteAppJsOpenMessageFileByWeApp : LiteAppJsApi <FileDetailLogicDelegate>
{
    BOOL _hasCheckedSupportWeApp; // +0x20
    MsgFileDetailLogicController * _logicController; // +0x28
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)getCurrentViewController;
- (id)getRightBarButtonItem;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (BOOL)hasCheckedSupportWeApp;
- (void)setHasCheckedSupportWeApp:(BOOL)arg1;
- (void).cxx_destruct;
@end
