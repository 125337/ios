@interface WCFinderHotBigBubbleView : UIView
{
    id <WCFinderHotBigBubbleViewDelegate> _delegate; // +0x8
    UIImageView * _arrowImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    MMWebImageView * _leftImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)addShape:(id)arg1;
- (void)updateWithLeftImgName:(id)arg1 title:(id)arg2 subTitle:(id)arg3;
- (void)layoutAllSubviews;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)leftImageView;
- (id)arrowImageView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setLeftImageView:(id)arg1;
- (void).cxx_destruct;
@end

