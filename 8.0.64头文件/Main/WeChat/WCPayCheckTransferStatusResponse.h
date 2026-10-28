@interface WCPayCheckTransferStatusResponse : NSObject
{
    unsigned int m_uiTransferStatus; // +0x8
    NSString * m_nsTransferStatusName; // +0x10
    NSString * m_nsFeeType; // +0x18
    long long m_llFee; // +0x20
    NSString * m_nsSenderUserName; // +0x28
    NSString * m_nsRecieverUserName; // +0x30
    NSString * m_nsTransferTime; // +0x38
    NSString * m_nsRefundBandType; // +0x40
    NSString * m_nsModifyTime; // +0x48
    NSString * m_nsBannerContent; // +0x50
    NSString * m_nsBannerUrl; // +0x58
    BOOL _m_bIsPayer; // +0x60
    NSString * m_nsRefundBankType; // +0x68
    NSString * _m_nsStatusDesc; // +0x70
    NSString * _m_nsStatusSupplementary; // +0x78
    unsigned long long _delayStatus; // +0x80
    NSString * _desc; // +0x88
    WCPayAddressInfo * _addr_info; // +0x90
    WCPayExposureInfo * _exposure_info; // +0x98
    WCPayTextInfo * _text_info; // +0xa0
    WCPayTransferResendInfo * _resendInfo; // +0xa8
    WCPayTextInfo * _middle_info; // +0xb0
    NSMutableArray * _desc_items; // +0xb8
    long long _trade_mem_type; // +0xc0
    NSMutableArray * _option_items; // +0xc8
    NoticeItem * _noticeItem; // +0xd0
    RecvAccountInfo * _recv_account_info; // +0xd8
    NSArray * _customer_info_list; // +0xe0
    RecvCustomerInfoModule * _recv_customer_info_module; // +0xe8
}
- (unsigned int)m_uiTransferStatus;
- (void)setM_uiTransferStatus:(unsigned int)arg1;
- (long long)m_llFee;
- (void)setM_llFee:(long long)arg1;
- (id)m_nsFeeType;
- (void)setM_nsFeeType:(id)arg1;
- (id)m_nsRecieverUserName;
- (void)setM_nsRecieverUserName:(id)arg1;
- (id)m_nsSenderUserName;
- (void)setM_nsSenderUserName:(id)arg1;
- (id)m_nsTransferStatusName;
- (void)setM_nsTransferStatusName:(id)arg1;
- (id)m_nsTransferTime;
- (void)setM_nsTransferTime:(id)arg1;
- (id)m_nsModifyTime;
- (void)setM_nsModifyTime:(id)arg1;
- (id)m_nsRefundBankType;
- (void)setM_nsRefundBankType:(id)arg1;
- (id)m_nsBannerContent;
- (void)setM_nsBannerContent:(id)arg1;
- (id)m_nsBannerUrl;
- (void)setM_nsBannerUrl:(id)arg1;
- (BOOL)m_bIsPayer;
- (void)setM_bIsPayer:(BOOL)arg1;
- (id)m_nsStatusDesc;
- (void)setM_nsStatusDesc:(id)arg1;
- (id)m_nsStatusSupplementary;
- (void)setM_nsStatusSupplementary:(id)arg1;
- (unsigned long long)delayStatus;
- (void)setDelayStatus:(unsigned long long)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)addr_info;
- (void)setAddr_info:(id)arg1;
- (id)exposure_info;
- (void)setExposure_info:(id)arg1;
- (id)text_info;
- (void)setText_info:(id)arg1;
- (id)resendInfo;
- (void)setResendInfo:(id)arg1;
- (id)middle_info;
- (void)setMiddle_info:(id)arg1;
- (id)desc_items;
- (void)setDesc_items:(id)arg1;
- (long long)trade_mem_type;
- (void)setTrade_mem_type:(long long)arg1;
- (id)option_items;
- (void)setOption_items:(id)arg1;
- (id)noticeItem;
- (void)setNoticeItem:(id)arg1;
- (id)recv_account_info;
- (void)setRecv_account_info:(id)arg1;
- (id)customer_info_list;
- (void)setCustomer_info_list:(id)arg1;
- (id)recv_customer_info_module;
- (void)setRecv_customer_info_module:(id)arg1;
- (void).cxx_destruct;
@end
