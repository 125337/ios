@interface MMFinderLiveUnavailableDropGiftDetailCardView : MMFinderLiveDetailCardView
{
    MMUILabel * _titleLabel; // +0x18
    UIFont * _titleFont; // +0x20
    UIColor * _titleColor; // +0x28
}
- (void)setup;
- (void)layoutSubviews;
- (void)updateViewModel:(id)arg1;
- (void)refreshLayout;
- (id)titleLabel;
- (id)titleFont;
- (id)titleColor;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void).cxx_destruct;
@end
