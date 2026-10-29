@interface MMBaseSessionViewController : MMUIViewController <MMSpecialMsgSearchHelperDelegate, FTSDetailResultViewControllerDelegate>
{
    MMSpecialMsgSearchHelper * m_specialMsgSearchHelper; // +0x68
    unsigned int m_detailSearchResultCount; // +0x70
    unsigned int m_resCount; // +0x74
    BOOL _isShowMsgSearch; // +0x78
}
- (id)init;
- (void)initGetSpecialMsgSearchHelper;
- (void)initIsShowMsgSearch;
- (unsigned int)getMsgSearchBusinessType;
- (void)handleMsgUpdateSearchBar:(id)arg1;
- (BOOL)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (BOOL)shouldHideNavigationBar;
- (void)openKFContact:(id)arg1;
- (BOOL)isKFContactMsgSearchBusinessType;
- (void)reportSearchButtonExposure;
- (void)msgSearchBarActiveForSpecialMsg;
- (void)msgSearchBarCancelForSpecialMsg;
- (void)msgSearchDidDismissForSpecialMsg;
- (void)msgSearchBarDoSearchForSpecialMsg;
- (BOOL)checkClusterUserNameForSpecialMsg:(id)arg1;
- (id)getChatContactForSpecialMsg;
- (void)startCustomizationSearchForSpecialMsg:(id)arg1;
- (id)getCustomizationCellForSpecialMsgInTableView:(id)arg1 result:(id)arg2 cellIndex:(id)arg3;
- (void)recombineCustomizationArrSearchResult:(id)arg1 searchText:(id)arg2;
- (void)recombineCustomizationKFSessionArrSearchResult:(id)arg1 searchText:(id)arg2;
- (id)getArrDetailSearchResult;
- (void)addMsgSessionFirstTitleCell:(id)arg1;
- (void)returenRecombineCustomizationArrSearchResult:(id)arg1 arrRecombineSearchResult:(id)arg2;
- (void)didCustomizationSearchSelectForSpecialMsg:(id)arg1 searchText:(id)arg2;
- (void)didCustomizationKFContactSearchSelectForSpecialMsg:(id)arg1 searchText:(id)arg2;
- (void)didCustomizationSearchSelectForSpecialMsgReport:(id)arg1;
- (void)search:(id)arg1;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSKFContactSearchResultChangedForDetail;
- (void)handleNavigationCancelItemClick;
- (BOOL)isShowMsgSearch;
- (void)setIsShowMsgSearch:(BOOL)arg1;
- (void).cxx_destruct;
@end

