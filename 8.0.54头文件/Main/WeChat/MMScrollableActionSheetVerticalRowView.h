@interface MMScrollableActionSheetVerticalRowView : MMUIView
{
    MMScrollableActionSheetVerticalRowInfo * _rowInfo; // +0x8
    id <MMScrollableActionSheetVerticalRowViewDelegate> _delegate; // +0x10
    UIButton * _backgroundButton; // +0x18
    UIImageView * _loadingView; // +0x20
    MMWebImageView * _iconImageView; // +0x28
    UIImageView * _arrowImageView; // +0x30
    UILabel * _titleLabel; // +0x38
    UILabel * _subtitleLabel; // +0x40
}
- (id)initWithDelegate:(id)arg1;
- (void)setupAllSubviews;
- (void)setupGestureRecognizer;
- (void)setRowInfo:(id)arg1;
- (void)layoutSubviews;
- (void)onTappedRowInfo;
- (id)rowInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

