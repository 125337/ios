@interface UDRResourceDBMgr : NSObject
{
    WCTDatabase * _db; // +0x8
    WCTTable * _resourceTable; // +0x10
}
+ (id)UDRResourceDBPath;
- (id)init;
- (void)initDB;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)insertResourceInfo:(id)arg1;
- (id)getAllResource;
- (id)getResourceList:(id)arg1;
- (id)getResourceInfo:(id)arg1;
- (void)removeResourceInfo:(id)arg1;
- (void)dealloc;
- (id)db;
- (void)setDb:(id)arg1;
- (id)resourceTable;
- (void)setResourceTable:(id)arg1;
- (void).cxx_destruct;
@end
