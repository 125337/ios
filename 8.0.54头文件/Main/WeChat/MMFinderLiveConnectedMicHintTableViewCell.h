@interface MMFinderLiveConnectedMicHintTableViewCell : UITableViewCell
{
    UILabel * _hintLabel; // +0x8
    UIView * _separatorBar; // +0x10
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)hint;
- (void)setHint:(id)arg1;
- (void)layoutSubviews;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end

