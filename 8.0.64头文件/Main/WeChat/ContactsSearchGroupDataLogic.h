@interface ContactsSearchGroupDataLogic : MMObject <IFTSContactMgrExt>
{
    unsigned int _smartGroupSeq; // +0x8
    id <ContactsSearchGroupDataLogicDelegate> _delegate; // +0x10
    NSString * _nsCurrentSearchText; // +0x18
    NSString * _taskKey; // +0x20
    NSMutableArray * _arrFilteredContacts; // +0x28
    WCSmartGroupCore * _recommendLogic; // +0x30
}
- (id)init;
- (void)initData;
- (void)doAsynSearch:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)updateAsynSearchQueryText:(id)arg1;
- (id)getFilteredContacts;
- (void)clearAsynSearchLastQueryText;
- (id)getMatchTipForUserName:(id)arg1;
- (id)getAllSearchMatchTip;
- (void)onFTSContactSearchFinish:(id)arg1;
- (BOOL)fillSectionGroupResultForDicSearchResult;
- (id)getDicSessionCreateTime;
- (BOOL)asyncCheckAllSameRecommendAlreadyHadGroup:(id)arg1;
- (void)finishTask:(id)arg1;
- (unsigned int)genSeq;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nsCurrentSearchText;
- (void)setNsCurrentSearchText:(id)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)arrFilteredContacts;
- (void)setArrFilteredContacts:(id)arg1;
- (id)recommendLogic;
- (void)setRecommendLogic:(id)arg1;
- (unsigned int)smartGroupSeq;
- (void)setSmartGroupSeq:(unsigned int)arg1;
- (void).cxx_destruct;
@end
