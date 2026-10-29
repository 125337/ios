@interface MMAuthorizeGameInfoCell : UITableViewCell
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _descLabel; // +0x10
    MMUILabel * _authLevelLabel; // +0x18
    UIImageView * _arrowView; // +0x20
    UIView * _topSeperatorLine; // +0x28
    UIView * _highlightMaskView; // +0x30
    MMAuthorizeGameInfoCellVM * _vm; // +0x38
}
+ (double)leftPadding;
+ (double)rightPadding;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)applyViewModel:(id)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)wordingForSelectStatus;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)authLevelLabel;
- (void)setAuthLevelLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)topSeperatorLine;
- (void)setTopSeperatorLine:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (void).cxx_destruct;
@end

