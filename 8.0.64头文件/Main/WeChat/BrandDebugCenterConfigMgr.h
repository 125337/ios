@interface BrandDebugCenterConfigMgr : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _mappedKV; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)loadDefaultConfig;
- (BOOL)isDebugVCMainFramePinned:(id)arg1;
- (id)getMainFramePinDebugVC;
- (id)getMainFramePinDebugVCTitle;
- (void)setMainFramePinDebugVC:(id)arg1 title:(id)arg2;
- (void)cancelMainFramePinVC;
- (void)reloadBanner;
- (BOOL)getBoolForConfigType:(unsigned int)arg1;
- (void)setBool:(BOOL)arg1 forConfigType:(unsigned int)arg2;
- (void)setBoolIfUserNotSet:(BOOL)arg1 forConfigType:(unsigned int)arg2;
- (unsigned int)getUIntForConfigType:(unsigned int)arg1;
- (void)setUInt:(unsigned int)arg1 forConfigType:(unsigned int)arg2;
- (void)setUIntIfUserNotSet:(unsigned int)arg1 forConfigType:(unsigned int)arg2;
- (id)mappedKV;
- (void)createTmplAdMsg;
- (id)getTmplAdMsgs;
- (void)createTmplRecommendMsg;
- (id)getTmplRecommendMsgs;
- (void)showInputViewWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)setMappedKV:(id)arg1;
- (void).cxx_destruct;
@end
