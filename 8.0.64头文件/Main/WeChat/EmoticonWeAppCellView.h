@interface EmoticonWeAppCellView : EmoticonCellLikeButton
{
    BOOL _isWeAppClicked; // +0x8
    UIView * _contentView; // +0x10
    EmoticonWeAppInfo * _weappInfo; // +0x18
    UIView * _seperateView; // +0x20
    MMWebImageView * _iconView; // +0x28
    UILabel * _nameLabel; // +0x30
    UIButton * _actionBtn; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)updateWithWeAppInfoInfo:(id)arg1;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void)onOpenWeApp;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)weappInfo;
- (void)setWeappInfo:(id)arg1;
- (id)seperateView;
- (void)setSeperateView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)actionBtn;
- (void)setActionBtn:(id)arg1;
- (BOOL)isWeAppClicked;
- (void)setIsWeAppClicked:(BOOL)arg1;
- (void).cxx_destruct;
@end
