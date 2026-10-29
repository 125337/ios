@interface WxpayRawSceneDefinition : NSObject <WxpaySceneDefinition>
{
    WxpayPaySceneDescriptor * _descriptor; // +0x8
}
+ (id)sharedDefinition;
- (id)init;
- (id)descriptor;
- (id)resolveWithParams:(id)arg1;
- (void).cxx_destruct;
@end
