@interface QIndoorPicker : UIView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isDarkStyle; // +0x8
    int _indoorPickerMaxLevels; // +0xc
    id <QIndoorPickerDelegate> _delegate; // +0x10
    NSString * _fontName; // +0x18
    UITableView * _tableView; // +0x20
    UILabel * _head; // +0x28
    QIndoorBuilding * _indoorBuilding; // +0x30
    QIndicatorLayer * _indicator; // +0x38
}
- (void)setFontName:(id)arg1;
- (void)callDelegateDidSelectLevelIndex:(unsigned long long)arg1;
- (void)selectLevelIndex:(unsigned long long)arg1;
- (void)reloadWithIndoorBuilding:(id)arg1 levelIndex:(unsigned long long)arg2;
- (void)updateInicator:(id)arg1;
- (void)setIsDarkStyle:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)setupBackBorder;
- (void)setupTopUI;
- (void)setupTableView;
- (CGRect)getDynamicPickerRect:(long long)arg1;
- (CGRect)adjustTableViewRect:(CGRect)arg1;
- (id)initWithIndoorBuilding:(id)arg1 levelIndex:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fontName;
- (int)indoorPickerMaxLevels;
- (void)setIndoorPickerMaxLevels:(int)arg1;
- (BOOL)isDarkStyle;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)head;
- (void)setHead:(id)arg1;
- (id)indoorBuilding;
- (void)setIndoorBuilding:(id)arg1;
- (id)indicator;
- (void)setIndicator:(id)arg1;
- (void).cxx_destruct;
@end
