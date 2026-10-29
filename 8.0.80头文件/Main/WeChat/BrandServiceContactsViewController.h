@interface BrandServiceContactsViewController : BrandContactsViewController
- (void)viewDidLoad;
- (BOOL)isContactNeedExtraFiltered:(id)arg1;
- (id)vcTitle;
- (id)bottomCountString;
- (unsigned int)searchbarScene;
- (id)webSearchSuffix;
- (id)getSearchEmptyTipsLabelText;
- (void)onShowSearchBrandView:(id)arg1;
- (void)onShowAuthList;
- (unsigned long long)getContactsDataScene;
- (unsigned int)getFTSSearchType;
- (unsigned long long)getAsyncSearchOption;
- (void)tableViewWillDisplayRowAtIndexPath:(id)arg1 contact:(id)arg2;
- (void)tableViewDidSelectRowAtIndexPath:(id)arg1 contact:(id)arg2;
- (id)getContactResultKey;
@end
