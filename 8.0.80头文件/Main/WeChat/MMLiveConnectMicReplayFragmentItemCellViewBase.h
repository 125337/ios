@interface MMLiveConnectMicReplayFragmentItemCellViewBase : UITableViewCell
{
    unsigned int _duration; // +0x8
    NSString * _coverImageUri; // +0x10
    NSString * _title; // +0x18
    NSString * _primaryDescription; // +0x20
    NSString * _secondaryDescription; // +0x28
    NSString * _status; // +0x30
    double _progress; // +0x38
    MMWebImageView * _coverImageView; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _scoreLabel; // +0x50
    UILabel * _levelLabel; // +0x58
    UIView * _verticalLineViewBetweenScoreAndLevel; // +0x60
    UIView * _bottomLineView; // +0x68
    UIView * _coverOverlayView; // +0x70
    UILabel * _statusLabel; // +0x78
    MMLiveCircleProgressView * _circleProgressView; // +0x80
    UIView * _durationContainerView; // +0x88
    UILabel * _durationLabel; // +0x90
}
+ (double)cellHeight;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configUI;
- (void)layoutUI;
- (id)coverImageUri;
- (void)setCoverImageUri:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)primaryDescription;
- (void)setPrimaryDescription:(id)arg1;
- (id)secondaryDescription;
- (void)setSecondaryDescription:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg1;
- (id)levelLabel;
- (void)setLevelLabel:(id)arg1;
- (id)verticalLineViewBetweenScoreAndLevel;
- (void)setVerticalLineViewBetweenScoreAndLevel:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (id)coverOverlayView;
- (void)setCoverOverlayView:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)circleProgressView;
- (void)setCircleProgressView:(id)arg1;
- (id)durationContainerView;
- (void)setDurationContainerView:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (void).cxx_destruct;
@end
