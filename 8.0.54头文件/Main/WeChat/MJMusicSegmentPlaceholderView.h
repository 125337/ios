@interface MJMusicSegmentPlaceholderView : UICollectionReusableView <MJSegmentReusableView>
{
    id <MJSegmentReusableViewDelegate> _delegate; // +0x8
    UIImageView * _iconImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UITapGestureRecognizer * _tapGR; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (void)layoutViews;
- (void)handleTapGesture:(id)arg1;
- (void)updatePlaceholderLeadingOffset:(double)arg1;
- (void)prepareForReuse;
- (void)willDisplay;
- (void)didEndDisplaying;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tapGR;
- (void)setTapGR:(id)arg1;
- (void).cxx_destruct;
@end

