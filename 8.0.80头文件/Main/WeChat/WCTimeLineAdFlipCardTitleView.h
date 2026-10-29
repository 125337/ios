@interface WCTimeLineAdFlipCardTitleView : UIView
{
    WCAdFlipCardInfo * _adFlipCardInfo; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _subTitleLabel; // +0x18
    UIView * _learnMoreContainer; // +0x20
    UILabel * _learnMoreLabel; // +0x28
    UIImageView * _learnMoreIcon; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 adFlipCardInfo:(id)arg2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)learnMoreContainer;
- (id)learnMoreLabel;
- (id)learnMoreIcon;
- (id)adFlipCardInfo;
- (void)setAdFlipCardInfo:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setLearnMoreContainer:(id)arg1;
- (void)setLearnMoreLabel:(id)arg1;
- (void)setLearnMoreIcon:(id)arg1;
- (void).cxx_destruct;
@end
