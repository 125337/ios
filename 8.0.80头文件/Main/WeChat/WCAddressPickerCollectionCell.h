@interface WCAddressPickerCollectionCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource, ILinkEventExt>
{
    id <WCAddressTableViewDelegate> m_delegate; // +0x8
    NSString * m_selectedString; // +0x10
    double m_pickerGroupHeight; // +0x18
    double m_topBarCellHeight; // +0x20
    UITableViewCell * m_defaultTopCell; // +0x28
    UITableViewCell * m_streetTipCell; // +0x30
    UITableView * _tableView; // +0x38
    NSMutableArray * _stageData; // +0x40
    NSString * _tipLabel; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedString:(id)arg1;
- (void)setTopBarHeight:(double)arg1 andBtnViewHeight:(double)arg2;
- (id)defaultTopCell;
- (id)tipCellForTableView:(id)arg1 tipContent:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)jumpToSelectRow;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)needDisplayTipCell;
- (long long)otherCellNumber;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)stageData;
- (void)setStageData:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (void).cxx_destruct;
@end
