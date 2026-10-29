@interface MMWebViewSpaAuthContext : NSObject
{
    NSString * _callBackId; // +0x8
    NSString * _reqUrl; // +0x10
    id /* block */ _authBlock; // +0x18
}
- (void)dealloc;
- (id)callBackId;
- (void)setCallBackId:(id)arg1;
- (id)reqUrl;
- (void)setReqUrl:(id)arg1;
- (id /* block */)authBlock;
- (void)setAuthBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
