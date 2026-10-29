@interface WCMallControlData : NSObject
{
    WCMallBroadCastInfo * m_structBroadCastInfo; // +0x8
    WCMallFunctionActivity * selectedFunctionActivity; // +0x10
    NSMutableDictionary * selectedProductsFilledInfoDic; // +0x18
    NSArray * m_arrGlobalActivityList; // +0x20
    NSArray * m_arrFunctionActivityList; // +0x28
    NSArray * m_arrFunctionProductsList; // +0x30
    NSArray * m_arrOldTelephoneList; // +0x38
    NSDictionary * m_dicAllTelephoneList; // +0x40
    NSDictionary * m_dicCandidateTelephoneList; // +0x48
    BOOL m_bNotShowTutorial; // +0x50
    BOOL m_bFunctionListDataFromLocalCache; // +0x51
    NSString * m_balanceLink; // +0x58
    NSString * m_rechargeLink; // +0x60
    NSString * m_balanceWord; // +0x68
    NSString * m_rechargeWord; // +0x70
    NSDictionary * m_structEmptyPhoneChargeList; // +0x78
    NSDictionary * m_structHasPhoneChargeList; // +0x80
    NSDictionary * m_functionTypeMap; // +0x88
    BOOL _m_bIsShowSetting; // +0x90
    NSArray * _bannerDics; // +0x98
}
- (void)setM_balanceLink:(id)arg1;
- (id)m_balanceLink;
- (id)m_arrFunctionActivityList;
- (void)setM_arrFunctionActivityList:(id)arg1;
- (id)m_arrFunctionProductsList;
- (void)setM_arrFunctionProductsList:(id)arg1;
- (id)m_arrGlobalActivityList;
- (void)setM_arrGlobalActivityList:(id)arg1;
- (id)selectedFunctionActivity;
- (void)setSelectedFunctionActivity:(id)arg1;
- (id)selectedProductsFilledInfoDic;
- (void)setSelectedProductsFilledInfoDic:(id)arg1;
- (id)m_arrOldTelephoneList;
- (void)setM_arrOldTelephoneList:(id)arg1;
- (id)m_dicCandidateTelephoneList;
- (void)setM_dicCandidateTelephoneList:(id)arg1;
- (id)m_dicAllTelephoneList;
- (void)setM_dicAllTelephoneList:(id)arg1;
- (BOOL)m_bNotShowTutorial;
- (void)setM_bNotShowTutorial:(BOOL)arg1;
- (BOOL)m_bFunctionListDataFromLocalCache;
- (void)setM_bFunctionListDataFromLocalCache:(BOOL)arg1;
- (id)m_structBroadCastInfo;
- (void)setM_structBroadCastInfo:(id)arg1;
- (id)m_rechargeLink;
- (void)setM_rechargeLink:(id)arg1;
- (id)m_balanceWord;
- (void)setM_balanceWord:(id)arg1;
- (id)m_rechargeWord;
- (void)setM_rechargeWord:(id)arg1;
- (id)m_structEmptyPhoneChargeList;
- (void)setM_structEmptyPhoneChargeList:(id)arg1;
- (id)m_structHasPhoneChargeList;
- (void)setM_structHasPhoneChargeList:(id)arg1;
- (id)m_functionTypeMap;
- (void)setM_functionTypeMap:(id)arg1;
- (id)bannerDics;
- (void)setBannerDics:(id)arg1;
- (BOOL)m_bIsShowSetting;
- (void)setM_bIsShowSetting:(BOOL)arg1;
- (void).cxx_destruct;
@end

