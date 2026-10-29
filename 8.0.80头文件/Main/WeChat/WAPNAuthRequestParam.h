@interface WAPNAuthRequestParam : NSObject
{
    BOOL _isRealtime; // +0x8
    BOOL _showNoQuotaToast; // +0x9
    BOOL _agentMode; // +0xa
    BOOL _fromAgentRuntime; // +0xb
    NSString * _appid; // +0x10
    NSString * _pagePath; // +0x18
}
+ (id)paramFromExtraData:(id)arg1 appid:(id)arg2 pagePath:(id)arg3;
- (id)appid;
- (void)setAppid:(id)arg1;
- (BOOL)isRealtime;
- (void)setIsRealtime:(BOOL)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (BOOL)showNoQuotaToast;
- (void)setShowNoQuotaToast:(BOOL)arg1;
- (BOOL)agentMode;
- (void)setAgentMode:(BOOL)arg1;
- (BOOL)fromAgentRuntime;
- (void)setFromAgentRuntime:(BOOL)arg1;
- (void).cxx_destruct;
@end
