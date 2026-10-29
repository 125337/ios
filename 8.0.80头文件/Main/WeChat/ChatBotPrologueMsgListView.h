@interface ChatBotPrologueMsgListView : UIView <ChatBotPrologueMsgDataSourceDelegate>
{
    BOOL _isHistoryList; // +0x8
    id <ChatBotPrologueMsgListViewDelegate> _delegate; // +0x10
    MMTableView * _tableView; // +0x18
    ChatBotPrologueMsgDataSource * _dataSource; // +0x20
    CAGradientLayer * _topGradientMaskLayer; // +0x28
    CAGradientLayer * _bottomGradientMaskLayer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutTableView;
- (void)addGradientMask;
- (long long)getMsgCount;
- (void)changeToHistoryList;
- (void)updateBottomMaskColor:(id)arg1;
- (void)updateTopMaskColor:(id)arg1;
- (void)setMaskHidden:(BOOL)arg1;
- (void)onPrologueMsgListDataFirstLoadComplete;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isHistoryList;
- (void)setIsHistoryList:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)topGradientMaskLayer;
- (void)setTopGradientMaskLayer:(id)arg1;
- (id)bottomGradientMaskLayer;
- (void)setBottomGradientMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
