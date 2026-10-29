@interface WCSessionFlowConfigModel : MMObject <PBCoding>
{
    NSMutableArray * _sessionsArray; // +0x8
    NSMutableDictionary * _sessionsDicForPageName; // +0x10
    NSMutableDictionary * _sessionsDicForSid; // +0x18
    NSString * _originalJson; // +0x20
    NSMutableArray * _blackListPages; // +0x28
    NSMutableArray * _mainTabPages; // +0x30
    NSMutableArray * _filterPages; // +0x38
}
+ (void)PBArrayAdd_sessionsArray;
+ (void)PBArrayAdd_blackListPages;
+ (void)PBArrayAdd_mainTabPages;
+ (void)PBArrayAdd_filterPages;
+ (void)PBArrayAdd_originalJson;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)initCacheDictionary;
- (id)toString;
- (id)sessionsArray;
- (void)setSessionsArray:(id)arg1;
- (id)sessionsDicForPageName;
- (void)setSessionsDicForPageName:(id)arg1;
- (id)sessionsDicForSid;
- (void)setSessionsDicForSid:(id)arg1;
- (id)originalJson;
- (void)setOriginalJson:(id)arg1;
- (id)blackListPages;
- (void)setBlackListPages:(id)arg1;
- (id)mainTabPages;
- (void)setMainTabPages:(id)arg1;
- (id)filterPages;
- (void)setFilterPages:(id)arg1;
- (void).cxx_destruct;
@end

