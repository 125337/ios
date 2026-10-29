@interface MMFinderLiveCastItemCell : UITableViewCell
{
    MMLiveCastViewItem * _viewItem; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x18
    UIView * _topSeparatorLine; // +0x20
    UIView * _bottomSeparatorLine; // +0x28
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
- (void)loadTitleLabel;
- (void)loadActivityIndicatorView;
- (void)updateActivityIndicatorViewLoadingState;
- (void)loadSeparatorLines;
- (void)setViewItem:(id)arg1;
- (void)layoutSubviews;
- (id)viewItem;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end

