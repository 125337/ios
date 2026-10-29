@interface EmoticonCustomCreateEditTask : EmoticonCustomCreateInternalTask
{
    id /* block */ _createFailBlock; // +0x8
    id /* block */ _createSucBlock; // +0x10
    NSString * _addCustomEmoticonSessionID; // +0x18
}
- (void)startEdit;
- (id /* block */)createFailBlock;
- (void)setCreateFailBlock:(id /* block */)arg1;
- (id /* block */)createSucBlock;
- (void)setCreateSucBlock:(id /* block */)arg1;
- (id)addCustomEmoticonSessionID;
- (void)setAddCustomEmoticonSessionID:(id)arg1;
- (void).cxx_destruct;
@end
