@interface FTSBrandStickerContactSectionController : FTSBaseSectionController <IFTSContactMgrExt>
{
    NSArray * _contacts; // +0x8
}
- (void)didUpdateWithModel:(id)arg1;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)sectionTitle;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (void)search:(id)arg1;
- (void)onFTSContactSearchFinish:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (void).cxx_destruct;
@end
