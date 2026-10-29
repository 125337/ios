@interface MMFinderLivePkTaskedBonusGiftNotificationIndicatorView : UIView
{
    double _labelDisplayCenterX; // +0x8
    NSMutableArray * _inDisplayItems; // +0x10
    NSMutableArray * _pool; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setLabelDisplayCenterX:(double)arg1;
- (void)pushLine:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)rentLabelFromPool;
- (void)returnLabelToPool:(id)arg1;
- (double)labelDisplayCenterX;
- (id)inDisplayItems;
- (void)setInDisplayItems:(id)arg1;
- (id)pool;
- (void)setPool:(id)arg1;
- (void).cxx_destruct;
@end

