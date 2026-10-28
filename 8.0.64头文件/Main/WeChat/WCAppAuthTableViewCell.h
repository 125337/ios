@interface WCAppAuthTableViewCell : MMMultiMenuTableViewCell
{
    WCAppAuthTableViewCellData * _cellData; // +0x40
    id <WCAppAuthTableViewCellDelegate> _delegate; // +0x48
    MMUILabel * _appNameLabel; // +0x50
    MMUILabel * _appTypeLabel; // +0x58
    UIView * _appTypeBgView; // +0x60
    MMUILabel * _scopeLabel; // +0x68
    UIImageView * _arrowView; // +0x70
    UIView * _topLine; // +0x78
    UIView * _bottomLine; // +0x80
    UIView * _highlightMaskView; // +0x88
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCellData:(id)arg1;
- (void)initSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)onMultiMenuAppear;
- (void)layoutSubviews;
- (id)cellData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appNameLabel;
- (void)setAppNameLabel:(id)arg1;
- (id)appTypeLabel;
- (void)setAppTypeLabel:(id)arg1;
- (id)appTypeBgView;
- (void)setAppTypeBgView:(id)arg1;
- (id)scopeLabel;
- (void)setScopeLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
