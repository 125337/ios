@interface MMCompatibleCGIDB : MMObject
{
    WCTDatabase * m_compatibleCGIDB; // +0x8
    WCTTable * _m_tableCompatibleCGI; // +0x10
}
- (void)CreateTables;
- (void)ReloadDatabase;
- (id)CreateTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)GetCompatibleCGIDBRootDir;
- (id)GetCompatibleCGIDBPath;
- (id)GetCompatibleCGIDataById:(id)arg1;
- (BOOL)DeleteCompatibleCGIDataById:(id)arg1;
- (BOOL)insertOrReplaceCompatibleCGIData:(id)arg1;
- (id)m_tableCompatibleCGI;
- (void)setM_tableCompatibleCGI:(id)arg1;
- (void).cxx_destruct;
@end

