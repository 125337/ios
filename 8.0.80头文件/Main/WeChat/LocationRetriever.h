@interface LocationRetriever : NSObject <ILocationMgrExt>
{
    unsigned long long m_locationTag; // +0x8
    BOOL m_bCanRepeatReportLocation; // +0x10
    float m_requiredAccuracy; // +0x14
    MMTimer * m_checkResultTimer; // +0x18
    MMTimer * m_retrieveCallbackTimer; // +0x20
    id <LocationRetrieveDelegate> m_delegate; // +0x28
    NSMutableArray * m_recentLocationList; // +0x30
    timeval m_tvStart; // +0x38
    timeval m_tvFirst; // +0x48
    BOOL m_bFirstRetriever; // +0x58
    unsigned int m_firstRetrieverRange; // +0x5c
    BOOL m_bReport; // +0x60
    BOOL m_hasRetrieveCallback; // +0x61
    BOOL m_bShieldAccuracy; // +0x62
    BOOL _m_bEnableIndoor; // +0x63
    int m_timeoutCount; // +0x64
    int _retrieveOverTime; // +0x68
    int _retrieveCallbackOverTime; // +0x6c
    unsigned long long m_eBusType; // +0x70
    long long m_geoMode; // +0x78
    unsigned long long _m_enmLBSDetailLevel; // +0x80
    NSString * _m_sQMapSubKey; // +0x88
    unsigned long long _authScene; // +0x90
}
+ (BOOL)isLocationServiceValidWithoutChallengeForAuthScene:(unsigned long long)arg1;
+ (double)getLocationAccuracy:(id)arg1;
+ (id)getGlobalCachedLastLocation;
+ (void)cacheGlobalLastLocation:(id)arg1;
+ (id)changeEarthLocationToMarsLocation:(id)arg1;
- (id)initWithDelegate:(id)arg1 authScene:(unsigned long long)arg2;
- (void)stopCheckTimer;
- (void)stopRetrieveCallbackTimer;
- (void)Reset;
- (void)dealloc;
- (void)RetrieveLocationWithoutRequestAuthorization;
- (void)RetrieveLocation;
- (id)RetrieveLocationFor:(unsigned long long)arg1;
- (void)StartRetrieveLocation;
- (void)CancelRetrieveLocation;
- (void)CleanDelegate;
- (int)getRetrieveOverTime;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (BOOL)isLocationOK:(id)arg1;
- (void)onGpsTimerTimeCheck;
- (id)getBestResultFromLocationList;
- (void)addToRecentLocationList:(id)arg1;
- (void)onHeadingTimeCheck;
- (void)reportRetriever:(id)arg1 retrieverSuccess:(BOOL)arg2 inCache:(BOOL)arg3;
- (void)onRetrieveCallbackTimeOut;
- (id)getTrueLocation:(id)arg1;
- (id)m_recentLocationList;
- (void)setM_recentLocationList:(id)arg1;
- (BOOL)m_bCanRepeatReportLocation;
- (void)setM_bCanRepeatReportLocation:(BOOL)arg1;
- (float)m_requiredAccuracy;
- (void)setM_requiredAccuracy:(float)arg1;
- (int)m_timeoutCount;
- (void)setM_timeoutCount:(int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)m_eBusType;
- (void)setM_eBusType:(unsigned long long)arg1;
- (long long)m_geoMode;
- (void)setM_geoMode:(long long)arg1;
- (BOOL)m_bShieldAccuracy;
- (void)setM_bShieldAccuracy:(BOOL)arg1;
- (unsigned long long)m_enmLBSDetailLevel;
- (void)setM_enmLBSDetailLevel:(unsigned long long)arg1;
- (id)m_sQMapSubKey;
- (void)setM_sQMapSubKey:(id)arg1;
- (BOOL)m_bEnableIndoor;
- (void)setM_bEnableIndoor:(BOOL)arg1;
- (int)retrieveOverTime;
- (void)setRetrieveOverTime:(int)arg1;
- (int)retrieveCallbackOverTime;
- (void)setRetrieveCallbackOverTime:(int)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
