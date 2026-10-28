@interface WCFinderLiveSimpleVersionChooseView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isSimpleVersion; // +0x8
    id <MMFinderLiveSimpleVersionChooseViewDelegate> _delegate; // +0x10
    NSMutableArray * _dataArray; // +0x18
    CAShapeLayer * _shapeLayer; // +0x20
    UIView * _contentView; // +0x28
    MMTableView * _tableView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithSimpleVersion:(BOOL)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)leftButtonAction;
- (double)contentViewHeight;
- (double)getTableHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView;
- (id)contentView;
- (void)pageSheetDidDisappear;
- (id)dataArray;
- (BOOL)isSimpleVersion;
- (void)setIsSimpleVersion:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDataArray:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
