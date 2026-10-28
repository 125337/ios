@interface WCFinderContinueCollectionVM : NSObject
{
    int _scene; // +0x8
    WCFinderListLoadingStateModel * _loadingState; // +0x10
    NSString * _descTitle; // +0x18
    NSMutableSet * _svrMentionIDSet; // +0x20
    NSData * _lastBuffer; // +0x28
    UITableViewDiffableDataSource * _dataSource; // +0x30
    NSMutableArray * _colletionModelArr; // +0x38
    NSDiffableDataSourceSnapshot * _currentSnapshot; // +0x40
}
- (id)initWithScene:(int)arg1;
- (BOOL)dataEmpty;
- (void)reFetchPageData:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (void)fetchMoreData:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (void)clearData;
- (void)_fetchDataWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (void)appendCollectionList:(id)arg1;
- (id)dataSnapshot;
- (id)cellVMIndexPath:(id)arg1;
- (void)deleteCollectionWithIndexPath:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)descTitle;
- (void)setDescTitle:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)svrMentionIDSet;
- (void)setSvrMentionIDSet:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)colletionModelArr;
- (void)setColletionModelArr:(id)arg1;
- (id)currentSnapshot;
- (void)setCurrentSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
