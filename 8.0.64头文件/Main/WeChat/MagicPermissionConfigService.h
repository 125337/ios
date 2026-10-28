@interface MagicPermissionConfigService : MMUserService <MMServiceProtocol>
{
    _TtC6WeChat31MagicPermissionConfigPkgManager * _pkgMgr; // +0x8
    NSMutableDictionary * _dicBizName2Config; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)getBizConfig:(id)arg1;
- (id)getPermissionBlackList:(id)arg1 moduleType:(id)arg2;
- (id)getBizConfig:(id)arg1 moduleType:(id)arg2 configName:(id)arg3;
- (id)pkgMgr;
- (void)setPkgMgr:(id)arg1;
- (id)dicBizName2Config;
- (void)setDicBizName2Config:(id)arg1;
- (void).cxx_destruct;
@end
