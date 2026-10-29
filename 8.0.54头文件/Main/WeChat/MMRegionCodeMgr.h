@interface MMRegionCodeMgr : MMRootService <MMServiceProtocol, IMMRegionPackageDownloadMgrExt, IMMLanguageMgrExt>
{
    SafeDictionaryWrap * m_regionDict; // +0x8
    NSMutableArray * m_pickedRegionAry; // +0x10
}
+ (id)encodeCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
+ (int)numberOfOccurrencesOfString:(id)arg1 inString:(id)arg2;
- (id)init;
- (void)setRegionDictForCurLang;
- (id)getDisplayRegionWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (id)getValueForKey:(id)arg1;
- (id)getRegionForCode:(id)arg1;
- (id)getRegionCodeFromString:(id)arg1 type:(int)arg2;
- (id)getCountries;
- (id)getChildrenOfCode:(id)arg1;
- (id)getRegionCodeLangForCurLang:(id)arg1;
- (void)splitRegionCodeFile:(id)arg1 Lang:(id)arg2;
- (void)trySplitRegionCodeFile:(id)arg1 Lang:(id)arg2 force:(BOOL)arg3;
- (id)readRegionCodeFileForLang:(id)arg1;
- (void)onRegionPackageUpdated;
- (void)onLanguageChange;
- (void)pushData:(id)arg1;
- (void)popupData;
- (id)getPickedResult;
- (void)removePickedResult;
- (BOOL)isZhCN:(id)arg1;
- (BOOL)isCountryTW:(id)arg1;
- (BOOL)isCountryHK:(id)arg1;
- (BOOL)isCountryMO:(id)arg1;
- (BOOL)isProvinceTW:(id)arg1;
- (BOOL)isProvinceHK:(id)arg1;
- (BOOL)isProvinceMO:(id)arg1;
- (void).cxx_destruct;
@end

