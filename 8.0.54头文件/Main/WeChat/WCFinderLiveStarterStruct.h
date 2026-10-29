@interface WCFinderLiveStarterStruct : NSObject
{
    BOOL _isPrivateAccount; // +0x8
    NSString * _sessionId; // +0x10
    NSString * _finderUsername; // +0x18
    FinderWxAppInfo * _wxAppInfo; // +0x20
}
+ (id)checkToGetStruct;
+ (id)replaceCommaToSemicolon:(id)arg1;
- (id)toReport;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)wxAppInfo;
- (void)setWxAppInfo:(id)arg1;
- (BOOL)isPrivateAccount;
- (void)setIsPrivateAccount:(BOOL)arg1;
- (void).cxx_destruct;
@end

