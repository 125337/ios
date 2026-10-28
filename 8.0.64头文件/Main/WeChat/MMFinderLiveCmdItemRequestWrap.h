@interface MMFinderLiveCmdItemRequestWrap : NSObject
{
    FinderCmdItem * _cmdItem; // +0x8
    FinderCmdRet * _cmdRet; // +0x10
    id /* block */ _completeCallBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)cmdItem;
- (void)setCmdItem:(id)arg1;
- (id)cmdRet;
- (void)setCmdRet:(id)arg1;
- (id /* block */)completeCallBlock;
- (void)setCompleteCallBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
