@interface MMLanguageCache : NSObject <PBCoding>
{
    BOOL m_haveSave; // +0x8
    unsigned int m_currentCount; // +0xc
    NSRecursiveLock * m_dictLock; // +0x10
    unsigned int _appVersion; // +0x18
    NSString * _curSystemLanguage; // +0x20
    NSMutableDictionary * _cacheLanStringDict; // +0x28
    NSString * _appUUID; // +0x30
    NSDate * _updateModifeTime; // +0x38
}
+ (void)PBArrayAdd_curSystemLanguage;
+ (void)PBArrayAdd_cacheLanStringDict;
+ (void)PBArrayAdd_appUUID;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_updateModifeTime;
+ (void)initialize;
+ (id)getLanguageCache;
- (id)getPBPropertyTable;
- (id)init;
- (void)resetCurLan:(id)arg1 withUpdateBundlePath:(id)arg2;
- (void)resetString:(id)arg1 for:(id)arg2;
- (id)getStringForStringID:(id)arg1;
- (void)save;
- (id)curSystemLanguage;
- (void)setCurSystemLanguage:(id)arg1;
- (id)cacheLanStringDict;
- (void)setCacheLanStringDict:(id)arg1;
- (id)appUUID;
- (void)setAppUUID:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)updateModifeTime;
- (void)setUpdateModifeTime:(id)arg1;
- (void).cxx_destruct;
@end

