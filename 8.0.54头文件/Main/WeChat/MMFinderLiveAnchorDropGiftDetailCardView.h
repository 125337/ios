@interface MMFinderLiveAnchorDropGiftDetailCardView : MMFinderLiveDetailCardView
{
    MMUILabel * _titleLabel; // +0x18
    UIFont * _titleFont; // +0x20
    UIColor * _titleColor; // +0x28
    MMUILabel * _descLabel; // +0x30
    UIFont * _descFont; // +0x38
    UIColor * _descColor; // +0x40
}
- (void)setup;
- (void)layoutSubviews;
- (void)updateViewModel:(id)arg1;
- (void)refreshLayout;
- (id)titleLabel;
- (id)titleFont;
- (id)descLabel;
- (id)descFont;
- (id)titleColor;
- (id)descColor;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setDescFont:(id)arg1;
- (void)setDescColor:(id)arg1;
- (void).cxx_destruct;
@end

