@interface MJSegmentCoverForReorderCell : MJSegmentCoverCell
{
    CAShapeLayer * _flagLayer; // +0x8
    UILabel * _numberLabel; // +0x10
}
- (void)commonInit;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)updateNumber:(long long)arg1 showFlag:(BOOL)arg2 animated:(BOOL)arg3;
- (id)flagLayer;
- (id)numberLabel;
- (void)setFlagLayer:(id)arg1;
- (void)setNumberLabel:(id)arg1;
- (void).cxx_destruct;
@end
