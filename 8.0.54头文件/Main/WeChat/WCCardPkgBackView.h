@interface WCCardPkgBackView : MMUIView <UITableViewDelegate, UITableViewDataSource, WCCardPkgBackTableViewDelegate>
{
    NSArray * _sameTpCardDataListList; // +0x8
    id <WCCardPkgBackViewDelegate> _delegate; // +0x10
    WCCardPkgBackTableView * _tableView; // +0x18
    MMUIButton * _sureButton; // +0x20
    CAGradientLayer * _maskLayer; // +0x28
}
- (id)init;
- (id)tableView;
- (id)sureButton;
- (id)maskLayer;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)WXCardPkgTableViewMaxHeight;
- (void)WXCardPkgTableViewHeight:(double)arg1 scrollEnabled:(BOOL)arg2;
- (void)sureButtonDidSelected;
- (void)setSameTpCardDataListList:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setSureButtonColor:(id)arg1;
- (void)setSureButtonText:(id)arg1;
- (void)setSureButtonAbled:(BOOL)arg1;
- (void)reloadTableViewData;
- (void)configurateCell:(id)arg1;
- (void)loadCellSubView:(id)arg1 cardIndex:(long long)arg2;
- (void)handleIsHaveAvailableCardWithList:(id)arg1;
- (id)sameTpCardDataListList;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setSureButton:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end

