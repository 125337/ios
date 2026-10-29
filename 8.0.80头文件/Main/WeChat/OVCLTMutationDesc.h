@interface OVCLTMutationDesc : NSObject
{
    OVCLTMutationKind * _mutationKind; // +0x8
    OVCLTLayerSpecifier * _ltLayerSpecifier; // +0x10
    NSDictionary * _mutationOptions; // +0x18
}
- (id)initWithMutationKind:(id)arg1 ltLayerSpecifier:(id)arg2 mutationOptions:(id)arg3;
- (id)mutationKind;
- (id)ltLayerSpecifier;
- (id)mutationOptions;
- (void).cxx_destruct;
@end
