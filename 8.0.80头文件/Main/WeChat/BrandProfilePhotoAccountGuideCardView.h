@interface BrandProfilePhotoAccountGuideCardView : MMUIView
{
    id <BrandProfilePhotoAccountGuideCardViewDelegate> _delegate; // +0x8
    NSString * _guideText; // +0x10
    NSString * _actionText; // +0x18
    UILabel * _guideLabel; // +0x20
    MMUIButton * _actionButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)setGuideText:(id)arg1;
- (id)attributedGuideTextForMultiLine:(id)arg1;
- (void)setActionText:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)updateGuideLabelTextForWidth:(double)arg1;
- (void)onActionButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)guideText;
- (id)actionText;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
