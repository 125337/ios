@interface _TtC6WeChat15WSFlowListLogic : NSObject
{
    void * listData; // +0x8
    void * lastBuffer; // +0x10
    BOOL isFetching; // +0x20
    BOOL topHasMore; // +0x21
    BOOL bottomHasMore; // +0x22
    void * enterExportId; // +0x28
    WCFinderFeedContentVM * enterFinderContentVM; // +0x38
     identifierSet; // +0x40
}
- (id)listData;
- (void)setListData:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)topHasMore;
- (void)setTopHasMore:(BOOL)arg1;
- (BOOL)bottomHasMore;
- (void)setBottomHasMore:(BOOL)arg1;
- (id)enterExportId;
- (void)setEnterExportId:(id)arg1;
- (id)enterFinderContentVM;
- (void)setEnterFinderContentVM:(id)arg1;
- (void)requestDataWithCurrentListData:(id)arg1 direction:(unsigned int)arg2 scene:(unsigned int)arg3 enterItemId:(id)arg4 extInfo:(id)arg5 completion:(id /* block */)arg6;
- (void)fetchEnterFinderItemIfNeededWithCompletion:(id /* block */)arg1;
- (BOOL)shouldUseEnterFinderItem;
- (void)getMockDataList;
- (id)init;
- (void).cxx_destruct;
@end
