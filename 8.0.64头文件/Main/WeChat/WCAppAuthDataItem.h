@interface WCAppAuthDataItem : MMObject <PBCoding>
{
    WCAppAuthAppMetaInfo * _appInfo; // +0x8
    WCAppAuthAuthInfo * _authInfo; // +0x10
    NSString * _tips; // +0x18
}
+ (void)PBArrayAdd_appInfo;
+ (void)PBArrayAdd_authInfo;
+ (void)PBArrayAdd_tips;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithAuthAppPBData:(id)arg1;
- (id)getScopes;
- (void)updateScope:(id)arg1 state:(unsigned int)arg2;
- (id)genAuthInfoDescription;
- (id)genAuthInfoScopeList;
- (BOOL)hasUnEditableScope;
- (id)appInfo;
- (void)setAppInfo:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (void).cxx_destruct;
@end
