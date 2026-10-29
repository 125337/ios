@interface MMMusicPlayerResourceMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>
{
    NSString * _resMainDir; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)translucentIconForAppId:(id)arg1 size:(CGSize)arg2;
- (id)translucentIconPathForAppId:(id)arg1;
- (BOOL)dirIsEmpty:(id)arg1;
- (id)resMainDir;
- (id)nameForSubType:(unsigned long long)arg1;
- (id)pathForSubType:(unsigned long long)arg1;
- (BOOL)unzipRes:(unsigned long long)arg1 from:(id)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)setResMainDir:(id)arg1;
- (void).cxx_destruct;
@end
