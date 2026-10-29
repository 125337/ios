@interface StoreEmotionRecoverMyPanelListCgi : MMObject <PBMessageObserverDelegate>
{
    unsigned int _m_eventId; // +0x8
    unsigned long long _scene; // +0x10
    id <StoreEmotionRecoverMyPanelListCgiDelegate> _delegate; // +0x18
    NSData * _currReqBuf; // +0x20
    NSMutableArray * _emotionsArray; // +0x28
    NSMutableArray * _emotionSetInfoArray; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;
- (BOOL)isActive;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startInternalRequest;
- (void)OnGetEmoticonPanelList:(id)arg1;
- (void)callOKDelegateWithPids:(id)arg1 andSetInfos:(id)arg2;
- (void)callFailedDelegate;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)m_eventId;
- (void)setM_eventId:(unsigned int)arg1;
- (id)currReqBuf;
- (void)setCurrReqBuf:(id)arg1;
- (id)emotionsArray;
- (void)setEmotionsArray:(id)arg1;
- (id)emotionSetInfoArray;
- (void)setEmotionSetInfoArray:(id)arg1;
- (void).cxx_destruct;
@end

