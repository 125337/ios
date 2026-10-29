@interface MMFinderLiveConnectedMicHintTableViewCell : UITableViewCell
{
    MMFinderLiveConnectedMicHintBaseViewCell * _baseView; // +0x8
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)hint;
- (void)setHint:(id)arg1;
- (BOOL)showSeparatorBar;
- (void)setShowSeparatorBar:(BOOL)arg1;
- (double)hintLabelTop;
- (void)setHintLabelTop:(double)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (void).cxx_destruct;
@end
