@interface LocalNetworkCallbackWrapper : NSObject
{
    id /* block */ _callback; // +0x8
}
+ (id)wrapperWithCallback:(id /* block */)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
