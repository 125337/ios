@interface WCFinderLiveAIGCGiftOperationCgi : WCFinderLiveBaseCgi
{
    NSData * _liveCookies; // +0x8
    NSString * _giftProductId; // +0x10
    NSString * _aigcTaskId; // +0x18
    NSString * _imageUrl; // +0x20
    NSString * _md5; // +0x28
    unsigned long long _opType; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failBlock; // +0x40
}
- (id)initWithTaskId:(id)arg1 liveCookies:(id)arg2 giftProductId:(id)arg3 aigcTaskId:(id)arg4 imageUrl:(id)arg5 md5:(id)arg6 opType:(unsigned long long)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)giftProductId;
- (void)setGiftProductId:(id)arg1;
- (id)aigcTaskId;
- (void)setAigcTaskId:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned long long)opType;
- (void)setOpType:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
