@interface WCCommentWCDB : NSObject
{
    WCTTable * _postingCommentTable; // +0x8
    WCTDatabase * _dataBase; // +0x10
    NSString * _dbPath; // +0x18
}
- (id)init;
- (id)initWithDbPath:(id)arg1;
- (BOOL)setupDatabase;
- (void)dealloc;
- (void)createTable;
- (BOOL)createPostingCommentTable;
- (id)createTableWithTableName:(id)arg1 objectClass:(Class)arg2;
- (BOOL)addPostingComment:(id)arg1;
- (BOOL)deletePostingComment:(id)arg1;
- (BOOL)deleteAllPostingSubCommentWithComment:(id)arg1;
- (BOOL)postingCommentSuccessful:(id)arg1;
- (BOOL)markPostingCommentFail:(id)arg1;
- (id)getPostingFailComment;
- (BOOL)hasPostingFailComment;
- (BOOL)markObjectFailCommentsReadWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)markObjectFailSubCommentsReadWithTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (BOOL)deleteObjectFailCommentWithTid:(id)arg1;
- (id)getPostingRootCommentsWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (id)getPostingSubCommentsWithTid:(id)arg1;
- (unsigned long long)getPostingCommentsCountOfTid:(id)arg1;
- (unsigned long long)getPostingCommentsTidCount;
- (id)getPostingCommentFailMergeOfTid;
- (id)getPostingFailCommentWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)refreshPostingCommentWithTid:(id)arg1 byFetchComments:(id)arg2;
- (id)postingCommentTable;
- (void)setPostingCommentTable:(id)arg1;
- (id)dataBase;
- (void)setDataBase:(id)arg1;
- (id)dbPath;
- (void)setDbPath:(id)arg1;
- (void).cxx_destruct;
@end
