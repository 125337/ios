@interface WCPayOrderDetailActivityInfo : NSObject
{
    NSString * m_nsIconUrl; // +0x8
    NSString * m_nsActivityTitle; // +0x10
    NSString * m_nsBtnTitle; // +0x18
    NSString * m_nsActivityUrl; // +0x20
    NSString * m_nsActivitySlogan; // +0x28
    unsigned int m_uiStyle; // +0x30
    unsigned long long m_uiActivityId; // +0x38
    unsigned long long m_uiActivityType; // +0x40
    NSString * m_nsSmallTitle; // +0x48
    unsigned long long m_uiAwardId; // +0x50
    unsigned int m_uiSendRecordId; // +0x58
    unsigned int m_uiUserRecordId; // +0x5c
    NSString * m_activityTinyAppUsername; // +0x60
    NSString * m_activityTinyAppPath; // +0x68
    unsigned long long m_activityMchId; // +0x70
    unsigned int _m_activityTinyAppVersion; // +0x78
    NSString * _m_getAwardParams; // +0x80
    NSString * _m_queryAwardStatusParams; // +0x88
    ExposureInfo * _m_exposureInfo; // +0x90
}
- (id)m_nsActivityTitle;
- (void)setM_nsActivityTitle:(id)arg1;
- (id)m_nsActivityUrl;
- (void)setM_nsActivityUrl:(id)arg1;
- (id)m_nsBtnTitle;
- (void)setM_nsBtnTitle:(id)arg1;
- (id)m_nsIconUrl;
- (void)setM_nsIconUrl:(id)arg1;
- (id)m_nsActivitySlogan;
- (void)setM_nsActivitySlogan:(id)arg1;
- (unsigned int)m_uiStyle;
- (void)setM_uiStyle:(unsigned int)arg1;
- (unsigned long long)m_uiActivityId;
- (void)setM_uiActivityId:(unsigned long long)arg1;
- (unsigned long long)m_uiActivityType;
- (void)setM_uiActivityType:(unsigned long long)arg1;
- (id)m_nsSmallTitle;
- (void)setM_nsSmallTitle:(id)arg1;
- (unsigned long long)m_uiAwardId;
- (void)setM_uiAwardId:(unsigned long long)arg1;
- (unsigned int)m_uiSendRecordId;
- (void)setM_uiSendRecordId:(unsigned int)arg1;
- (unsigned int)m_uiUserRecordId;
- (void)setM_uiUserRecordId:(unsigned int)arg1;
- (id)m_activityTinyAppUsername;
- (void)setM_activityTinyAppUsername:(id)arg1;
- (id)m_activityTinyAppPath;
- (void)setM_activityTinyAppPath:(id)arg1;
- (unsigned long long)m_activityMchId;
- (void)setM_activityMchId:(unsigned long long)arg1;
- (unsigned int)m_activityTinyAppVersion;
- (void)setM_activityTinyAppVersion:(unsigned int)arg1;
- (id)m_getAwardParams;
- (void)setM_getAwardParams:(id)arg1;
- (id)m_queryAwardStatusParams;
- (void)setM_queryAwardStatusParams:(id)arg1;
- (id)m_exposureInfo;
- (void)setM_exposureInfo:(id)arg1;
- (void).cxx_destruct;
@end
