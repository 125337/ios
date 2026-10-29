@interface WCPayTransferMoneyData : NSObject
{
    unsigned int _desc_has_address; // +0x8
    NSString * _receiverMaskTrueName; // +0x10
    NSString * _truenameExtend; // +0x18
    WCPayAddressInfo * _m_addressInfo; // +0x20
    NSString * _m_addressRemark; // +0x28
    NSString * _m_placeorderReserves; // +0x30
}
- (id)receiverMaskTrueName;
- (void)setReceiverMaskTrueName:(id)arg1;
- (id)truenameExtend;
- (void)setTruenameExtend:(id)arg1;
- (id)m_addressInfo;
- (void)setM_addressInfo:(id)arg1;
- (id)m_addressRemark;
- (void)setM_addressRemark:(id)arg1;
- (id)m_placeorderReserves;
- (void)setM_placeorderReserves:(id)arg1;
- (unsigned int)desc_has_address;
- (void)setDesc_has_address:(unsigned int)arg1;
- (void).cxx_destruct;
@end
