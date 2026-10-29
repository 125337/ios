@interface _TtC6WeChat29WCPayLedgerCanlendarTableView : UIView <UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource>
{
     currentDate; // +0x8
     rangeIndicator; // +0x20
     tableView; // +0x28
     gradientLayer; // +0x30
     foregoingMonths; // +0x38
     dataSource; // +0x40
     selectButtonCollectView; // +0x48
     selectButtonDataSource; // +0x50
     currentSelectedButtonIndex; // +0x58
     dateHeaderTapAction; // +0x60
     selectedRangeUpdateAction; // +0x70
     selectedRange; // +0x80
}
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
