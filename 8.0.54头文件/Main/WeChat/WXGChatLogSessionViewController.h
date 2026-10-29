@interface WXGChatLogSessionViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IChatLogDataMgrExt, WCFilterViewDelegate>
{
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrAllSessionItem; // +0x68
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrSelectedData; // +0x80
    BOOL _showSelectTime; // +0x98
    BOOL _showSelectTextOnly; // +0x99
    BOOL _hideFilterView; // +0x9a
    BOOL _bSelectAllTime; // +0x9b
    BOOL _bSelectTextOnly; // +0x9c
    BOOL _bLoadDataEnd; // +0x9d
    NSString * _emptyTipString; // +0xa0
    NSString * _sizeRemindString; // +0xa8
    NSString * _titleString; // +0xb0
    unsigned long long _textType; // +0xb8
    id <WXGChatLogSessionViewControllerDelegate> _delegate; // +0xc0
    id /* block */ _completionHandler; // +0xc8
    MMTableView * _sessionTableView; // +0xd0
    UIImageView * _footerImageView; // +0xd8
    UIView * _seperatorLine; // +0xe0
    UIButton * _selectAllButton; // +0xe8
    UIButton * _nextStepButton; // +0xf0
    UILabel * _emptyTipLabel; // +0xf8
    UILabel * _loadingLabel; // +0x100
    UILabel * _sizeLabel; // +0x108
    MMUIActivityIndicatorView * _loadingIndicatorView; // +0x110
    WCFilterView * _filterView; // +0x118
    UIView * _filterSeperatorLine; // +0x120
    NSDate * _minDate; // +0x128
    NSDate * _maxDate; // +0x130
    NSDate * _selectBeginDate; // +0x138
    NSDate * _selectEndDate; // +0x140
    unsigned long long _lastSelectTimeIndex; // +0x148
}
+ (id)getDateWithoutHMS:(id)arg1;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)makeFilterView;
- (void)makeTableView;
- (void)makeEmptyView;
- (void)initView;
- (void)initData;
- (void)reInitData;
- (void)updateView;
- (void)updateFilterView;
- (void)updateTableView;
- (void)updateTableFooterView;
- (void)resetEmptyTipLabelWithTip:(id)arg1;
- (void)resetLoadingTip:(id)arg1;
- (void)initFooterPannelView;
- (void)updateFooterPannelView;
- (CGRect)getTableViewFrame;
- (id)getSelectButtonTitle;
- (id)getDataSizeShowString:(const void *)arg1;
- (void)onCancel;
- (void)onDone;
- (void)onSelecteAll;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (void)onChatLogDataLoad:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (id)getTimeSection;
- (id)getTypeSection;
- (id)p_getFilterSection;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (id)getCurrentViewController;
- (BOOL)showSelectTime;
- (void)setShowSelectTime:(BOOL)arg1;
- (BOOL)showSelectTextOnly;
- (void)setShowSelectTextOnly:(BOOL)arg1;
- (id)emptyTipString;
- (void)setEmptyTipString:(id)arg1;
- (id)sizeRemindString;
- (void)setSizeRemindString:(id)arg1;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (unsigned long long)textType;
- (void)setTextType:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (BOOL)hideFilterView;
- (void)setHideFilterView:(BOOL)arg1;
- (id)sessionTableView;
- (void)setSessionTableView:(id)arg1;
- (id)footerImageView;
- (void)setFooterImageView:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)selectAllButton;
- (void)setSelectAllButton:(id)arg1;
- (id)nextStepButton;
- (void)setNextStepButton:(id)arg1;
- (id)emptyTipLabel;
- (void)setEmptyTipLabel:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (id)filterView;
- (void)setFilterView:(id)arg1;
- (id)filterSeperatorLine;
- (void)setFilterSeperatorLine:(id)arg1;
- (id)minDate;
- (void)setMinDate:(id)arg1;
- (id)maxDate;
- (void)setMaxDate:(id)arg1;
- (BOOL)bSelectAllTime;
- (void)setBSelectAllTime:(BOOL)arg1;
- (BOOL)bSelectTextOnly;
- (void)setBSelectTextOnly:(BOOL)arg1;
- (id)selectBeginDate;
- (void)setSelectBeginDate:(id)arg1;
- (id)selectEndDate;
- (void)setSelectEndDate:(id)arg1;
- (unsigned long long)lastSelectTimeIndex;
- (void)setLastSelectTimeIndex:(unsigned long long)arg1;
- (BOOL)bLoadDataEnd;
- (void)setBLoadDataEnd:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

