@interface MJRefreshBackStateFooter : MJRefreshBackFooter
{
    UILabel * _stateLabel; // +0x30
    double _labelLeftInset; // +0x38
    NSMutableDictionary * _stateTitles; // +0x40
}
- (id)stateTitles;
- (id)stateLabel;
- (id)setTitle:(id)arg1 forState:(long long)arg2;
- (id)titleForState:(long long)arg1;
- (void)textConfiguration;
- (void)prepare;
- (void)i18nDidChange;
- (void)placeSubviews;
- (void)setState:(long long)arg1;
- (id)flipsHorizontallyInOppositeLayoutDirectionViews;
- (double)labelLeftInset;
- (void)setLabelLeftInset:(double)arg1;
- (void)setStateTitles:(id)arg1;
- (void).cxx_destruct;
@end
