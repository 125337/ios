@interface GameCenterMsgListBaseTabViewController : GameCenterNativeVc <UITableViewDataSource, UITableViewDelegate, GameVideoAlbumControllerDelegate, WCActionSheetDelegate>
{
    BOOL _useAsChildViewController; // +0x68
    BOOL _isInTab; // +0x69
    BOOL _hasMoreRead; // +0x6a
    unsigned int _sourceScene; // +0x6c
    unsigned int _showType; // +0x70
    unsigned int _lastLocalId; // +0x74
    NSMutableArray * _unreadMsgList; // +0x78
    NSString * _focusMsgId; // +0x80
    MMTableView * _tableView; // +0x88
    NSMutableArray * _readMsgList; // +0x90
    NSString * _cellReuseIdentifier; // +0x98
    Class _cellClassType; // +0xa0
    UINavigationController * _startViewController; // +0xa8
    long long _focusUnreadIndex; // +0xb0
    NSIndexPath * _focusUnreadIndexPath; // +0xb8
    NSIndexPath * _highLightIndexPath; // +0xc0
    GCTableViewSource * _tableViewSource; // +0xc8
    GCTableViewSecionModel * _unreadSection; // +0xd0
    GCTableViewSecionModel * _readSection; // +0xd8
}
- (id)init;
- (id)searchMessageWithSvrId:(id)arg1;
- (void)setFocusMsgId:(id)arg1;
- (void)viewDidLoad;
- (void)fakeFocusMsgId;
- (void)initTableViewSource;
- (id)beginSectionModelArray;
- (id)subClassHandleCellForRowAtIndexPath:(id)arg1;
- (void)subClassHandleWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)subClassHandleDidSelectRowAtIndexPath:(id)arg1;
- (BOOL)isSectionUnReadSection:(unsigned long long)arg1;
- (BOOL)isSectionReadSection:(unsigned long long)arg1;
- (BOOL)isContentSection:(unsigned long long)arg1;
- (unsigned long long)indexForSectionModel:(id)arg1;
- (id)sectionModelForIndex:(unsigned long long)arg1;
- (BOOL)isEmpty;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)onRightBtnClick:(id)arg1;
- (void)reportObj12909WithAction:(long long)arg1 uiarea:(long long)arg2 position:(unsigned int)arg3 extInfo:(id)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)tableViewBgColor;
- (void)setupTableView;
- (id)navigationBarBackgroundColor;
- (void)checkShowEmpty;
- (void)showEmptyView;
- (void)tryLoadMoreData;
- (void)loadMoreData;
- (void)onLoadNewList:(id)arg1;
- (unsigned int)showType;
- (id)cellReuseIdentifier;
- (Class)cellClassType;
- (id)msgListName;
- (id)getDataArrayForSection:(long long)arg1;
- (id)getCellDataForIndexPath:(id)arg1;
- (void)handleQuickJump;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)removeHightCell;
- (BOOL)hasTitleBetweenUnreadAndReadSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)jumpWithJumpInfo:(id)arg1 indexPath:(id)arg2 cellData:(id)arg3;
- (long long)jumpToWebView:(id)arg1;
- (void)jumpHalfScreenWebView:(id)arg1;
- (void)reportMsgExplosure:(unsigned int)arg1 reportType:(unsigned int)arg2 externInfoBuilder:(id /* block */)arg3;
- (id)buildReportObj12909WithArea:(long long)arg1 action:(long long)arg2 position:(unsigned int)arg3 reportType:(unsigned int)arg4 externInfoBuilder:(id /* block */)arg5;
- (void)clearAllMsg;
- (id)unreadMsgList;
- (void)setUnreadMsgList:(id)arg1;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (id)focusMsgId;
- (BOOL)useAsChildViewController;
- (void)setUseAsChildViewController:(BOOL)arg1;
- (BOOL)isInTab;
- (void)setIsInTab:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)readMsgList;
- (void)setReadMsgList:(id)arg1;
- (void)setShowType:(unsigned int)arg1;
- (void)setCellReuseIdentifier:(id)arg1;
- (void)setCellClassType:(Class)arg1;
- (unsigned int)lastLocalId;
- (void)setLastLocalId:(unsigned int)arg1;
- (BOOL)hasMoreRead;
- (void)setHasMoreRead:(BOOL)arg1;
- (id)startViewController;
- (void)setStartViewController:(id)arg1;
- (long long)focusUnreadIndex;
- (void)setFocusUnreadIndex:(long long)arg1;
- (id)focusUnreadIndexPath;
- (void)setFocusUnreadIndexPath:(id)arg1;
- (id)highLightIndexPath;
- (void)setHighLightIndexPath:(id)arg1;
- (id)tableViewSource;
- (void)setTableViewSource:(id)arg1;
- (id)unreadSection;
- (void)setUnreadSection:(id)arg1;
- (id)readSection;
- (void)setReadSection:(id)arg1;
- (void).cxx_destruct;
@end

