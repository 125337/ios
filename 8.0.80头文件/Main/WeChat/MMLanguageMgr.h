@interface MMLanguageMgr : MMRootService <WCLazyInitObjectProtocol, MMServiceProtocol>
{
    NSString * m_nsCurSystemLanguage; // +0x8
    NSString * m_curLanguage; // +0x10
    NSBundle * m_curBundle; // +0x18
    NSBundle * m_updateBundle; // +0x20
    NSBundle * m_backupBundle; // +0x28
    NSBundle * m_updateBackupBundle; // +0x30
    MMLanguageCache * m_lanCache; // +0x38
    BOOL m_lanCacheIsSaved; // +0x40
    BOOL m_firstInitLanguage; // +0x41
    BOOL m_isExtraLanguageEnable; // +0x42
    BOOL haveLazyInit; // +0x43
    BOOL _downloadPackageRightNow; // +0x44
    NSCache * _valueToIdCache; // +0x48
}
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (void)cacheInNSCacheStringValue:(id)arg1 withKey:(id)arg2;
- (id)getStringKeyInNSCacheByValue:(id)arg1;
- (id)getStringForCurLanguage:(id)arg1;
- (id)getStringFromDynamicConfig:(id)arg1;
- (id)keyMapping:(id)arg1;
- (void)registerExtraLanguageExptExtension;
- (void)refreshExtraLanguageExptFromService;
- (void)onExptItemListChange;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)goToLazyInitObject;
- (id)getLangPackageRootPath;
- (id)getLangPackagePathForLang:(id)arg1;
- (id)getLangPackageFileForLang:(id)arg1;
- (id)getLanguagePath;
- (id)internalGetCurLanguage;
- (void)internalChangeCurLanguage;
- (void)internalSetCurLanguage:(id)arg1;
- (id)trimForiOS9Plus:(id)arg1;
- (id)getCurSystemLanguage;
- (id)getRealCurSystemLanguage;
- (id)isSupportedLanguage:(id)arg1;
- (id)getSupportedLanguageKeys;
- (id)getBackUpLanguage;
- (BOOL)isExtraLanguage:(id)arg1;
- (BOOL)isExtraLanguageExperimentEnabled;
- (void)loadExtraLanguageExptFromMMKV;
- (void)updateExtraLanguageExptEnable:(BOOL)arg1;
- (void)saveLastNonExtraLanguage:(id)arg1;
- (id)loadLastNonExtraLanguage;
- (id)fallbackLanguageIfNeededForLang:(id)arg1;
- (void)initBackUpLanguage:(id)arg1;
- (BOOL)isLanaguageValid;
- (void)initCache;
- (id)getCacheString:(id)arg1;
- (void)resetString:(id)arg1 for:(id)arg2;
- (void)initLanguage;
- (id)correctMainBundle;
- (id)init;
- (id)getCurBundle;
- (id)getCurLanguage;
- (id)getCurLanguageDisplayName;
- (id)getSupportedLanguages;
- (id)getSupportedLanguageDisplayNames;
- (id)getStringForCurLanguageWithBackupBundle:(id)arg1 table:(id)arg2;
- (id)p_getStringForCurLanguage:(id)arg1;
- (id)getStringForLanguage:(id)arg1 withID:(id)arg2;
- (BOOL)curLanguageIsEnglish;
- (BOOL)curLanguageIsChinese;
- (BOOL)curLanguageIsChineseTraditional;
- (void)setCurLanguage:(id)arg1 forRefresh:(BOOL)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(BOOL)arg4;
- (void)setCurLanguage:(id)arg1 shouldChangeMainFrame:(BOOL)arg2;
- (void)refreshNewVersionForCurLanguage:(id)arg1 fromViewScene:(unsigned int)arg2;
- (void)ClearOlderVersionData;
- (BOOL)isVersionString:(id)arg1 olderThanMajor:(unsigned int *)arg2 minor:(unsigned int *)arg3 minorex:(unsigned int *)arg4;
- (BOOL)isTranslateLanguageFollowSystemLanguage;
- (id)currentTranslateLanguage;
- (id)currentTranslateLanguageDisplayName;
- (id)getSupportedTranslateLanguages;
- (id)getSupportedTranslateLanguageDisplayNames;
- (void)setTranslateLanguage:(id)arg1 followSystemLanguage:(BOOL)arg2;
- (BOOL)haveLazyInit;
- (void)setHaveLazyInit:(BOOL)arg1;
- (BOOL)downloadPackageRightNow;
- (void)setDownloadPackageRightNow:(BOOL)arg1;
- (id)valueToIdCache;
- (void)setValueToIdCache:(id)arg1;
- (void).cxx_destruct;
@end
