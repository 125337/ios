@interface MMFinderLiveFeedPreviewKTVMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _ktvBoxDict; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initDatas;
- (void)clearDatas;
- (id)getKTVBoxWithTaskId:(id)arg1;
- (id)getKTVBoxWithTaskId:(id)arg1 autoCreateIfNotExist:(BOOL)arg2;
- (void)cacheKTVBox:(id)arg1 taskId:(id)arg2;
- (void)clearKTVBoxWithTaskId:(id)arg1;
- (void)clearKTVBoxWithTaskId:(id)arg1 exitKTV:(BOOL)arg2;
- (id)ktvBoxDict;
- (void)setKtvBoxDict:(id)arg1;
- (void).cxx_destruct;
@end
