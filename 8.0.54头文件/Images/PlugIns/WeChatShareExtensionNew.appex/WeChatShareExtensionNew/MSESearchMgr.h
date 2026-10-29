@interface MSESearchMgr : NSObject
{
    NSMutableArray * m_oSearchContactData; // +0x8
    NSMutableDictionary * m_oDicMatchTips; // +0x10
    NSMutableArray * m_oSearchResultArray; // +0x18
    BOOL _bSearchStatus; // +0x20
}
- (void)initSearchDataWithSessions:(id)arg1;
- (id)doSearch:(id)arg1;
- (id)getMatchTipByUserName:(id)arg1;
- (BOOL)bSearchStatus;
- (void)setBSearchStatus:(BOOL)arg1;
- (void).cxx_destruct;
@end

