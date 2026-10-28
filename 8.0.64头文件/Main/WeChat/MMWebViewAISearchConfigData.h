@interface MMWebViewAISearchConfigData : NSObject <PBCoding>
{
    unsigned int _configType; // +0x8
    MMWebViewAISearchConfig * _aiSearchConfig; // +0x10
    MMWebViewAISearchHalfScreenConfig * _halfScreenConfig; // +0x18
    unsigned long long _expireTimeSec; // +0x20
    NSString * _sessionId; // +0x28
}
+ (void)PBArrayAdd_aiSearchConfig;
+ (void)PBArrayAdd_halfScreenConfig;
+ (void)PBArrayAdd_expireTimeSec;
+ (void)PBArrayAdd_configType;
+ (void)PBArrayAdd_sessionId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isCacheValid;
- (id)aiSearchConfig;
- (void)setAiSearchConfig:(id)arg1;
- (id)halfScreenConfig;
- (void)setHalfScreenConfig:(id)arg1;
- (unsigned long long)expireTimeSec;
- (void)setExpireTimeSec:(unsigned long long)arg1;
- (unsigned int)configType;
- (void)setConfigType:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
