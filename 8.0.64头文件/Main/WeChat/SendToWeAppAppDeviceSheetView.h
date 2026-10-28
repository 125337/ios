@interface SendToWeAppAppDeviceSheetView : MMAutoLayoutSheetView <UITableViewDelegate, UITableViewDataSource, SendToWeAppAppDeviceADCellDelegate>
{
    BOOL _needSelectMsgSection; // +0x8
    BOOL _needADSection; // +0x9
    NSObject<SendToWeAppAppDeviceSheetViewDelegate> * _delegate; // +0x10
    NSDictionary * _reportParams; // +0x18
    WCActionSheetRecentItemsManager * _itemsManager; // +0x20
    NSArray * _items; // +0x28
    UITableView * _tableView; // +0x30
    double _defaultHeight; // +0x38
    SendToWeAppAppDeviceADCell * _adCell; // +0x40
    SendToWeAppAppDeviceSheetViewConfig * _config; // +0x48
    MagicAdInfo * _adInfo; // +0x50
    NSArray * _sectionTypes; // +0x58
    long long _maxShowIndex; // +0x60
}
- (id)initWithItemsManager:(id)arg1 config:(id)arg2 adInfo:(id)arg3;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (void)initConfigs;
- (void)initView;
- (void)genSectionTypes;
- (void)layoutSubviews;
- (double)pageSheetContentHeight;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2;
- (id)getAllAppsParams;
- (id)getExposeAppsAndAllAppsParams;
- (void)reportViewExpose;
- (void)onClickDetailBtn;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clickOnCloseAD;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (id)itemsManager;
- (void)setItemsManager:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)needSelectMsgSection;
- (void)setNeedSelectMsgSection:(BOOL)arg1;
- (BOOL)needADSection;
- (void)setNeedADSection:(BOOL)arg1;
- (double)defaultHeight;
- (void)setDefaultHeight:(double)arg1;
- (id)adCell;
- (void)setAdCell:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)sectionTypes;
- (void)setSectionTypes:(id)arg1;
- (long long)maxShowIndex;
- (void)setMaxShowIndex:(long long)arg1;
- (void).cxx_destruct;
@end
