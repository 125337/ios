@interface FTSSingleContactSectionController : FTSBaseSectionController <IFTSContactMgrExt, FTSFirstTitleCellDelegate, FTSDataChangeBroadCast>
{
    NSArray * _contacts; // +0x8
}
- (id)init;
- (void)didUpdateWithModel:(id)arg1;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)cellForTitleInSection:(long long)arg1;
- (long long)numberOfSearchItems;
- (void)didSelectRowAtIndex:(long long)arg1;
- (id)sectionTitle;
- (id)noResultTipSuffix;
- (id)searchBarPlaceHolder;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (void)search:(id)arg1;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)onRightButtonTapped;
- (void)onContactsModified;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (void).cxx_destruct;
@end

