@interface WXGRoamChooseRangeViewCell : UITableViewCell
{
    BOOL _isShowExtra; // +0x8
    UIView * _cardView; // +0x10
    UILabel * _topLabel; // +0x18
    UIView * _rangeView; // +0x20
    UIImageView * _rangeArrow; // +0x28
    UILabel * _rangeTextLabel; // +0x30
    UIView * _excludeView; // +0x38
    UIView * _timeFilterView; // +0x40
    UILabel * _excludeTitle; // +0x48
    UILabel * _excludeLabel; // +0x50
    UIImageView * _excludeArror; // +0x58
    UILabel * _timeFilterLabel; // +0x60
    id /* block */ _reloadBlock; // +0x68
    UIView * _selectExtraView; // +0x70
    UIImageView * _selectExtraArrow; // +0x78
    double _cellHeight; // +0x80
    double _cellWidth; // +0x88
    unsigned long long _cellIndex; // +0x90
}
- (void)setWidth:(double)arg1;
- (void)setupViews;
- (void)updateIsShowExtra;
- (void)updateExcludeView;
- (void)updateTimeView;
- (void)updateRangeView;
- (void)onDeleteCell;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)topLabel;
- (void)setTopLabel:(id)arg1;
- (id)rangeView;
- (void)setRangeView:(id)arg1;
- (id)rangeArrow;
- (void)setRangeArrow:(id)arg1;
- (id)rangeTextLabel;
- (void)setRangeTextLabel:(id)arg1;
- (id)excludeView;
- (void)setExcludeView:(id)arg1;
- (id)timeFilterView;
- (void)setTimeFilterView:(id)arg1;
- (id)excludeTitle;
- (void)setExcludeTitle:(id)arg1;
- (id)excludeLabel;
- (void)setExcludeLabel:(id)arg1;
- (id)excludeArror;
- (void)setExcludeArror:(id)arg1;
- (id)timeFilterLabel;
- (void)setTimeFilterLabel:(id)arg1;
- (id /* block */)reloadBlock;
- (void)setReloadBlock:(id /* block */)arg1;
- (id)selectExtraView;
- (void)setSelectExtraView:(id)arg1;
- (id)selectExtraArrow;
- (void)setSelectExtraArrow:(id)arg1;
- (BOOL)isShowExtra;
- (void)setIsShowExtra:(BOOL)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (unsigned long long)cellIndex;
- (void)setCellIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
