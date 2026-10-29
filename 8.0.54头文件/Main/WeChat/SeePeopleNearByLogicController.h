@interface SeePeopleNearByLogicController : MMObject <ICertInfoMgrExt, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    unsigned int m_uiEventID; // +0x8
    unsigned int m_lbsEventID; // +0xc
    unsigned int m_uiTryCount; // +0x10
    LbsContactInfoList * m_lbsContactList; // +0x18
    LocationRetriever * m_locationRetrieve; // +0x20
    id <SeePeopleNearByUIDelegate> m_delegate; // +0x28
    unsigned int m_uiCurOpCode; // +0x30
    CLLocation * m_location; // +0x38
}
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)updateLbsContactInfo;
- (void)cancelUpdateLbsContactInfo;
- (BOOL)clearMyLbsData;
- (void)updateAdInfo;
- (void)closeAd:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (BOOL)CreateClearLBSDataEvent;
- (BOOL)CreateLBSPoiListEvent:(id)arg1;
- (BOOL)CreateLBSFindEvent:(id)arg1;
- (void)onSelectedWithLbsContactInfo:(id)arg1;
- (void)onSelectedWithLbsPoiItem:(id)arg1;
- (void)OnUpdateCertInfo;
- (BOOL)CreateJoinLBSRoomEvent:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_lbsContactList;
- (void)setM_lbsContactList:(id)arg1;
- (id)m_locationRetrieve;
- (void)setM_locationRetrieve:(id)arg1;
- (id)m_location;
- (void)setM_location:(id)arg1;
- (void).cxx_destruct;
@end

