@interface XNetInferenceModelDescription : NSObject
{
    ModelDesc _underlying; // +0x8
}
- (id)initWithUnderlying:(const void *)arg1;
- (const void *)underlying;
- (id)initWithInputs:(id)arg1 outputs:(id)arg2;
- (id)inputs;
- (id)outputs;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

