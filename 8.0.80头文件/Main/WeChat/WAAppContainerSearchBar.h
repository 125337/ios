@interface WAAppContainerSearchBar : WCSearchBar
{
    BOOL _placeholderLight; // +0x8
    BOOL _placeholderAlignLeft; // +0x9
    NSString * _placeholderQueryText; // +0x10
}
- (void)setPlaceholderLight:(BOOL)arg1 alignLeft:(BOOL)arg2 queryText:(id)arg3;
- (void)applyPlaceholderTextColor;
- (id)placeholderQueryTextColor;
- (_NSRange)queryRangeInPlaceholderText:(id)arg1;
- (void)initContanerView;
- (void)arrangeBaseUIElements;
- (void)updateLayout;
- (void)makeConstraintsForBarButton;
- (id)textField;
- (BOOL)placeholderLight;
- (void)setPlaceholderLight:(BOOL)arg1;
- (BOOL)placeholderAlignLeft;
- (void)setPlaceholderAlignLeft:(BOOL)arg1;
- (id)placeholderQueryText;
- (void)setPlaceholderQueryText:(id)arg1;
- (void).cxx_destruct;
@end
