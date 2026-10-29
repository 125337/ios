@interface MMFinderLiveFansGroupDetailCollectionViewCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource, MMLiveTabsBarViewDelegate, MMTableViewDelegate>
{
    BOOL _shouldAdaptToDarkLight; // +0x8
    BOOL _needAutoSwitchToRightsTab; // +0x9
    BOOL _tableViewsAlreadyReset; // +0xa
    BOOL _hasReportRightsExposed; // +0xb
    BOOL _hasReportNoticeExposed; // +0xc
    BOOL _hasReportImageClicked; // +0xd
    id <MMFinderLiveFansGroupDetailCollectionViewCellDelegate> _cellDelegate; // +0x10
    UIScrollView * _linkedScrollView; // +0x18
    UIScrollView * _scrollView; // +0x20
    NSArray * _tableViews; // +0x28
    UITableView * _upgradeTableView; // +0x30
    UITableView * _rightsTableView; // +0x38
    NSArray * _upgradeInfos; // +0x40
    long long _currentPage; // +0x48
    MMLiveTabsBarView * _tabsView; // +0x50
    NSArray * _rightInfos; // +0x58
    MMFinderLiveFansGroupIntimacyInfo * _fansIntimacyInfo; // +0x60
    MMFinderLiveFansGroupInfo * _fansGroupInfo; // +0x68
    NSMutableArray * _rightsTableInfoSectionCellClasses; // +0x70
    UITableViewCell * _fansNoticeCell; // +0x78
    CGPoint _tableViewInitialOffset; // +0x80
    CGPoint _tableViewPanLastTranslation; // +0x90
    CGRect _layoutRect; // +0xa0
}
+ (id)reuseId;
- (void)layoutSubviews;
- (void)initUI;
- (id)buildTableView;
- (void)updateWithUpgradeInfos:(id)arg1;
- (void)updateWithFansIntimacyInfo:(id)arg1 fansGroupInfo:(id)arg2;
- (void)setScrollViewToLink:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)resetTableViewsExcept:(id)arg1;
- (void)setNeedAutoSwitchToRightsTab:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tabsBarView:(id)arg1 didClickTabAtIndex:(unsigned long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getSuperfanExclusiveItems;
- (BOOL)isSuperfan;
- (BOOL)shouldShowUnsubsribe;
- (BOOL)shouldShowFanNoticeCell;
- (BOOL)shouldShowAnchorCard;
- (void)prepareFanRightInfosForDisplay;
- (void)autoSwitchToRightsTabIfNeeded;
- (BOOL)mmTableView:(id)arg1 shouldBeginRecognizeGesture:(id)arg2;
- (id)rightsTableInfoSectionCellClasses;
- (void)reportRightsTabExposed;
- (void)reportNoticeCellExposed;
- (void)reportNoticeImageClick;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (BOOL)shouldAdaptToDarkLight;
- (void)setShouldAdaptToDarkLight:(BOOL)arg1;
- (BOOL)needAutoSwitchToRightsTab;
- (id)linkedScrollView;
- (void)setLinkedScrollView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)tableViews;
- (void)setTableViews:(id)arg1;
- (id)upgradeTableView;
- (void)setUpgradeTableView:(id)arg1;
- (id)rightsTableView;
- (void)setRightsTableView:(id)arg1;
- (id)upgradeInfos;
- (void)setUpgradeInfos:(id)arg1;
- (CGRect)layoutRect;
- (void)setLayoutRect:(CGRect)arg1;
- (CGPoint)tableViewInitialOffset;
- (void)setTableViewInitialOffset:(CGPoint)arg1;
- (CGPoint)tableViewPanLastTranslation;
- (void)setTableViewPanLastTranslation:(CGPoint)arg1;
- (long long)currentPage;
- (void)setCurrentPage:(long long)arg1;
- (BOOL)tableViewsAlreadyReset;
- (void)setTableViewsAlreadyReset:(BOOL)arg1;
- (id)tabsView;
- (void)setTabsView:(id)arg1;
- (id)rightInfos;
- (void)setRightInfos:(id)arg1;
- (id)fansIntimacyInfo;
- (void)setFansIntimacyInfo:(id)arg1;
- (id)fansGroupInfo;
- (void)setFansGroupInfo:(id)arg1;
- (void)setRightsTableInfoSectionCellClasses:(id)arg1;
- (BOOL)hasReportRightsExposed;
- (void)setHasReportRightsExposed:(BOOL)arg1;
- (BOOL)hasReportNoticeExposed;
- (void)setHasReportNoticeExposed:(BOOL)arg1;
- (BOOL)hasReportImageClicked;
- (void)setHasReportImageClicked:(BOOL)arg1;
- (id)fansNoticeCell;
- (void)setFansNoticeCell:(id)arg1;
- (void).cxx_destruct;
@end
