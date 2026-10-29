@interface WCFinderInteractionLabelGroupView : UIView
{
    BOOL _hidesLabelsThatDoNotFit; // +0x8
    BOOL _usesLabelTypeTextColor; // +0x9
    BOOL _adjustsAuthIconSizeForDynamicType; // +0xa
    double _fWidth; // +0x10
    UIColor * _textColor; // +0x18
    NSArray * _labels; // +0x20
    NSMutableArray * _labelViews; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithInteractionLabels:(id)arg1;
- (void)prepareLabelViews;
- (id)contentByAdjustingAuthIconSizeForDynamicType:(id)arg1;
- (void)handleLastImageStyle:(id)arg1;
- (id)createInteractionTagTextView;
- (void)setTextColor:(id)arg1;
- (void)setUsesLabelTypeTextColor:(BOOL)arg1;
- (id)textColorForLabel:(id)arg1;
- (void)refreshLabelTextColors;
- (void)setFWidth:(double)arg1;
- (void)setHidesLabelsThatDoNotFit:(BOOL)arg1;
- (void)layoutUI;
- (void)layoutUIByHidingLabelsThatDoNotFit;
- (void)updateSize:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (double)fWidth;
- (id)textColor;
- (BOOL)hidesLabelsThatDoNotFit;
- (BOOL)usesLabelTypeTextColor;
- (BOOL)adjustsAuthIconSizeForDynamicType;
- (void)setAdjustsAuthIconSizeForDynamicType:(BOOL)arg1;
- (id)labels;
- (void)setLabels:(id)arg1;
- (id)labelViews;
- (void)setLabelViews:(id)arg1;
- (void).cxx_destruct;
@end
