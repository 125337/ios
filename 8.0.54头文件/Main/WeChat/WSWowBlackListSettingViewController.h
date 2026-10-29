@interface WSWowBlackListSettingViewController : MMUIViewController <ITopStoryColikeExt>
{
    BOOL _isRequestingHide; // +0x68
    BOOL _isRequestingBlock; // +0x69
    BOOL _isRequestHideByClick; // +0x6a
    BOOL _isRequestBlockByClick; // +0x6b
    MMTableViewInfo * _tableViewInfo; // +0x70
    NSString * _dontSeeCountStr; // +0x78
    NSString * _dontAllowSeeCountStr; // +0x80
    WSPersonalizedRecommendManager * _personalizedRecommendManager; // +0x88
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initNavBar;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)initView;
- (void)initData;
- (void)reloadTableView;
- (void)fixLoadingRect;
- (void)openOpnionFeedback:(id)arg1;
- (id)appendUrlString:(id)arg1 withKey:(id)arg2 stringValue:(id)arg3;
- (void)openDontSeeSomebody:(id)arg1;
- (void)openDontAllowSomebodySee:(id)arg1;
- (void)onRequestGetColikeBlockListEndResult:(BOOL)arg1 withType:(unsigned int)arg2 list:(id)arg3;
- (id)genPersonalizedRecommendCellManager;
- (void)onChangePersonalizedRecommendSwitch:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)dontSeeCountStr;
- (void)setDontSeeCountStr:(id)arg1;
- (id)dontAllowSeeCountStr;
- (void)setDontAllowSeeCountStr:(id)arg1;
- (BOOL)isRequestingHide;
- (void)setIsRequestingHide:(BOOL)arg1;
- (BOOL)isRequestingBlock;
- (void)setIsRequestingBlock:(BOOL)arg1;
- (BOOL)isRequestHideByClick;
- (void)setIsRequestHideByClick:(BOOL)arg1;
- (BOOL)isRequestBlockByClick;
- (void)setIsRequestBlockByClick:(BOOL)arg1;
- (id)personalizedRecommendManager;
- (void)setPersonalizedRecommendManager:(id)arg1;
- (void).cxx_destruct;
@end

