@interface GCRequestModel : NSObject
{
    NSURLRequest * _request; // +0x8
    NSDate * _requestDate; // +0x10
    NSMutableData * _data; // +0x18
    NSURLResponse * _response; // +0x20
    NSString * _webviewKey; // +0x28
}
- (id)init;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)requestDate;
- (void)setRequestDate:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)webviewKey;
- (void)setWebviewKey:(id)arg1;
- (void).cxx_destruct;
@end
