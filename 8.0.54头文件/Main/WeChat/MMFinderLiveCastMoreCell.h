@interface MMFinderLiveCastMoreCell : UITableViewCell
{
    MMLiveCastMoreViewItem * _viewItem; // +0x8
    UIView * _containerView; // +0x10
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x18
    RichTextView * _titleTextView; // +0x20
}
+ (id)defaultCellIdentifier;
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
- (void)loadContainerView;
- (void)loadActivityIndicatorView;
- (void)loadTitleTextView;
- (void)updateActivityIndicatorViewLoadingState;
- (void)setViewItem:(id)arg1;
- (void)layoutSubviews;
- (id)viewItem;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg1;
- (void).cxx_destruct;
@end

