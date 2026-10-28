@interface StoreEmotionUploadMyPanelListCgi : MMObject <PBMessageObserverDelegate>
{
    BOOL m_hasStartRequestOnce; // +0x8
    BOOL m_ignoreLimit; // +0x9
    unsigned int m_eventId; // +0xc
    int _code; // +0x10
    NSMutableArray * m_productIDList; // +0x18
    id <StoreEmotionUploadMyPanelListCgiDelegate> m_delegate; // +0x20
}
- (id)initWithProductIDList:(id)arg1 delegate:(id)arg2;
- (void)setNeedPids:(id)arg1;
- (void)startRequest;
- (BOOL)isActive;
- (void)startInternalRequest;
- (void)startSortedLogic;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callFailedDelegate;
- (void)callOKDelegate;
- (id)m_productIDList;
- (void)setM_productIDList:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_eventId;
- (void)setM_eventId:(unsigned int)arg1;
- (BOOL)m_hasStartRequestOnce;
- (void)setM_hasStartRequestOnce:(BOOL)arg1;
- (BOOL)m_ignoreLimit;
- (void)setM_ignoreLimit:(BOOL)arg1;
- (int)code;
- (void)setCode:(int)arg1;
- (void).cxx_destruct;
@end
