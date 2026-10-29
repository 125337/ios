@interface MSESessionListContentView : UIView <MSETitleBarDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>
{
    UIViewController<MSESessionListContentViewDelegate> * _delegate; // +0x8
    NSExtensionContext * _extensionContext; // +0x10
    UITableView * _sessionListView; // +0x18
    NSArray * _sessionList; // +0x20
    NSMutableArray * _displaySessionList; // +0x28
    NSMutableDictionary * _headImgDict; // +0x30
    NSString * _currentSelectUsername; // +0x38
    long long _selectIndex; // +0x40
    UISearchBar * _searchBar; // +0x48
    MSESearchMgr * _searchMgr; // +0x50
}
+ (double)getSessionListContentViewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initData;
- (void)initView;
- (void)setCurrentSelectUsername:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 IndexPath:(id)arg2;
- (void)makeMoreCell:(id)arg1;
- (void)makeNotFoundCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)goWeChat;
- (void)jumpToWechat:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onLeftBtnPress;
- (void)onConfirmToSend;
- (void)makeSelectedSessionAtFirst;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)extensionContext;
- (void)setExtensionContext:(id)arg1;
- (id)sessionListView;
- (void)setSessionListView:(id)arg1;
- (id)sessionList;
- (void)setSessionList:(id)arg1;
- (id)displaySessionList;
- (void)setDisplaySessionList:(id)arg1;
- (id)headImgDict;
- (void)setHeadImgDict:(id)arg1;
- (id)currentSelectUsername;
- (long long)selectIndex;
- (void)setSelectIndex:(long long)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)searchMgr;
- (void)setSearchMgr:(id)arg1;
- (void).cxx_destruct;
@end

