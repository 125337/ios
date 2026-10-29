@interface WCTogetherReusableView : UITableViewHeaderFooterView
{
    id _viewSection; // +0x8
}
+ (id)reusableViewIdentifier;
+ (double)heightForViewSection:(id)arg1 inTableView:(id)arg2;
- (void)_observeViewModel:(id)arg1;
- (void)_unobserveViewModel:(id)arg1;
- (void)_observedValueDidChangeForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (void)updateAllValues;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)setViewSection:(id)arg1;
- (id)viewSection;
- (void).cxx_destruct;
@end
