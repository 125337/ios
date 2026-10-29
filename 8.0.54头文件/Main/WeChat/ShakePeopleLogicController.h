@interface ShakePeopleLogicController : MMObject <PBMessageObserverDelegate, LocationRetrieveDelegate>
{
    unsigned int m_uiEventID; // +0x8
    unsigned int m_uiTryCount; // +0xc
    double m_dbLastReportTime; // +0x10
    id <ShakeLogicProxyDelegate> m_delegate; // +0x18
    LocationRetriever * m_locationRetrieve; // +0x20
    BOOL m_isTriggeredShakeReport; // +0x28
    NSMutableArray * m_eventIDsToListen; // +0x30
    ShakeReportResponse * m_reportResponse; // +0x38
    ShakeGetResponse * m_getResponse; // +0x40
    BOOL m_isTaskStoped; // +0x48
    CLLocation * m_location; // +0x50
}
- (BOOL)isShakeStarted;
- (void)addToEventIDsToListen:(long long)arg1;
- (BOOL)isInEventIDsToListen:(long long)arg1;
- (void)createShakeReportEvent;
- (void)createShakeGetEvent;
- (void)doShakeGet;
- (void)processReportResponse;
- (void)processGetResponse;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)shakeReport;
- (void)shakeStop;
- (void)shakeReset;
- (void)shakeTerminate;
- (BOOL)isShowBannerView;
- (id)getMsgForState:(unsigned int)arg1;
- (void)updateShakeLocation;
- (void)SetShakeList:(id)arg1 andScene:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_locationRetrieve;
- (void)setM_locationRetrieve:(id)arg1;
- (BOOL)m_isTriggeredShakeReport;
- (void)setM_isTriggeredShakeReport:(BOOL)arg1;
- (id)m_eventIDsToListen;
- (void)setM_eventIDsToListen:(id)arg1;
- (id)m_reportResponse;
- (void)setM_reportResponse:(id)arg1;
- (id)m_getResponse;
- (void)setM_getResponse:(id)arg1;
- (BOOL)m_isTaskStoped;
- (void)setM_isTaskStoped:(BOOL)arg1;
- (id)m_location;
- (void)setM_location:(id)arg1;
- (void).cxx_destruct;
@end

