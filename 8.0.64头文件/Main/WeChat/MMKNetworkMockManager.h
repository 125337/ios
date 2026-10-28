@interface MMKNetworkMockManager : NSObject
{
    Handle<std::shared_ptr<kinda::KNetworkMockManager>> _cppRefHandle; // +0x8
}
+ (id)getCgiList;
- (id)initWithCpp:(const void *)arg1;
- (id)requestDataToJson:(id)arg1;
- (id)responseDataToJson:(id)arg1;
- (id)jsonToResponseData:(id)arg1;
- (id)jsonToRequestData:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
