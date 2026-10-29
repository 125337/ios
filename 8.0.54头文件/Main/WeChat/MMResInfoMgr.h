@interface MMResInfoMgr : NSObject <MMResInfoMgr>
{
    NSString * _dbPath; // +0x8
    WCTDatabase * _db; // +0x10
    WCTTable * _tableResInfo; // +0x18
    WCTTable * _tableResDownloadInfo; // +0x20
}
- (id)initWithDBPath:(id)arg1;
- (void)openDB;
- (void)createTables;
- (void)closeDB;
- (void)didRecoverDatabase;
- (BOOL)insertNewResInfo:(id)arg1;
- (id)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (id)getTestResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (id)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (id)getResInfoWithLimit:(long long)arg1;
- (id)getResInfo:(unsigned int)arg1;
- (BOOL)deleteResInfo:(unsigned int)arg1;
- (BOOL)deleteResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2;
- (BOOL)deleteTestResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2;
- (BOOL)deleteResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (BOOL)updateResInfo:(id)arg1;
- (BOOL)insertNewResDownloadInfo:(id)arg1;
- (id)getResDownloadInfoLimit:(unsigned int)arg1;
- (id)getABTestResDownloadInfoLimit:(unsigned int)arg1;
- (id)getResDownloadInfo:(unsigned int)arg1;
- (id)getABTestResDownloadInfo:(unsigned int)arg1;
- (id)getResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (id)getResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (BOOL)updateResDownloadInfo:(id)arg1;
- (BOOL)deleteResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (BOOL)deleteTestResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (BOOL)deleteResDownloadInfo:(unsigned int)arg1;
- (BOOL)deleteResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (void)dealloc;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableResInfo;
- (void)setTableResInfo:(id)arg1;
- (id)tableResDownloadInfo;
- (void)setTableResDownloadInfo:(id)arg1;
- (void).cxx_destruct;
@end

