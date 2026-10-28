@interface MMFinderLiveFeedPreviewKTVMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _ktvBoxDict; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initDatas;
- (void)clearDatas;
- (id)getKTVBoxWithTaskId:(id)arg1;
- (void)clearKTVBoxWithTaskId:(id)arg1;
- (id)ktvBoxDict;
- (void)setKtvBoxDict:(id)arg1;
- (void).cxx_destruct;
@end
