@interface WCFinderPanelThumbEnhanceBubbleView : UIView
{
    double _maxWidth; // +0x8
    UIView * _containerView; // +0x10
    WCFinderCustomImageRichTextView * _contentLabel; // +0x18
}
+ (BOOL)recommendFromEnhanceWithContentVM:(id)arg1;
+ (id)bubbleBgColorWithContentVM:(id)arg1;
+ (id)getRecommendContentWithContentVM:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)setMaxWidth:(double)arg1;
- (void)setupUI;
- (void)layoutUI;
- (void)updateWithContentVM:(id)arg1;
- (double)maxWidth;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end

