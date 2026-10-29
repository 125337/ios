@interface WCAppAuthSearchTableViewCell : UITableViewCell
{
    WCAppAuthTableViewCellData * _cellData; // +0x8
    MMUILabel * _appNameLabel; // +0x10
    MMUILabel * _appTypeLabel; // +0x18
    UIView * _appTypeBgView; // +0x20
    UIView * _topLine; // +0x28
    UIView * _bottomLine; // +0x30
    UIView * _highlightMaskView; // +0x38
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCellData:(id)arg1;
- (void)initSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)cellData;
- (id)appNameLabel;
- (void)setAppNameLabel:(id)arg1;
- (id)appTypeLabel;
- (void)setAppTypeLabel:(id)arg1;
- (id)appTypeBgView;
- (void)setAppTypeBgView:(id)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
