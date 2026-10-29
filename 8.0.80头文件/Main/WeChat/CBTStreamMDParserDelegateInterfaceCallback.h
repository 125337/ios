@interface CBTStreamMDParserDelegateInterfaceCallback : NSObject
{
    CBTStreamMDParserDelegateInterfaceDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CBTStreamMDParserDelegateInterfaceDispatcherBridgeObjcImpl *)arg1;
- (void)onOnGeneratedContentComplete:(unsigned long long)arg1;
- (void)onOnGeneratedFootnoteDefComplete:(unsigned long long)arg1;
- (void)onOnParseCompletedComplete:(unsigned long long)arg1;
@end
