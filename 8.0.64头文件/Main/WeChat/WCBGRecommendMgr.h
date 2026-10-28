@interface WCBGRecommendMgr : MMObject <MMPackageDownloadMgrExt>
{
    id <WCBGRecommendMgrDelegate> m_delegate; // +0x8
}
- (id)init;
- (id)currentLanguage;
- (BOOL)validateBGStorage:(id)arg1;
- (id)getBGStorage;
- (void)updateBGStorage;
- (void)didUpdateBGStorage;
- (unsigned long long)cleanCache;
- (id)SnsCGI_getBGStorage;
- (void)SnsCGI_updateBGStorage;
- (void)SnsCGI_didUpdateBGStorage:(id)arg1 forLanguage:(id)arg2;
- (void)SnsCGI_didFailToUpdateBGStorageWithErrorLog:(id)arg1;
- (id)loadBGStorageForLanguage:(id)arg1;
- (BOOL)saveBGStorage:(id)arg1 forLanguage:(id)arg2;
- (void)MMResource_init;
- (long long)MMResource_packageKey;
- (id)MMResource_getBGStorage;
- (id)MMResource_getPackageDataOfBGStorage;
- (void)MMResource_updateBGStorage;
- (void)onPackageListUpdated:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
