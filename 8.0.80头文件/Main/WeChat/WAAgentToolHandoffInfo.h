@interface WAAgentToolHandoffInfo : NSObject
{
    NSString * _handoffId; // +0x8
    NSString * _appId; // +0x10
    NSString * _envVersion; // +0x18
    NSString * _handoff; // +0x20
    NSString * _pagePath; // +0x28
}
+ (id)infoFromDictionary:(id)arg1;
- (id)toDictionary;
- (id)handoffId;
- (void)setHandoffId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)envVersion;
- (void)setEnvVersion:(id)arg1;
- (id)handoff;
- (void)setHandoff:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (void).cxx_destruct;
@end
