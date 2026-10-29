@interface MMMusicPlayerResourceMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>
{
    BOOL _hasLoadVideoResourcePath; // +0x8
    unsigned int _kVideoResrouceCount; // +0xc
    NSString * _resMainDir; // +0x10
    NSMutableDictionary * _dicVideoResourcePath; // +0x18
    MVVideoTransitionResourceConfig * _curConfig; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getVideoResourcePathWithIndex:(unsigned long long)arg1;
- (id)translucentIconForAppId:(id)arg1 size:(CGSize)arg2;
- (id)translucentIconPathForAppId:(id)arg1;
- (id)availableMVTransitionModelArrForPanel;
- (id)getMVTransitionPathById:(id)arg1;
- (BOOL)dirIsEmpty:(id)arg1;
- (id)resMainDir;
- (id)nameForSubType:(unsigned long long)arg1;
- (id)pathForSubType:(unsigned long long)arg1;
- (void)loadVideoResourcePath;
- (void)addVideoResourcePath:(id)arg1 withSubType:(unsigned int)arg2;
- (void)deleteVideoResourcePathWithSubType:(unsigned int)arg1;
- (id)getVideoResourcePathWithSubType:(unsigned int)arg1;
- (id)genMVTransitionModelArr;
- (id)curConfig;
- (BOOL)unzipRes:(unsigned long long)arg1 from:(id)arg2;
- (id)genNameWithCurLanguage:(id)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)setResMainDir:(id)arg1;
- (id)dicVideoResourcePath;
- (void)setDicVideoResourcePath:(id)arg1;
- (BOOL)hasLoadVideoResourcePath;
- (void)setHasLoadVideoResourcePath:(BOOL)arg1;
- (unsigned int)kVideoResrouceCount;
- (void)setKVideoResrouceCount:(unsigned int)arg1;
- (void)setCurConfig:(id)arg1;
- (void).cxx_destruct;
@end

