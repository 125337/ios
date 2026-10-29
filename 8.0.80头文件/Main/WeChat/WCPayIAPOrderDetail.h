@interface WCPayIAPOrderDetail : NSObject
{
    NSString * m_productName; // +0x8
    NSString * m_totalMoney; // +0x10
    unsigned int m_payStatus; // +0x18
    NSString * m_sellerID; // +0x20
    NSString * m_sellerName; // +0x28
    NSString * m_sellerFrom; // +0x30
    NSString * m_sellerUserName; // +0x38
    NSString * m_createTime; // +0x40
    NSString * m_transcationID; // +0x48
    NSString * m_payStatusName; // +0x50
    NSString * m_paySituation; // +0x58
    NSString * m_sellerPhone; // +0x60
    NSString * nsServiceAppID; // +0x68
    NSString * nsServiceDetail; // +0x70
    NSString * nsServiceAppUserName; // +0x78
    NSString * nsServiceAppLogoUrl; // +0x80
    NSString * nsServiceAppNickName; // +0x88
    NSString * nsShareToFriendsURL; // +0x90
    NSString * nsPaidSuccessDetail; // +0x98
    int uiServiceSubscribeStrategy; // +0xa0
}
- (id)m_createTime;
- (void)setM_createTime:(id)arg1;
- (id)m_paySituation;
- (void)setM_paySituation:(id)arg1;
- (unsigned int)m_payStatus;
- (void)setM_payStatus:(unsigned int)arg1;
- (id)m_payStatusName;
- (void)setM_payStatusName:(id)arg1;
- (id)m_productName;
- (void)setM_productName:(id)arg1;
- (id)m_sellerFrom;
- (void)setM_sellerFrom:(id)arg1;
- (id)m_sellerID;
- (void)setM_sellerID:(id)arg1;
- (id)m_sellerName;
- (void)setM_sellerName:(id)arg1;
- (id)m_sellerPhone;
- (void)setM_sellerPhone:(id)arg1;
- (id)m_sellerUserName;
- (void)setM_sellerUserName:(id)arg1;
- (id)m_totalMoney;
- (void)setM_totalMoney:(id)arg1;
- (id)m_transcationID;
- (void)setM_transcationID:(id)arg1;
- (id)nsServiceAppID;
- (void)setNsServiceAppID:(id)arg1;
- (id)nsServiceAppLogoUrl;
- (void)setNsServiceAppLogoUrl:(id)arg1;
- (id)nsServiceAppNickName;
- (void)setNsServiceAppNickName:(id)arg1;
- (id)nsServiceAppUserName;
- (void)setNsServiceAppUserName:(id)arg1;
- (id)nsServiceDetail;
- (void)setNsServiceDetail:(id)arg1;
- (int)uiServiceSubscribeStrategy;
- (void)setUiServiceSubscribeStrategy:(int)arg1;
- (id)nsPaidSuccessDetail;
- (void)setNsPaidSuccessDetail:(id)arg1;
- (id)nsShareToFriendsURL;
- (void)setNsShareToFriendsURL:(id)arg1;
- (void).cxx_destruct;
@end
