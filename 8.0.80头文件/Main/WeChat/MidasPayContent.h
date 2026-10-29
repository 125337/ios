@interface MidasPayContent : NSObject <_TtP11MidasPayKit20MidasPurchaseContent_>
{
     urlParams; // +0x8
     channel; // +0x18
     targetWindow; // +0x20
}
- (id)urlParams;
- (long long)channel;
- (id)targetWindow;
- (void)setTargetWindow:(id)arg1;
- (BOOL)validate;
- (id)initWithUrlParams:(id)arg1 channel:(long long)arg2;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
