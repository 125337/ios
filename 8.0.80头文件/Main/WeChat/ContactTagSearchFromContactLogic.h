@interface ContactTagSearchFromContactLogic : MMObject <IFTSContactMgrExt>
{
    id <ContactTagSearchFromContactLogicDelegate> _delegate; // +0x8
    NSString * _nsCurrentSearchText; // +0x10
    NSString * _taskKey; // +0x18
    NSMutableArray * _arrFilteredContactTags; // +0x20
    NSMutableDictionary * _dicFilteredContactUserNameMatchTip; // +0x28
    NSArray * _arrIgnoreContactTagID; // +0x30
    NSArray * _arrExistsContactTagData; // +0x38
}
- (id)init;
- (void)initData;
- (void)doAsynSearch:(id)arg1 arrIgnoreContactTagID:(id)arg2 arrExistsContactTagData:(id)arg3;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)updateAsynSearchQueryText:(id)arg1;
- (id)getFilteredContactTags;
- (id)getAllContactUserNameMatchTip;
- (void)onFTSContactSearchFinish:(id)arg1;
- (BOOL)fillSectionResultForDicSearchResult;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nsCurrentSearchText;
- (void)setNsCurrentSearchText:(id)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)arrFilteredContactTags;
- (void)setArrFilteredContactTags:(id)arg1;
- (id)dicFilteredContactUserNameMatchTip;
- (void)setDicFilteredContactUserNameMatchTip:(id)arg1;
- (id)arrIgnoreContactTagID;
- (void)setArrIgnoreContactTagID:(id)arg1;
- (id)arrExistsContactTagData;
- (void)setArrExistsContactTagData:(id)arg1;
- (void).cxx_destruct;
@end
