@interface ContactsSearchFilterTabBar : UIView <UIScrollViewDelegate>
{
    id <ContactsSearchFilterTabBarDelegate> _delegate; // +0x8
    UIScrollView * _scrollView; // +0x10
    ContactsFilterState * _filterState; // +0x18
    NSArray * _sourceNames; // +0x20
    NSArray * _sourceSceneSets; // +0x28
    NSArray * _tagList; // +0x30
    double _lastBuiltWidth; // +0x38
    long long _expandedSection; // +0x40
    UIControl * _allTab; // +0x48
    UIView * _allTabCover; // +0x50
    UIView * _allTabFade; // +0x58
    CAGradientLayer * _allTabFadeMask; // +0x60
    double _allTabNaturalX; // +0x68
    double _allTabWidth; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setSourceCandidatesWithNames:(id)arg1 sceneSets:(id)arg2;
- (void)setTagList:(id)arg1;
- (void)updateWithFilterState:(id)arg1;
- (void)markSectionExpanded:(long long)arg1;
- (void)clearExpandedSection;
- (double)heightForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)reloadTabs;
- (void)layoutAllTabSticky;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)isSectionVisible:(long long)arg1;
- (id)buildTabForSection:(long long)arg1;
- (id)selectedOptionNameForSection:(long long)arg1;
- (id)buildPillTabTitle:(id)arg1 selected:(BOOL)arg2 expanded:(BOOL)arg3 showArrow:(BOOL)arg4 section:(long long)arg5 action:(SEL)arg6;
- (id)makePillSelected:(BOOL)arg1;
- (id)makeLabelWithTitle:(id)arg1 selected:(BOOL)arg2 emphasized:(BOOL)arg3;
- (id)categoryNameForSection:(long long)arg1;
- (BOOL)isSectionSelected:(long long)arg1;
- (BOOL)isTimeSectionSelected:(long long)arg1;
- (id)selectedSourceName;
- (id)selectedTagName;
- (id)timeChipTextForSection:(long long)arg1;
- (id)timeValueTextStartYear:(long long)arg1 startMonth:(long long)arg2 endYear:(long long)arg3 endMonth:(long long)arg4;
- (void)onCategoryTabTapped:(id)arg1;
- (void)onTimeTabTapped:(id)arg1;
- (void)onAllTabTapped:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)filterState;
- (void)setFilterState:(id)arg1;
- (id)sourceNames;
- (void)setSourceNames:(id)arg1;
- (id)sourceSceneSets;
- (void)setSourceSceneSets:(id)arg1;
- (id)tagList;
- (double)lastBuiltWidth;
- (void)setLastBuiltWidth:(double)arg1;
- (long long)expandedSection;
- (void)setExpandedSection:(long long)arg1;
- (id)allTab;
- (void)setAllTab:(id)arg1;
- (id)allTabCover;
- (void)setAllTabCover:(id)arg1;
- (id)allTabFade;
- (void)setAllTabFade:(id)arg1;
- (id)allTabFadeMask;
- (void)setAllTabFadeMask:(id)arg1;
- (double)allTabNaturalX;
- (void)setAllTabNaturalX:(double)arg1;
- (double)allTabWidth;
- (void)setAllTabWidth:(double)arg1;
- (void).cxx_destruct;
@end
