@interface _TtC7WeMagic21MBBaseJsAdapterBridge : NSObject <IMBJsAdaptor>
{
     next; // +0x8
     untypedContext; // +0x10
}
- (void)attachTo:(id)arg1;
- (BOOL)invokeWithApiName:(id)arg1 apiData:(id)arg2 callbackId:(unsigned long long)arg3;
- (id)jsApiNameSet;
- (void)setNextJsAdaptor:(id)arg1;
- (id)nextJsAdaptor;
- (id)init;
- (void).cxx_destruct;
@end
