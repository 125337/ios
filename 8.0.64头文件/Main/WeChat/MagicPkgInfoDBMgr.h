@interface MagicPkgInfoDBMgr : NSObject
{
    WCTDatabase * _db; // +0x8
    WCTTable * _pkgInfoTable; // +0x10
}
+ (id)MagicPkgInfoDBPath;
- (id)init;
- (void)initDB;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)insertPkgUpdateInfo:(id)arg1;
- (id)getMagicPkgList;
- (id)getPkgUpdateInfo:(id)arg1;
- (void)removePkgInfo:(id)arg1;
- (void)dealloc;
- (id)db;
- (void)setDb:(id)arg1;
- (id)pkgInfoTable;
- (void)setPkgInfoTable:(id)arg1;
- (void).cxx_destruct;
@end
