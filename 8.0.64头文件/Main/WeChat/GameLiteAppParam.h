@interface GameLiteAppParam : NSObject
{
    BOOL _transParentLiteApp; // +0x8
    NSString * _appId; // +0x10
    NSString * _path; // +0x18
    NSString * _queryStr; // +0x20
    NSString * _pkgId; // +0x28
}
+ (id)liteAppParamFromDict:(id)arg1;
+ (id)liteAppParaWithAppid:(id)arg1 path:(id)arg2 queryStr:(id)arg3 pkgId:(id)arg4;
- (id)description;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)queryStr;
- (void)setQueryStr:(id)arg1;
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (BOOL)transParentLiteApp;
- (void)setTransParentLiteApp:(BOOL)arg1;
- (void).cxx_destruct;
@end
