@interface MMEmotionStoreViewController : MMUIViewController <EmoticonStoreMgrExt>
{
    MMWechatEmotionsViewController * _wechatEmotionsViewController; // +0x70
    StoreEmotionHomePageViewController * _homePageViewController; // +0x78
    MMPersonalEmotionsViewController * _personalEmotionsViewContrller; // +0x80
    UIImageView * _badgeView; // +0x88
    unsigned int _scene; // +0x90
    BOOL _isReport; // +0x94
    int m_defaultSelectedTag; // +0x98
    BOOL _newHomePage; // +0x9c
    id /* block */ _onCanelModelViewBlock; // +0xa0
    unsigned long long _searchScene; // +0xa8
    MMUnderlineTabsView * _sectionTab; // +0xb0
    NSMutableArray * _sectionItems; // +0xb8
}
- (id)init;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithEmotionScene:(unsigned int)arg1 withRequestType:(unsigned int)arg2;
- (id)initWithEmotionScene:(unsigned int)arg1 AndDefaultTag:(int)arg2;
- (void)initSearchScene;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)configViews;
- (BOOL)isNeedPersonalViewTab;
- (void)configViewControllers;
- (void)OnCancelModalView:(id)arg1;
- (void)onOperate;
- (BOOL)isSupportEmojiPrivacySetting;
- (void)jumpNewPersonalCenterLiteApp;
- (void)configSections;
- (id)genTabItemWithTitle:(id)arg1 isSelected:(BOOL)arg2;
- (void)updateNew:(BOOL)arg1;
- (void)longPressTab:(id)arg1;
- (void)clickWechatEmotionsTab;
- (void)clickPersonalEmotionsTab;
- (void)replaceFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)clickEmotionCharts;
- (void)OnEmoticonExptConfigChange:(unsigned long long)arg1;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)registerYReportSdk;
- (id /* block */)onCanelModelViewBlock;
- (void)setOnCanelModelViewBlock:(id /* block */)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (id)sectionTab;
- (void)setSectionTab:(id)arg1;
- (id)sectionItems;
- (void)setSectionItems:(id)arg1;
- (BOOL)newHomePage;
- (void)setNewHomePage:(BOOL)arg1;
- (void).cxx_destruct;
@end
