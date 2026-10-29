@interface MMActionSheetImgSourceRowView : MMUIView
{
    id <MMActionSheetImgSourceRowViewDelegate> _delegate; // +0x8
    UIButton * _backgroundButton; // +0x10
    UIImageView * _iconImageView; // +0x18
    UIImageView * _arrowImageView; // +0x20
    UILabel * _titleLabel; // +0x28
}
+ (double)rowViewHeight;
- (id)init;
- (void)setupAllSubviews;
- (void)layoutSubviews;
- (void)onTappedRowImgSource;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

