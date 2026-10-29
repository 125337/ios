@interface EcsShareToContactLogic_ShopWindow : EcsShareToContactLogic_Base
{
    Model * model; // +0x8
}
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (void)genMessage:(id /* block */)arg1;
- (id)checkCanShow;
- (void)onShareSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
