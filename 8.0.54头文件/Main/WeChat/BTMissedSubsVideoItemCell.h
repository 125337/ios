@interface BTMissedSubsVideoItemCell : BTMissedSubsBaseItemCell
{
    MMWebImageView * _coverImgView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _timeLabel; // +0x18
    SightIconView * _playIconView; // +0x20
}
- (void)setViewModel:(id)arg1;
- (void)configureLayout;
- (void)layoutSubviews;
- (unsigned long long)contentViewRaddiCorners;
- (id)coverImgView;
- (id)playIconView;
- (id)timeLabel;
- (id)titleLabel;
- (void)setCoverImgView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void).cxx_destruct;
@end

