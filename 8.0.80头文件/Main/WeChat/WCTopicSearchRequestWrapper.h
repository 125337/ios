@interface WCTopicSearchRequestWrapper : NSObject
{
    BOOL _isEmoticonRequest; // +0x8
    id /* block */ _resultBlock; // +0x10
    id /* block */ _emoticonResultBlock; // +0x18
    NSDictionary * _requestParams; // +0x20
    GetSearchShareResponse * _shareResponse; // +0x28
}
- (BOOL)isValidWrapper;
- (void)callResultBlockOnFailed;
- (void)callResultBlockOnFailedWithContext:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (id /* block */)emoticonResultBlock;
- (void)setEmoticonResultBlock:(id /* block */)arg1;
- (BOOL)isEmoticonRequest;
- (void)setIsEmoticonRequest:(BOOL)arg1;
- (id)requestParams;
- (void)setRequestParams:(id)arg1;
- (id)shareResponse;
- (void)setShareResponse:(id)arg1;
- (void).cxx_destruct;
@end
