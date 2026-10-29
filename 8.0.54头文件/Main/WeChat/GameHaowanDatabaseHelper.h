@interface GameHaowanDatabaseHelper : MMObject
{
    WCTDatabase * _db; // +0x8
    WCTTable * _postInfoTable; // +0x10
    WCTTable * _mediaInfoTable; // +0x18
}
- (void)loadDatabase;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (BOOL)insertPostInfo:(id)arg1;
- (BOOL)insertMediaInfo:(id)arg1;
- (BOOL)updatePostInfo:(id)arg1;
- (BOOL)updatePostState:(id)arg1 toState:(int)arg2;
- (BOOL)updateUploadStateWithPostId:(id)arg1 toState:(int)arg2;
- (id)queryPostInfo:(id)arg1;
- (id)queryPostInfo:(id)arg1 containsMediaList:(BOOL)arg2;
- (BOOL)existPostInfo:(id)arg1;
- (id)queryAllPostInfo;
- (BOOL)deletePostInfo:(id)arg1;
- (id)queryMediaInfosWithPostId:(id)arg1;
- (id)queryMediaInfosWithPostId:(id)arg1 mediaType:(unsigned int)arg2;
- (BOOL)deleteMediaInfoWithPostId:(id)arg1;
- (BOOL)deleteAllPostInfos;
- (BOOL)deleteAllMediaInfos;
- (id)queryAllUncompletedPostInfos;
- (id)db;
- (id)postInfoTable;
- (id)mediaInfoTable;
- (void).cxx_destruct;
@end

