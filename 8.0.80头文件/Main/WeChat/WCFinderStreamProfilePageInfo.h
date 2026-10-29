@interface WCFinderStreamProfilePageInfo : NSObject
{
    BOOL _display; // +0x8
    Class _pageClass; // +0x10
    NSArray * _overviewSections; // +0x18
    NSArray * _overviewCaches; // +0x20
    id /* block */ _storeExtInfoAction; // +0x28
    WCFinderCGIProfile * _cgiProfile; // +0x30
}
+ (id)pageInfoFor:(id)arg1;
- (Class)pageClass;
- (void)setPageClass:(Class)arg1;
- (BOOL)display;
- (void)setDisplay:(BOOL)arg1;
- (id)overviewSections;
- (void)setOverviewSections:(id)arg1;
- (id)overviewCaches;
- (void)setOverviewCaches:(id)arg1;
- (id /* block */)storeExtInfoAction;
- (void)setStoreExtInfoAction:(id /* block */)arg1;
- (id)cgiProfile;
- (void)setCgiProfile:(id)arg1;
- (void).cxx_destruct;
@end
