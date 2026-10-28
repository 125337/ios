@interface WCFinderCreatorCenterViewController : MMUIViewController <WCFinderRedDotExt>
{
    BOOL _hasExposeAnchorTaskEntrance; // +0x70
    BOOL _hasExposeAnchorTaskRedDot; // +0x71
    WCFinderContact * _contact; // +0x78
    FinderNewUserPrepareResponse * _userPrepare; // +0x80
    WCTableViewManager * _tableViewManager; // +0x88
}
- (id)initWithContact:(id)arg1 userPrepare:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupTableView;
- (void)reloadTableView;
- (void)addAuthSection;
- (void)onClickAuth;
- (void)addOriginalCellToSection:(id)arg1;
- (BOOL)enableShowOriginalEntry;
- (void)clickOriginalCertification;
- (void)addLiveSection;
- (void)addLiveAnchorTaskSection:(id)arg1;
- (void)clickLiveIncome;
- (void)showIncomVC;
- (void)showLiveAgencyWebPage;
- (BOOL)checkAccountLogout;
- (void)clickLiveAnchorTaskEntrance;
- (void)clickLiveLottery;
- (void)addStoreSection;
- (void)clickStore;
- (void)addOtherSection;
- (void)clickProduceGuide;
- (id)produceGuideUrl;
- (void)addToSection:(id)arg1 withTitle:(id)arg2 status:(id)arg3 action:(SEL)arg4;
- (void)addToSection:(id)arg1 withTitle:(id)arg2 action:(SEL)arg3;
- (id)makeSectionSeparator;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)updateOriginalPlainRedDotWithPathKey:(id)arg1;
- (void)openMiniAppSilence;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)userPrepare;
- (void)setUserPrepare:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (BOOL)hasExposeAnchorTaskEntrance;
- (void)setHasExposeAnchorTaskEntrance:(BOOL)arg1;
- (BOOL)hasExposeAnchorTaskRedDot;
- (void)setHasExposeAnchorTaskRedDot:(BOOL)arg1;
- (void).cxx_destruct;
@end
