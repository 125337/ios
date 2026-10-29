@interface CdnServiceDownloadMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _dicDownloadArgsWrap; // +0x8
}
- (void)onServiceInit;
- (BOOL)startDownloadWithArgsWrap:(id)arg1;
- (BOOL)isTaskRunning:(id)arg1;
- (id)stopDownloadWithFileKey:(id)arg1;
- (void)stopDownloadWithAggregateName:(id)arg1;
- (BOOL)checkCache:(id)arg1;
- (BOOL)startTask:(id)arg1;
- (void)onDownloadError:(id)arg1 argsWrap:(id)arg2;
- (void)onDownloadSuccess:(id)arg1 argsWrap:(id)arg2;
- (id)dicDownloadArgsWrap;
- (void)setDicDownloadArgsWrap:(id)arg1;
- (void).cxx_destruct;
@end
