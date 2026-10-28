@interface WCPayTransferPrepayRequestStruct : NSObject
{
    NSString * m_nsReceiverUserName; // +0x8
    unsigned long long m_uiTotalFee; // +0x10
    unsigned int m_uiFeeType; // +0x18
    NSString * m_nsExtInfo; // +0x20
    unsigned int m_uiPayScene; // +0x28
    int m_transferScene; // +0x2c
    NSString * m_nsProducetDesc; // +0x30
    NSString * m_nsFacingPaidID; // +0x38
    unsigned int m_uiPayChannel; // +0x40
    unsigned int _dynamic_code_source; // +0x44
    unsigned int _cancelReason; // +0x48
    unsigned int _unpayType; // +0x4c
    unsigned int _desc_has_address; // +0x50
    unsigned int _groupType; // +0x54
    NSString * _m_nsF2FPayerDesc; // +0x58
    NSString * _maskTrueName; // +0x60
    NSString * _receiver_openid; // +0x68
    NSString * _dynamic_code_url; // +0x70
    NSString * _mch_name; // +0x78
    NSString * _nickname; // +0x80
    NSString * _receiver_true_name; // +0x88
    NSString * _cancelOutTradeNo; // +0x90
    NSString * _truenameExtend; // +0x98
    NSString * _inputName; // +0xa0
    NSString * _checkNameSign; // +0xa8
    NSString * _placeorderReserves; // +0xb0
    NSString * _address_name; // +0xb8
    NSString * _phone_num; // +0xc0
    NSString * _address; // +0xc8
    NSString * _groupUsername; // +0xd0
    NSString * _placeorderAttach; // +0xd8
}
- (id)m_nsReceiverUserName;
- (void)setM_nsReceiverUserName:(id)arg1;
- (unsigned int)m_uiFeeType;
- (void)setM_uiFeeType:(unsigned int)arg1;
- (unsigned long long)m_uiTotalFee;
- (void)setM_uiTotalFee:(unsigned long long)arg1;
- (id)m_nsExtInfo;
- (void)setM_nsExtInfo:(id)arg1;
- (unsigned int)m_uiPayScene;
- (void)setM_uiPayScene:(unsigned int)arg1;
- (id)m_nsProducetDesc;
- (void)setM_nsProducetDesc:(id)arg1;
- (id)m_nsFacingPaidID;
- (void)setM_nsFacingPaidID:(id)arg1;
- (int)m_transferScene;
- (void)setM_transferScene:(int)arg1;
- (unsigned int)m_uiPayChannel;
- (void)setM_uiPayChannel:(unsigned int)arg1;
- (id)m_nsF2FPayerDesc;
- (void)setM_nsF2FPayerDesc:(id)arg1;
- (id)maskTrueName;
- (void)setMaskTrueName:(id)arg1;
- (id)receiver_openid;
- (void)setReceiver_openid:(id)arg1;
- (id)dynamic_code_url;
- (void)setDynamic_code_url:(id)arg1;
- (id)mch_name;
- (void)setMch_name:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)receiver_true_name;
- (void)setReceiver_true_name:(id)arg1;
- (unsigned int)dynamic_code_source;
- (void)setDynamic_code_source:(unsigned int)arg1;
- (id)cancelOutTradeNo;
- (void)setCancelOutTradeNo:(id)arg1;
- (unsigned int)cancelReason;
- (void)setCancelReason:(unsigned int)arg1;
- (unsigned int)unpayType;
- (void)setUnpayType:(unsigned int)arg1;
- (id)truenameExtend;
- (void)setTruenameExtend:(id)arg1;
- (id)inputName;
- (void)setInputName:(id)arg1;
- (id)checkNameSign;
- (void)setCheckNameSign:(id)arg1;
- (id)placeorderReserves;
- (void)setPlaceorderReserves:(id)arg1;
- (id)address_name;
- (void)setAddress_name:(id)arg1;
- (id)phone_num;
- (void)setPhone_num:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)groupUsername;
- (void)setGroupUsername:(id)arg1;
- (unsigned int)desc_has_address;
- (void)setDesc_has_address:(unsigned int)arg1;
- (id)placeorderAttach;
- (void)setPlaceorderAttach:(id)arg1;
- (unsigned int)groupType;
- (void)setGroupType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
