@interface WCPayCgiHandler : NSObject
{
    id /* block */ _completionBlock; // +0x8
    WCPayBaseCgi * _cgi; // +0x10
}
- (void)dealloc;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (void).cxx_destruct;
@end
