@interface WCStoryPostDeleteCgiObj : WCStoryBaseCGIObj
{
    WCStoryDataItem * _dataItem; // +0x8
    id /* block */ _deletePostBlock; // +0x10
    id /* block */ _dbSyncBlock; // +0x18
}
- (id)initWithDataItem:(id)arg1;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id /* block */)deletePostBlock;
- (void)setDeletePostBlock:(id /* block */)arg1;
- (id /* block */)dbSyncBlock;
- (void)setDbSyncBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

