@interface WCFinderArrowTipsView : UIView
{
    unsigned int _arrowType; // +0x8
    UILabel * _tipsLabel; // +0x10
    UIView * _bubbleView; // +0x18
    double _arrowWidth; // +0x20
    double _arrowHeight; // +0x28
    UIEdgeInsets _tipsInsets; // +0x30
}
- (void)moveTo:(CGPoint)arg1 inView:(id)arg2;
- (void)drawArrowAtPoint:(CGPoint)arg1;
- (void)setupTipsLabel;
- (void)updateMargin;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (double)arrowWidth;
- (void)setArrowWidth:(double)arg1;
- (double)arrowHeight;
- (void)setArrowHeight:(double)arg1;
- (unsigned int)arrowType;
- (void)setArrowType:(unsigned int)arg1;
- (UIEdgeInsets)tipsInsets;
- (void)setTipsInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end

