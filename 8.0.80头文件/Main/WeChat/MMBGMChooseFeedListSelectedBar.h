@interface MMBGMChooseFeedListSelectedBar : UIView
{
    id <MMBGMChooseFeedListSelectedBarDelegate> _delegate; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _feedDescView; // +0x18
    UILabel * _reccommentReasonView; // +0x20
    MMBGMSelectedButton * _selectedButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (double)updateWithContentVM:(id)arg1 width:(double)arg2 highLightText:(id)arg3;
- (void)setBtnState:(unsigned long long)arg1;
- (double)getDescMaxWidthWithBarWidth:(double)arg1;
- (void)layoutSubviews;
- (void)onClickSelectedButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)feedDescView;
- (void)setFeedDescView:(id)arg1;
- (id)reccommentReasonView;
- (void)setReccommentReasonView:(id)arg1;
- (id)selectedButton;
- (void)setSelectedButton:(id)arg1;
- (void).cxx_destruct;
@end
