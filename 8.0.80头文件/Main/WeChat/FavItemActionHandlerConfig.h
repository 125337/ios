@interface FavItemActionHandlerConfig : NSObject
{
    BOOL _preservesSearchHeaderInMultiSelect; // +0x8
    int _listPageType; // +0xc
    unsigned int _entranceScene; // +0x10
    UIViewController * _viewController; // +0x18
    MMTableView * _tableView; // +0x20
    FavBaseTableDataController * _dataController; // +0x28
    FavSearchBar * _searchBar; // +0x30
    unsigned long long _supportedActions; // +0x38
    unsigned long long _multiSelectToolButtons; // +0x40
    NSString * _multiSelectDefaultTitle; // +0x48
    NSString * _multiSelectCountTitleFormat; // +0x50
    id /* block */ _searchMultiSelectLayoutHandler; // +0x58
    id /* block */ _searchTaskKeyProvider; // +0x60
}
+ (id)configWithViewController:(id)arg1 tableView:(id)arg2 dataController:(id)arg3;
- (id)init;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (unsigned long long)supportedActions;
- (void)setSupportedActions:(unsigned long long)arg1;
- (unsigned long long)multiSelectToolButtons;
- (void)setMultiSelectToolButtons:(unsigned long long)arg1;
- (int)listPageType;
- (void)setListPageType:(int)arg1;
- (unsigned int)entranceScene;
- (void)setEntranceScene:(unsigned int)arg1;
- (id)multiSelectDefaultTitle;
- (void)setMultiSelectDefaultTitle:(id)arg1;
- (id)multiSelectCountTitleFormat;
- (void)setMultiSelectCountTitleFormat:(id)arg1;
- (BOOL)preservesSearchHeaderInMultiSelect;
- (void)setPreservesSearchHeaderInMultiSelect:(BOOL)arg1;
- (id /* block */)searchMultiSelectLayoutHandler;
- (void)setSearchMultiSelectLayoutHandler:(id /* block */)arg1;
- (id /* block */)searchTaskKeyProvider;
- (void)setSearchTaskKeyProvider:(id /* block */)arg1;
- (void).cxx_destruct;
@end
