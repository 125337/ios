@interface WCFinderPanelThumbEnhanceBubbleView : UIView
{
    double _maxWidth; // +0x8
    id <WCFinderPanelThumbEnhanceBubbleViewDelegate> _delegate; // +0x10
    UIView * _containerView; // +0x18
    WCFinderRichTextView * _contentLabel; // +0x20
    UIImageView * _linkIconView; // +0x28
    UITapGestureRecognizer * _tapGesture; // +0x30
    WCFinderFeedContentVM * _contentVM; // +0x38
}
+ (BOOL)recommendFromEnhanceWithContentVM:(id)arg1;
+ (id)bubbleBgColorWithContentVM:(id)arg1;
+ (id)getRecommendContentWithContentVM:(id)arg1;
+ (id)getRecommendContentWithContentVM:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)setMaxWidth:(double)arg1;
- (void)setupUI;
- (void)clickAction;
- (void)layoutUI;
- (void)updateWithContentVM:(id)arg1;
- (BOOL)canShowLinkAction:(id)arg1;
- (id)contentTextColor;
- (BOOL)checkTextViewOverMaxWidth:(double)arg1 content:(id)arg2;
- (void)reportWithContentVM:(id)arg1;
- (double)maxWidth;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)linkIconView;
- (void)setLinkIconView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
