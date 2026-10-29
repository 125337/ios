@interface WCFinderInteractionLabelGroupView : UIView
{
    double _fWidth; // +0x8
    NSArray * _labels; // +0x10
    NSMutableArray * _labelViews; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithInteractionLabels:(id)arg1;
- (void)prepareLabelViews;
- (void)handleLastImageStyle:(id)arg1;
- (id)createInteractionTagTextView;
- (void)setFWidth:(double)arg1;
- (void)layoutUI;
- (void)updateSize:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (double)fWidth;
- (id)labels;
- (void)setLabels:(id)arg1;
- (id)labelViews;
- (void)setLabelViews:(id)arg1;
- (void).cxx_destruct;
@end

