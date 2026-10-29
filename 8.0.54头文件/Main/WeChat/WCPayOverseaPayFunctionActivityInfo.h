@interface WCPayOverseaPayFunctionActivityInfo : NSObject <PBCoding>
{
    unsigned int _m_activityExpiredTime; // +0x8
    NSString * _m_activityId; // +0x10
    NSString * _m_activityMsgContent; // +0x18
    NSString * _m_activityLink; // +0x20
    NSString * _m_activityIconLink; // +0x28
    NSString * _m_activityJumpFuncId; // +0x30
    NSString * _m_activityTips; // +0x38
}
+ (void)PBArrayAdd_m_activityId;
+ (void)PBArrayAdd_m_activityMsgContent;
+ (void)PBArrayAdd_m_activityLink;
+ (void)PBArrayAdd_m_activityIconLink;
+ (void)PBArrayAdd_m_activityJumpFuncId;
+ (void)PBArrayAdd_m_activityTips;
+ (void)PBArrayAdd_m_activityExpiredTime;
+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;
- (id)getPBPropertyTable;
- (id)m_activityId;
- (void)setM_activityId:(id)arg1;
- (id)m_activityMsgContent;
- (void)setM_activityMsgContent:(id)arg1;
- (id)m_activityLink;
- (void)setM_activityLink:(id)arg1;
- (id)m_activityIconLink;
- (void)setM_activityIconLink:(id)arg1;
- (id)m_activityJumpFuncId;
- (void)setM_activityJumpFuncId:(id)arg1;
- (id)m_activityTips;
- (void)setM_activityTips:(id)arg1;
- (unsigned int)m_activityExpiredTime;
- (void)setM_activityExpiredTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

