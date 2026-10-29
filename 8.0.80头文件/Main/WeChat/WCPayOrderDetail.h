@interface WCPayOrderDetail : NSObject
{
    int m_eWCPayOrderDetailSituationType; // +0x8
    NSString * m_productName; // +0x10
    NSString * m_discountName; // +0x18
    NSString * m_productRemark; // +0x20
    unsigned int m_productCount; // +0x28
    long long m_totalMoney; // +0x30
    long long m_oldTotalMoney; // +0x38
    BOOL m_bNeedShowProductDetailMoneyInfo; // +0x40
    NSString * m_nsProductTotalMoney; // +0x48
    NSString * m_nsTransportMoney; // +0x50
    NSString * m_nsPreferentialMoney; // +0x58
    NSString * m_totalFeeString; // +0x60
    NSString * m_feeType; // +0x68
    unsigned int m_cardBankTag; // +0x70
    unsigned int m_payStatus; // +0x74
    unsigned int m_uiCreateTime; // +0x78
    NSString * m_sellerID; // +0x80
    NSString * m_sellerName; // +0x88
    NSString * m_createTime; // +0x90
    NSString * m_transcationID; // +0x98
    NSString * m_arrivedTime; // +0xa0
    NSString * m_preArriveTime; // +0xa8
    NSString * m_payStatusName; // +0xb0
    NSString * m_payBankType; // +0xb8
    NSString * m_payBankName; // +0xc0
    NSString * m_payCardTail; // +0xc8
    NSString * m_paySituation; // +0xd0
    BOOL m_isOpenFeeProtocal; // +0xd8
    WCPayOrderDetailSubscribeBrandInfo * m_oWCPayOrderDetailSubscribeBrandInfo; // +0xe0
    NSArray * m_arrWCPayOrderDetailActivityInfo; // +0xe8
    WCPayOrderDetailActivityInfo * m_oLinkedAtivityInfo; // +0xf0
    unsigned int m_uiAfterPaidErrorQueryOrderTime; // +0xf8
    BOOL m_bNeedAfterPaidErrorQueryOrder; // +0xfc
    NSString * m_nsBankTypeLimitWording; // +0x100
    NSString * m_nsRefundBankType; // +0x108
    NSString * m_nsInvoice; // +0x110
    NSString * m_nsMerchantGuarantee; // +0x118
    int m_eWCPayOrderDetailMessageType; // +0x120
    NSString * m_nsLatestProductStatusHeaderIcon; // +0x128
    NSString * m_nsLatestProductStatusName; // +0x130
    NSString * m_nsLatestProductStatusDesc; // +0x138
    NSString * m_nsLatestProductStatusUpdateTime; // +0x140
    NSString * m_nsLatestProductStatusClickedJumpUrl; // +0x148
    NSString * m_nsPanelAlertTitle; // +0x150
    NSString * m_nsPanelAlertBody; // +0x158
    NSArray * m_arrPanelButtonInfo; // +0x160
    NSString * m_sellerPhone; // +0x168
    NSString * m_sellerUserName; // +0x170
    NSString * m_sellerFrom; // +0x178
    NSArray * m_arrOrderProductInfo; // +0x180
    NSArray * m_arrCustomNormalCellInfo; // +0x188
    NSString * m_nsProtectRightsUrl; // +0x190
    NSString * m_nsSharedUrl; // +0x198
    NSString * m_nsImgIcon; // +0x1a0
    NSMutableArray * m_arrProductImg; // +0x1a8
    BOOL m_bShowEvaluateCell; // +0x1b0
    BOOL m_bEvaluated; // +0x1b1
    long long m_uiEvaluateValue; // +0x1b8
    unsigned int m_uiInsertEvaluateCellIndex; // +0x1c0
    int m_eWCPayTransferMoneyOrderStatus; // +0x1c4
    int m_eWCPayTransferMoneySituationSubType; // +0x1c8
    NSString * m_nsTransferID; // +0x1d0
    long long m_chargeFeeMoney; // +0x1d8
    long long m_transferFeeMoney; // +0x1e0
    NSString * m_nsReceiverUserName; // +0x1e8
    NSString * m_nsSenderUserName; // +0x1f0
    NSString * m_nsTruthName; // +0x1f8
    BOOL m_bAllowedRetrySendMsg; // +0x200
    NSString * m_receiveMoneyTime; // +0x208
    NSString * m_refusedMoneyTime; // +0x210
    NSString * m_nsRebackMoneyStatusName; // +0x218
    long long m_touchIDType; // +0x220
    NSString * m_nsWapPayTips; // +0x228
    NSArray * m_arrDiscountArray; // +0x230
    NSString * m_nsOriginalInfo; // +0x238
    NSString * m_nsRateInfo; // +0x240
    NSString * m_nsBannerContent; // +0x248
    NSString * m_nsBannerUrl; // +0x250
    BOOL m_bTouchIDAuthFailed; // +0x258
    BOOL _m_is_quota_exceeded; // +0x259
    unsigned int m_uiQueryInfoQueryOrderTime; // +0x25c
    unsigned int m_uiQueryInfoQueryOrderCount; // +0x260
    NSString * m_preArriveTimeWording; // +0x268
    RecvAccountInfo * _recv_account_info; // +0x270
    NSArray * _customer_info_list; // +0x278
    RecvCustomerInfoModule * _recv_customer_info_module; // +0x280
    NSString * _tail_info; // +0x288
    NSString * _m_uiQueryInfoQueryOrderDefaultWording; // +0x290
    NSString * _m_nsStatusDesc; // +0x298
    NSString * _m_nsStatusSupplementary; // +0x2a0
    unsigned long long _delayStatus; // +0x2a8
    WCPayOrderDetailTinyAppInfo * _tinyAppInfo; // +0x2b0
    WCPayOrderDetailRemarksInfo * _remarks_info; // +0x2b8
    NSString * _m_addressRemark; // +0x2c0
    WCPayAddressInfo * _m_addressInfo; // +0x2c8
    WCPayExposureInfo * _m_exposure_info; // +0x2d0
    WCPayTextInfo * _m_text_info; // +0x2d8
    WCPayTransferResendInfo * _resendInfo; // +0x2e0
    WCPayTextInfo * _m_middle_info; // +0x2e8
    NSMutableArray * _desc_items; // +0x2f0
    NSMutableArray * _option_items; // +0x2f8
    WCPayPaidDetailFinderInfoViewData * _finder_info_view; // +0x300
    long long _trade_mem_type; // +0x308
    WCPayPaidDetailLeadTailViewData * _leadtail_view; // +0x310
    WCPayLimitInfo * _m_limit_info; // +0x318
    NoticeItem * _noticeItem; // +0x320
}
- (unsigned int)m_payStatus;
- (void)setM_payStatus:(unsigned int)arg1;
- (BOOL)m_bNeedShowProductDetailMoneyInfo;
- (void)setM_bNeedShowProductDetailMoneyInfo:(BOOL)arg1;
- (unsigned int)m_productCount;
- (void)setM_productCount:(unsigned int)arg1;
- (id)m_productRemark;
- (void)setM_productRemark:(id)arg1;
- (id)m_discountName;
- (void)setM_discountName:(id)arg1;
- (long long)m_totalMoney;
- (void)setM_totalMoney:(long long)arg1;
- (long long)m_oldTotalMoney;
- (void)setM_oldTotalMoney:(long long)arg1;
- (id)m_feeType;
- (void)setM_feeType:(id)arg1;
- (unsigned int)m_cardBankTag;
- (void)setM_cardBankTag:(unsigned int)arg1;
- (id)m_createTime;
- (void)setM_createTime:(id)arg1;
- (id)m_arrivedTime;
- (void)setM_arrivedTime:(id)arg1;
- (id)m_preArriveTime;
- (void)setM_preArriveTime:(id)arg1;
- (id)m_productName;
- (void)setM_productName:(id)arg1;
- (id)m_sellerID;
- (void)setM_sellerID:(id)arg1;
- (id)m_sellerName;
- (void)setM_sellerName:(id)arg1;
- (id)m_sellerFrom;
- (void)setM_sellerFrom:(id)arg1;
- (id)m_sellerUserName;
- (void)setM_sellerUserName:(id)arg1;
- (id)m_transcationID;
- (void)setM_transcationID:(id)arg1;
- (id)m_payStatusName;
- (void)setM_payStatusName:(id)arg1;
- (id)m_payBankType;
- (void)setM_payBankType:(id)arg1;
- (id)m_payBankName;
- (void)setM_payBankName:(id)arg1;
- (id)m_payCardTail;
- (void)setM_payCardTail:(id)arg1;
- (id)m_sellerPhone;
- (void)setM_sellerPhone:(id)arg1;
- (id)m_oWCPayOrderDetailSubscribeBrandInfo;
- (void)setM_oWCPayOrderDetailSubscribeBrandInfo:(id)arg1;
- (id)m_arrWCPayOrderDetailActivityInfo;
- (void)setM_arrWCPayOrderDetailActivityInfo:(id)arg1;
- (int)m_eWCPayOrderDetailSituationType;
- (void)setM_eWCPayOrderDetailSituationType:(int)arg1;
- (id)m_paySituation;
- (void)setM_paySituation:(id)arg1;
- (id)m_totalFeeString;
- (void)setM_totalFeeString:(id)arg1;
- (BOOL)m_isOpenFeeProtocal;
- (void)setM_isOpenFeeProtocal:(BOOL)arg1;
- (id)m_arrOrderProductInfo;
- (void)setM_arrOrderProductInfo:(id)arg1;
- (id)m_nsPreferentialMoney;
- (void)setM_nsPreferentialMoney:(id)arg1;
- (id)m_nsProductTotalMoney;
- (void)setM_nsProductTotalMoney:(id)arg1;
- (id)m_nsTransportMoney;
- (void)setM_nsTransportMoney:(id)arg1;
- (id)m_arrCustomNormalCellInfo;
- (void)setM_arrCustomNormalCellInfo:(id)arg1;
- (id)m_nsProtectRightsUrl;
- (void)setM_nsProtectRightsUrl:(id)arg1;
- (id)m_nsSharedUrl;
- (void)setM_nsSharedUrl:(id)arg1;
- (id)m_nsLatestProductStatusClickedJumpUrl;
- (void)setM_nsLatestProductStatusClickedJumpUrl:(id)arg1;
- (id)m_nsLatestProductStatusHeaderIcon;
- (void)setM_nsLatestProductStatusHeaderIcon:(id)arg1;
- (id)m_nsLatestProductStatusName;
- (void)setM_nsLatestProductStatusName:(id)arg1;
- (id)m_nsLatestProductStatusUpdateTime;
- (void)setM_nsLatestProductStatusUpdateTime:(id)arg1;
- (id)m_arrPanelButtonInfo;
- (void)setM_arrPanelButtonInfo:(id)arg1;
- (id)m_nsPanelAlertBody;
- (void)setM_nsPanelAlertBody:(id)arg1;
- (id)m_nsPanelAlertTitle;
- (void)setM_nsPanelAlertTitle:(id)arg1;
- (id)m_nsInvoice;
- (void)setM_nsInvoice:(id)arg1;
- (id)m_nsMerchantGuarantee;
- (void)setM_nsMerchantGuarantee:(id)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (id)m_nsImgIcon;
- (void)setM_nsImgIcon:(id)arg1;
- (id)m_nsLatestProductStatusDesc;
- (void)setM_nsLatestProductStatusDesc:(id)arg1;
- (id)m_arrProductImg;
- (void)setM_arrProductImg:(id)arg1;
- (int)m_eWCPayOrderDetailMessageType;
- (void)setM_eWCPayOrderDetailMessageType:(int)arg1;
- (long long)m_uiEvaluateValue;
- (void)setM_uiEvaluateValue:(long long)arg1;
- (BOOL)m_bEvaluated;
- (void)setM_bEvaluated:(BOOL)arg1;
- (BOOL)m_bShowEvaluateCell;
- (void)setM_bShowEvaluateCell:(BOOL)arg1;
- (unsigned int)m_uiInsertEvaluateCellIndex;
- (void)setM_uiInsertEvaluateCellIndex:(unsigned int)arg1;
- (BOOL)m_bAllowedRetrySendMsg;
- (void)setM_bAllowedRetrySendMsg:(BOOL)arg1;
- (long long)m_chargeFeeMoney;
- (void)setM_chargeFeeMoney:(long long)arg1;
- (id)m_nsReceiverUserName;
- (void)setM_nsReceiverUserName:(id)arg1;
- (long long)m_transferFeeMoney;
- (void)setM_transferFeeMoney:(long long)arg1;
- (int)m_eWCPayTransferMoneyOrderStatus;
- (void)setM_eWCPayTransferMoneyOrderStatus:(int)arg1;
- (id)m_nsSenderUserName;
- (void)setM_nsSenderUserName:(id)arg1;
- (id)m_nsTransferID;
- (void)setM_nsTransferID:(id)arg1;
- (id)m_receiveMoneyTime;
- (void)setM_receiveMoneyTime:(id)arg1;
- (id)m_refusedMoneyTime;
- (void)setM_refusedMoneyTime:(id)arg1;
- (id)m_nsRebackMoneyStatusName;
- (void)setM_nsRebackMoneyStatusName:(id)arg1;
- (id)m_nsTruthName;
- (void)setM_nsTruthName:(id)arg1;
- (int)m_eWCPayTransferMoneySituationSubType;
- (void)setM_eWCPayTransferMoneySituationSubType:(int)arg1;
- (id)m_nsBankTypeLimitWording;
- (void)setM_nsBankTypeLimitWording:(id)arg1;
- (id)m_nsRefundBankType;
- (void)setM_nsRefundBankType:(id)arg1;
- (long long)m_touchIDType;
- (void)setM_touchIDType:(long long)arg1;
- (unsigned int)m_uiAfterPaidErrorQueryOrderTime;
- (void)setM_uiAfterPaidErrorQueryOrderTime:(unsigned int)arg1;
- (unsigned int)m_uiQueryInfoQueryOrderTime;
- (void)setM_uiQueryInfoQueryOrderTime:(unsigned int)arg1;
- (unsigned int)m_uiQueryInfoQueryOrderCount;
- (void)setM_uiQueryInfoQueryOrderCount:(unsigned int)arg1;
- (BOOL)m_bNeedAfterPaidErrorQueryOrder;
- (void)setM_bNeedAfterPaidErrorQueryOrder:(BOOL)arg1;
- (id)m_nsWapPayTips;
- (void)setM_nsWapPayTips:(id)arg1;
- (BOOL)m_bTouchIDAuthFailed;
- (void)setM_bTouchIDAuthFailed:(BOOL)arg1;
- (id)m_oLinkedAtivityInfo;
- (void)setM_oLinkedAtivityInfo:(id)arg1;
- (id)m_preArriveTimeWording;
- (void)setM_preArriveTimeWording:(id)arg1;
- (id)m_arrDiscountArray;
- (void)setM_arrDiscountArray:(id)arg1;
- (id)m_nsRateInfo;
- (void)setM_nsRateInfo:(id)arg1;
- (id)m_nsOriginalInfo;
- (void)setM_nsOriginalInfo:(id)arg1;
- (id)m_nsBannerContent;
- (void)setM_nsBannerContent:(id)arg1;
- (id)m_nsBannerUrl;
- (void)setM_nsBannerUrl:(id)arg1;
- (id)recv_account_info;
- (void)setRecv_account_info:(id)arg1;
- (id)customer_info_list;
- (void)setCustomer_info_list:(id)arg1;
- (id)recv_customer_info_module;
- (void)setRecv_customer_info_module:(id)arg1;
- (id)tail_info;
- (void)setTail_info:(id)arg1;
- (id)m_uiQueryInfoQueryOrderDefaultWording;
- (void)setM_uiQueryInfoQueryOrderDefaultWording:(id)arg1;
- (id)m_nsStatusDesc;
- (void)setM_nsStatusDesc:(id)arg1;
- (id)m_nsStatusSupplementary;
- (void)setM_nsStatusSupplementary:(id)arg1;
- (unsigned long long)delayStatus;
- (void)setDelayStatus:(unsigned long long)arg1;
- (id)tinyAppInfo;
- (void)setTinyAppInfo:(id)arg1;
- (id)remarks_info;
- (void)setRemarks_info:(id)arg1;
- (id)m_addressRemark;
- (void)setM_addressRemark:(id)arg1;
- (id)m_addressInfo;
- (void)setM_addressInfo:(id)arg1;
- (id)m_exposure_info;
- (void)setM_exposure_info:(id)arg1;
- (id)m_text_info;
- (void)setM_text_info:(id)arg1;
- (id)resendInfo;
- (void)setResendInfo:(id)arg1;
- (id)m_middle_info;
- (void)setM_middle_info:(id)arg1;
- (id)desc_items;
- (void)setDesc_items:(id)arg1;
- (id)option_items;
- (void)setOption_items:(id)arg1;
- (id)finder_info_view;
- (void)setFinder_info_view:(id)arg1;
- (long long)trade_mem_type;
- (void)setTrade_mem_type:(long long)arg1;
- (id)leadtail_view;
- (void)setLeadtail_view:(id)arg1;
- (id)m_limit_info;
- (void)setM_limit_info:(id)arg1;
- (BOOL)m_is_quota_exceeded;
- (void)setM_is_quota_exceeded:(BOOL)arg1;
- (id)noticeItem;
- (void)setNoticeItem:(id)arg1;
- (void).cxx_destruct;
@end
