@interface CRWHTTPStreamDelegate : NSObject <NSStreamDelegate>
{
    void * _core; // +0x8
}
- (id)initWithHttpProtocolHandlerCore:(void *)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
@end
