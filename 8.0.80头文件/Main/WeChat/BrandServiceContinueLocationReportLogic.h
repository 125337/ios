@interface BrandServiceContinueLocationReportLogic : MMObject <LocationRetrieveDelegate>
{
    LocationRetriever * m_locationRetriever; // +0x8
    CContact * m_contact; // +0x10
    NSDate * m_lastReportTime; // +0x18
    BOOL m_hadReported; // +0x20
    unsigned int _preEventID; // +0x24
    NSMutableDictionary * _extInfo; // +0x28
}
- (void)dealloc;
- (id)init;
- (void)startReportLocationForContact:(id)arg1 HasSetLocation:(BOOL)arg2;
- (void)locationRetrieveLocation;
- (void)askIsAllowReportLocation;
- (void)allowReportLocation;
- (void)notAllowReportLocation;
- (void)stopReportLocation;
- (void)reportLocationWithLocation:(id)arg1 ErrorCode:(long long)arg2;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)cancelRetrieveLocationIfOnlyReportOnce;
- (id)m_locationRetriever;
- (void)setM_locationRetriever:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_lastReportTime;
- (void)setM_lastReportTime:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned int)preEventID;
- (void)setPreEventID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
