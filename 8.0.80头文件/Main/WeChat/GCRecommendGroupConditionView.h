@interface GCRecommendGroupConditionView : UIView
{
    UILabel * _conditionLabel; // +0x8
    UIImageView * _tickImageView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)gcMinLayoutWidth;
- (double)gcFelxibleLayoutWidth;
- (id)conditionLabel;
- (void)setConditionLabel:(id)arg1;
- (id)tickImageView;
- (void)setTickImageView:(id)arg1;
- (void).cxx_destruct;
@end
