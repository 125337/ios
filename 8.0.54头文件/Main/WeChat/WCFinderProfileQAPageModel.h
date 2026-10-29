@interface WCFinderProfileQAPageModel : WCFinderStreamProfilePageModel
{
    FinderUserPageSectionQAInfo * _qaInfo; // +0x8
}
+ (int)tabId;
+ (id)overviewSectionTypes;
- (id)qaInfo;
- (BOOL)shouldDisplayTab;
- (id)viewPageClassName;
- (id)displayName;
- (void)_updateQAOverviewSection;
- (void)requestPageData;
- (void)setQaInfo:(id)arg1;
- (void).cxx_destruct;
@end

