@interface WAAppProfileCellView : WAAppMessageBaseCellView
{
    MMWebImageView * _iconView; // +0xa8
    UIView * _infoView; // +0xb0
    MMUILabel * _nameLabel; // +0xb8
    WCTagsView * _tagsView; // +0xc0
    MMUILabel * _scoreLabel; // +0xc8
    NSDate * _visibleDate; // +0xd0
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
- (id)tagsView;
- (void)setTagsView:(id)arg1;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg1;
- (id)visibleDate;
- (void)setVisibleDate:(id)arg1;
- (void).cxx_destruct;
@end

