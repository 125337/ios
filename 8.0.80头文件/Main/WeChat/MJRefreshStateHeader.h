@interface MJRefreshStateHeader : MJRefreshHeader
{
    UILabel * _lastUpdatedTimeLabel; // +0x30
    UILabel * _stateLabel; // +0x38
    id /* block */ _lastUpdatedTimeText; // +0x40
    double _labelLeftInset; // +0x48
    NSMutableDictionary * _stateTitles; // +0x50
}
- (id)modifyLastUpdatedTimeText:(id /* block */)arg1;
- (id)stateTitles;
- (id)stateLabel;
- (id)lastUpdatedTimeLabel;
- (void)setLastUpdatedTimeText:(id /* block */)arg1;
- (id)setTitle:(id)arg1 forState:(long long)arg2;
- (void)setLastUpdatedTimeKey:(id)arg1;
- (void)textConfiguration;
- (void)prepare;
- (void)i18nDidChange;
- (void)placeSubviews;
- (void)setState:(long long)arg1;
- (id)flipsHorizontallyInOppositeLayoutDirectionViews;
- (id /* block */)lastUpdatedTimeText;
- (double)labelLeftInset;
- (void)setLabelLeftInset:(double)arg1;
- (void)setStateTitles:(id)arg1;
- (void).cxx_destruct;
@end
