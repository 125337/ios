@interface WAAppProfileCellView : WAAppMessageBaseCellView
{
    MMWebImageView * _iconView; // +0xb8
    UIView * _infoView; // +0xc0
    MMUILabel * _nameLabel; // +0xc8
    MMUILabel * _registerBodyLabel; // +0xd0
    UIImageView * _certificationImageView; // +0xd8
    NSDate * _visibleDate; // +0xe0
}
- (void)willMoveToWindow:(id)arg1;
- (void)layoutContentView;
- (void)initWeAppProfileView;
- (void)onTouchUpInside;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)infoView;
- (void)setInfoView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)registerBodyLabel;
- (void)setRegisterBodyLabel:(id)arg1;
- (id)certificationImageView;
- (void)setCertificationImageView:(id)arg1;
- (id)visibleDate;
- (void)setVisibleDate:(id)arg1;
- (void).cxx_destruct;
@end
