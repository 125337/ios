@interface WCTogetherBaseCell : UITableViewCell
{
    id _viewItem; // +0x8
}
+ (id)cellIdentifier;
+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
- (void)_observeViewModel:(id)arg1;
- (void)_unobserveViewModel:(id)arg1;
- (void)_observedValueDidChangeForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (void)updateAllValues;
- (void)_willUnsetOldViewModel:(id)arg1;
- (void)_didSetNewViewModel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setViewItem:(id)arg1;
- (id)viewItem;
- (void).cxx_destruct;
@end

