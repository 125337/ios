@interface DeferredCancellation : NSObject
{
    scoped_refptr<net::HttpProtocolHandlerCore> _core; // +0x8
}
- (id)initWithCore:(scoped_refptr<net::HttpProtocolHandlerCore>)arg1;
- (void)cancel;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
