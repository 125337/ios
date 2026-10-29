@interface EcsShareToContactLogic_OrderCard : EcsShareToContactLogic_Base
{
    EcsOrderCardMessageModel * _model; // +0x8
    NSString * _failText; // +0x10
}
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (id)checkCanShow;
- (void)share;
- (void)genMessage:(id /* block */)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)failText;
- (void)setFailText:(id)arg1;
- (void).cxx_destruct;
@end
