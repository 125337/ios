@interface FTSMessageSectionController : FTSBaseSectionController <IFTSMessageMgrExt>
{
    NSMutableDictionary * m_dicWeakMedia; // +0x8
    NSMutableDictionary * m_dicIndexItemCount; // +0x10
    BOOL isTalkerEntry; // +0x18
}
- (id)init;
- (void)didUpdateWithModel:(id)arg1;
- (id)sectionTitle;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)talkerCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)msgCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (long long)numberOfSearchItems;
- (BOOL)isMsgTalkerSearchEntry:(long long)arg1;
- (void)didSelectRowAtIndex:(long long)arg1;
- (id)objectForIndexPath:(id)arg1;
- (double)heightForRowAtIndex:(long long)arg1;
- (void)search:(id)arg1;
- (BOOL)hasSearchDone;
- (BOOL)isSearching;
- (BOOL)hasMoreData;
- (void)onLoadMore;
- (void)cancelSearch;
- (void)onFTSDetailPageMessageResultChanged:(BOOL)arg1;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (unsigned int)getSubClickTypeForClickType:(unsigned int)arg1 index:(unsigned int)arg2;
- (id)displayedMgrSessionIndexes;
- (unsigned long long)mgrSessionIndexForDisplayedItemRow:(long long)arg1;
- (unsigned long long)displayedSessionUserCount;
- (BOOL)isTalkerEntryEnabled;
- (id)sessionUsernameForDisplayedItemRow:(long long)arg1;
- (id)sessionMsgItemsForDisplayedItemRow:(long long)arg1;
- (void).cxx_destruct;
@end
