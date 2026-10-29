@interface BrandFansBlackListViewModel : NSObject
{
    BOOL _hasMore; // +0x8
    int _bizType; // +0xc
    NSString * _bizuin; // +0x10
    NSString * _buffer; // +0x18
}
- (id)initWithBizuin:(id)arg1 bizType:(int)arg2;
- (void)loadDataWithCompletion:(id /* block */)arg1;
- (void)loadMoreWithCompletion:(id /* block */)arg1;
- (id)handleBlackListResponse:(id)arg1;
- (void)getBlackListWithBuffer:(id)arg1 completion:(id /* block */)arg2;
- (void)unblockUser:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (void).cxx_destruct;
@end
