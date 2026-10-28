@interface CaraLiveCellProphetService : MMUserService <MMServiceProtocol>
{
    CaraCppLiveCellProphet * _underlying; // +0x8
}
- (id)init;
- (void)reportThatCellExpose:(id)arg1 isReady:(id)arg2;
- (void)predict:(id)arg1 onPredicted:(id /* block */)arg2;
- (void)reportThatCellConsume:(id)arg1;
- (void)reportThatPreload:(id)arg1;
- (id)underlying;
- (void).cxx_destruct;
@end
