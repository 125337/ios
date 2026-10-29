@interface WCPayAuthenticationPayVerifySMSStruct : NSObject
{
    unsigned int m_flag; // +0x8
    unsigned int m_payScene; // +0xc
    unsigned int m_payChannel; // +0x10
    NSString * m_payPassword; // +0x18
    NSString * m_payKey; // +0x20
    NSString * m_payToken; // +0x28
    NSString * m_uuid; // +0x30
    NSString * m_verifySMS; // +0x38
    NSString * m_nsBankType; // +0x40
    NSString * m_nsBindSerial; // +0x48
    NSString * m_appId; // +0x50
    NSString * m_appName; // +0x58
    NSString * m_appSource; // +0x60
    BOOL isAutoDeduct; // +0x68
    BOOL m_bIsAutoDeduct; // +0x69
    BOOL _m_bUseTouchID; // +0x6a
    BOOL _bIsLQTPay; // +0x6b
    NSString * _m_arriveType; // +0x70
    NSString * _autoDeductBankType; // +0x78
    NSString * _autoDeductBankSerial; // +0x80
    NSString * _orderReqKey; // +0x88
    NSString * _currentPayCardBankType; // +0x90
    WCPayAuthenRequestRetryInfo * _m_retryInfo; // +0x98
    NSString * _cre_tail; // +0xa0
    NSString * _cre_type; // +0xa8
    long long _messageVerifyType; // +0xb0
}
- (unsigned int)m_flag;
- (void)setM_flag:(unsigned int)arg1;
- (unsigned int)m_payScene;
- (void)setM_payScene:(unsigned int)arg1;
- (unsigned int)m_payChannel;
- (void)setM_payChannel:(unsigned int)arg1;
- (id)m_payKey;
- (void)setM_payKey:(id)arg1;
- (id)m_payToken;
- (void)setM_payToken:(id)arg1;
- (id)m_uuid;
- (void)setM_uuid:(id)arg1;
- (id)m_payPassword;
- (void)setM_payPassword:(id)arg1;
- (id)m_verifySMS;
- (void)setM_verifySMS:(id)arg1;
- (id)m_appId;
- (void)setM_appId:(id)arg1;
- (id)m_appName;
- (void)setM_appName:(id)arg1;
- (id)m_appSource;
- (void)setM_appSource:(id)arg1;
- (id)m_nsBankType;
- (void)setM_nsBankType:(id)arg1;
- (id)m_nsBindSerial;
- (void)setM_nsBindSerial:(id)arg1;
- (BOOL)m_bIsAutoDeduct;
- (void)setM_bIsAutoDeduct:(BOOL)arg1;
- (id)m_arriveType;
- (void)setM_arriveType:(id)arg1;
- (BOOL)m_bUseTouchID;
- (void)setM_bUseTouchID:(BOOL)arg1;
- (id)autoDeductBankType;
- (void)setAutoDeductBankType:(id)arg1;
- (id)autoDeductBankSerial;
- (void)setAutoDeductBankSerial:(id)arg1;
- (id)orderReqKey;
- (void)setOrderReqKey:(id)arg1;
- (BOOL)bIsLQTPay;
- (void)setBIsLQTPay:(BOOL)arg1;
- (id)currentPayCardBankType;
- (void)setCurrentPayCardBankType:(id)arg1;
- (id)m_retryInfo;
- (void)setM_retryInfo:(id)arg1;
- (id)cre_tail;
- (void)setCre_tail:(id)arg1;
- (id)cre_type;
- (void)setCre_type:(id)arg1;
- (long long)messageVerifyType;
- (void)setMessageVerifyType:(long long)arg1;
- (void).cxx_destruct;
@end

