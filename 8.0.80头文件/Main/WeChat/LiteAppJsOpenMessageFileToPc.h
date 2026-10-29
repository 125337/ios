@interface LiteAppJsOpenMessageFileToPc : LiteAppJsApi
{
    MMFileHandOffItem * _handOffItem; // +0x20
    FileDetailLogicController * _logicController; // +0x28
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)handOffItem;
- (void)setHandOffItem:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (void).cxx_destruct;
@end
