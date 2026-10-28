@interface MMFinderLivePkTaskedBonusGiftNotificationIndicatorItemView : UIView
{
    BOOL _removalScheduled; // +0x8
    unsigned long long _lineIndex; // +0x10
    MMLiveStrokeLabel * _label; // +0x18
    double _labelCenterX; // +0x20
}
- (id)initWithLabel:(id)arg1;
- (void)pushUpWithRemovalBlock:(id /* block */)arg1;
- (void)setLabelCenterX:(double)arg1;
- (void)layoutSubviews;
- (unsigned long long)lineIndex;
- (void)setLineIndex:(unsigned long long)arg1;
- (BOOL)removalScheduled;
- (void)setRemovalScheduled:(BOOL)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (double)labelCenterX;
- (void).cxx_destruct;
@end
