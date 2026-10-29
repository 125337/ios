@interface MJRefreshStateTrailer : MJRefreshTrailer
{
    UILabel * _stateLabel; // +0x30
    NSMutableDictionary * _stateTitles; // +0x38
}
- (id)stateTitles;
- (id)stateLabel;
- (id)setTitle:(id)arg1 forState:(long long)arg2;
- (void)textConfiguration;
- (void)prepare;
- (void)i18nDidChange;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (id)flipsHorizontallyInOppositeLayoutDirectionViews;
- (void)setStateTitles:(id)arg1;
- (void).cxx_destruct;
@end
