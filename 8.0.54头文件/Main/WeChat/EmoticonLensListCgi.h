@interface EmoticonLensListCgi : StoreEmotionBaseCgi
{
    NSString * _username; // +0x8
    unsigned long long _enterTime; // +0x10
    id <EmoticonLensListCgiDelegate> _delegate; // +0x18
    NSData * _pageBuff; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequestFirstPage;
- (void)startRequestNextPage;
- (BOOL)hasNextPage;
- (void)startRequestWithPageBuffer:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageBuff;
- (void)setPageBuff:(id)arg1;
- (void).cxx_destruct;
@end

