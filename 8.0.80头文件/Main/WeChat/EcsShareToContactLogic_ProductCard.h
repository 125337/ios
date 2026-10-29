@interface EcsShareToContactLogic_ProductCard : EcsShareToContactLogic_Base
{
    EcsProductCardMessageModel * _model; // +0x8
    MmecBatchGetProductCardResp_Product * _productInfo; // +0x10
}
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (void)genMessage:(id /* block */)arg1;
- (id)checkCanShow;
- (void)onShareSuccess:(BOOL)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (void).cxx_destruct;
@end
