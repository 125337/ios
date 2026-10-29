@interface WCFileIndexInfoDB : NSObject
{
    WCTDatabase * _infoDB; // +0x8
}
+ (BOOL)whetherInfoDBExist;
- (id)init;
- (void)dealloc;
- (id)p_getFileIndexInfoTable;
- (void)p_createDataBase;
- (void)p_closeDB;
- (void)willRecoverDatabase;
- (BOOL)insertFileIndex:(id)arg1;
- (BOOL)insertFileIndexList:(id)arg1;
- (id)getFileIndexesWithMD5:(id)arg1;
- (id)getFileIndexesWithInode:(unsigned long long)arg1;
- (id)getFileIndexesWithFileSize:(unsigned long long)arg1;
- (id)getAllFileIndexes;
- (id)getFileIndexesWithUserName:(id)arg1 ofMsgId:(unsigned int)arg2;
- (id)getFileIndexesWithUserName:(id)arg1;
- (BOOL)removeFileIndexesWithUserName:(id)arg1 ofMsgId:(unsigned int)arg2;
- (BOOL)removeFileIndexesWithUserName:(id)arg1;
- (long long)removeFileIndexList:(id)arg1;
- (id)infoDB;
- (void)setInfoDB:(id)arg1;
- (void).cxx_destruct;
@end
