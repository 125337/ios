@interface BEBrandContactsViewController : BrandContactsViewController
- (void)viewDidLoad;
- (BOOL)isContactNeedExtraFiltered:(id)arg1;
- (id)vcTitle;
- (id)bottomCountString;
- (unsigned int)searchbarScene;
- (id)webSearchSuffix;
- (void)initNavbar;
- (void)tableViewWillDisplayRowAtIndexPath:(id)arg1 contact:(id)arg2;
- (void)tableViewDidSelectRowAtIndexPath:(id)arg1 contact:(id)arg2;
@end

