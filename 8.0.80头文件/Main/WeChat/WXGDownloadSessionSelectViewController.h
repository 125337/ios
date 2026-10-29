@interface WXGDownloadSessionSelectViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFilterViewDelegate, IRoamBackupPackageServiceExt>
{
    BOOL _isDelete; // +0x70
    BOOL _hideFilterView; // +0x71
    BOOL _bUpdate; // +0x72
    BOOL _bSelectAllTime; // +0x73
    id <WXGDownloadSessionViewControllerDelegate> _delegate; // +0x78
    MMTableView * _sessionTableView; // +0x80
    UIImageView * _footerImageView; // +0x88
    UIView * _seperatorLine; // +0x90
    UIButton * _selectAllButton; // +0x98
    UIButton * _nextStepButton; // +0xa0
    UILabel * _emptyTipLabel; // +0xa8
    UILabel * _loadingLabel; // +0xb0
    UILabel * _sizeLabel; // +0xb8
    MMUIActivityIndicatorView * _loadingIndicatorView; // +0xc0
    NSArray * _infoArray; // +0xc8
    NSMutableDictionary * _selectedInfoDict; // +0xd0
    WCFilterView * _filterView; // +0xd8
    UIView * _filterSeperatorLine; // +0xe0
    NSDate * _minDate; // +0xe8
    NSDate * _maxDate; // +0xf0
    NSDate * _selectBeginDate; // +0xf8
    NSDate * _selectEndDate; // +0x100
    unsigned long long _lastSelectTimeIndex; // +0x108
    unsigned long long _selectedTotalSize; // +0x110
}
+ (id)getDateWithoutHMS:(id)arg1;
- (id)init;
- (void)updateWithInfo:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)makeFilterView;
- (id)p_getFilterSection;
- (id)getTimeSection;
- (void)makeTableView;
- (void)resetSelectedAndMakeEmptyView;
- (void)startLoading;
- (void)initView;
- (void)updateView;
- (void)updateTableView;
- (void)updateTableFooterView;
- (void)resetEmptyTipLabelWithTip:(id)arg1;
- (void)resetLoadingTip:(id)arg1;
- (void)initFooterPannelView;
- (void)updateFooterPannelView;
- (CGRect)getTableViewFrame;
- (id)getSelectButtonTitle;
- (void)onCancel;
- (void)onDone;
- (void)dismissAndCallDelegete;
- (void)onSelecteAll;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (id)getCurrentViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDelete;
- (void)setIsDelete:(BOOL)arg1;
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
- (id)infoArray;
- (void)setInfoArray:(id)arg1;
- (id)selectedInfoDict;
- (void)setSelectedInfoDict:(id)arg1;
- (BOOL)bUpdate;
- (void)setBUpdate:(BOOL)arg1;
- (id)filterView;
- (void)setFilterView:(id)arg1;
- (id)filterSeperatorLine;
- (void)setFilterSeperatorLine:(id)arg1;
- (id)minDate;
- (void)setMinDate:(id)arg1;
- (id)maxDate;
- (void)setMaxDate:(id)arg1;
- (id)selectBeginDate;
- (void)setSelectBeginDate:(id)arg1;
- (id)selectEndDate;
- (void)setSelectEndDate:(id)arg1;
- (BOOL)bSelectAllTime;
- (void)setBSelectAllTime:(BOOL)arg1;
- (unsigned long long)lastSelectTimeIndex;
- (void)setLastSelectTimeIndex:(unsigned long long)arg1;
- (unsigned long long)selectedTotalSize;
- (void)setSelectedTotalSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
