@interface MMSessionInfoExt : NSObject <PBCoding>
{
    BOOL _m_isHidden; // +0x8
    unsigned int _m_uLastNotifySeq; // +0xc
    unsigned int _m_uUndeliverCount; // +0x10
    unsigned int _m_uLastDeliverMsgSeq; // +0x14
    unsigned long long _m_sessionState; // +0x18
    long long _sessionLastMsgId; // +0x20
}
+ (void)PBArrayAdd_m_uLastNotifySeq;
+ (void)PBArrayAdd_m_uUndeliverCount;
+ (void)PBArrayAdd_m_uLastDeliverMsgSeq;
+ (void)PBArrayAdd_m_isHidden;
+ (void)PBArrayAdd_m_sessionState;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (unsigned int)m_uLastNotifySeq;
- (void)setM_uLastNotifySeq:(unsigned int)arg1;
- (unsigned int)m_uUndeliverCount;
- (void)setM_uUndeliverCount:(unsigned int)arg1;
- (unsigned int)m_uLastDeliverMsgSeq;
- (void)setM_uLastDeliverMsgSeq:(unsigned int)arg1;
- (BOOL)m_isHidden;
- (void)setM_isHidden:(BOOL)arg1;
- (unsigned long long)m_sessionState;
- (void)setM_sessionState:(unsigned long long)arg1;
- (long long)sessionLastMsgId;
- (void)setSessionLastMsgId:(long long)arg1;
@end

