@interface SearchCgiInfoObject : NSObject
{
    id /* block */ _completion; // +0x8
    NSString * _query; // +0x10
    NSDate * _createDate; // +0x18
    NSString * _requestId; // +0x20
}
- (id)initWithCompletion:(id /* block */)arg1 query:(id)arg2;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)createDate;
- (void)setCreateDate:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (void).cxx_destruct;
@end

