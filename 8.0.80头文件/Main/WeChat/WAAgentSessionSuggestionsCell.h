@interface WAAgentSessionSuggestionsCell : WAAgentSessionBaseCell
{
    id <WAAgentSessionSuggestionsCellDelegate> _delegate; // +0x8
    NSMutableArray * _rowViews; // +0x10
}
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rowViews;
- (void)setRowViews:(id)arg1;
- (void).cxx_destruct;
@end
