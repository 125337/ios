@interface StoreEmotionReplaceMyPanelListCgi : MMObject <PBMessageObserverDelegate>
{
    BOOL _m_hasStartRequestOnce; // +0x8
    BOOL _m_ignoreLimit; // +0x9
    unsigned int _m_eventId; // +0xc
    id <StoreEmotionReplaceMyPanelListCgiDelegate> _delegate; // +0x10
    NSMutableArray * _m_needUploadProductIDList; // +0x18
}
- (id)init;
- (void)startRequest;
- (void)setReplaceList:(id)arg1;
- (void)startInternalRequest;
- (BOOL)isActive;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callOKDelegate;
- (void)callFailedDelegate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_needUploadProductIDList;
- (void)setM_needUploadProductIDList:(id)arg1;
- (unsigned int)m_eventId;
- (void)setM_eventId:(unsigned int)arg1;
- (BOOL)m_hasStartRequestOnce;
- (void)setM_hasStartRequestOnce:(BOOL)arg1;
- (BOOL)m_ignoreLimit;
- (void)setM_ignoreLimit:(BOOL)arg1;
- (void).cxx_destruct;
@end
