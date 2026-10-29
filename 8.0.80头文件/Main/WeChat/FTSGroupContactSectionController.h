@interface FTSGroupContactSectionController : FTSBaseSectionController <IFTSContactMgrExt, FTSFirstTitleCellDelegate, FTSDataChangeBroadCast>
{
    NSArray * _contacts; // +0x8
}
- (void)didUpdateWithModel:(id)arg1;
- (id)sectionTitle;
- (id)noResultTipSuffix;
- (id)searchBarPlaceHolder;
- (id)cellForTitleInSection:(long long)arg1;
- (unsigned long long)sectionType;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)countLimitConifg;
- (BOOL)shouldDisplayChatRoomEntry;
- (BOOL)isCreateChatRoomCellAtRow:(long long)arg1;
- (void)search:(id)arg1;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)onRightButtonTapped;
- (void)onContactsModified;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (void).cxx_destruct;
@end
