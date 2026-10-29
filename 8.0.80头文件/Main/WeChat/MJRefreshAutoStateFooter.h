@interface MJRefreshAutoStateFooter : MJRefreshAutoFooter
{
    UILabel * _stateLabel; // +0x30
    BOOL _refreshingTitleHidden; // +0x38
    double _labelLeftInset; // +0x40
    NSMutableDictionary * _stateTitles; // +0x48
}
- (id)stateTitles;
- (id)stateLabel;
- (id)setTitle:(id)arg1 forState:(long long)arg2;
- (void)stateLabelClick;
- (void)textConfiguration;
- (void)prepare;
- (void)i18nDidChange;
- (void)placeSubviews;
- (void)setState:(long long)arg1;
- (id)flipsHorizontallyInOppositeLayoutDirectionViews;
- (double)labelLeftInset;
- (void)setLabelLeftInset:(double)arg1;
- (BOOL)isRefreshingTitleHidden;
- (void)setRefreshingTitleHidden:(BOOL)arg1;
- (void)setStateTitles:(id)arg1;
- (void).cxx_destruct;
@end
