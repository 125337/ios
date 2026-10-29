@interface MMFinderLivePromotePubbleCustomContentEndView : UIView
{
    NSString * _labelText; // +0x8
    UIImageView * _doneIconView; // +0x10
    MMUILabel * _doneTipLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutDoneIconView;
- (void)layoutDoneTipLabel;
- (void)setLabelText:(id)arg1;
- (id)labelText;
- (id)doneIconView;
- (void)setDoneIconView:(id)arg1;
- (id)doneTipLabel;
- (void)setDoneTipLabel:(id)arg1;
- (void).cxx_destruct;
@end
