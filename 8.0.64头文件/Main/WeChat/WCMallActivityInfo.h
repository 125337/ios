@interface WCMallActivityInfo : NSObject
{
    unsigned int m_uiActivityExpiredTime; // +0x8
    NSString * m_nsActivityIconLink; // +0x10
    NSString * m_nsActivityId; // +0x18
    NSString * m_nsActivityLink; // +0x20
    NSString * m_nsActivityMessageContent; // +0x28
    NSString * m_nsActivityTips; // +0x30
    unsigned int m_uiActivityJumpFunctionId; // +0x38
    unsigned int m_uiIsMsgReserved; // +0x3c
    unsigned int _m_uiActivityType; // +0x40
    NSString * _m_nsActivityUrl; // +0x48
}
- (unsigned int)m_uiActivityExpiredTime;
- (void)setM_uiActivityExpiredTime:(unsigned int)arg1;
- (id)m_nsActivityIconLink;
- (void)setM_nsActivityIconLink:(id)arg1;
- (id)m_nsActivityId;
- (void)setM_nsActivityId:(id)arg1;
- (id)m_nsActivityLink;
- (void)setM_nsActivityLink:(id)arg1;
- (id)m_nsActivityMessageContent;
- (void)setM_nsActivityMessageContent:(id)arg1;
- (unsigned int)m_uiActivityJumpFunctionId;
- (void)setM_uiActivityJumpFunctionId:(unsigned int)arg1;
- (id)m_nsActivityTips;
- (void)setM_nsActivityTips:(id)arg1;
- (unsigned int)m_uiIsMsgReserved;
- (void)setM_uiIsMsgReserved:(unsigned int)arg1;
- (unsigned int)m_uiActivityType;
- (void)setM_uiActivityType:(unsigned int)arg1;
- (id)m_nsActivityUrl;
- (void)setM_nsActivityUrl:(id)arg1;
- (void).cxx_destruct;
@end
