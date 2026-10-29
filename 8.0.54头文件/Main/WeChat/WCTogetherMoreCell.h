@interface WCTogetherMoreCell : WCTogetherBaseCell
{
    UIView * _tipsContainerView; // +0x8
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x10
    MMUILabel * _tipsLabel; // +0x18
    UIView * _endLineContainerView; // +0x20
    UIView * _leftLine; // +0x28
    UIImageView * _endPointView; // +0x30
    UIView * _rightLine; // +0x38
}
+ (id)cellIdentifier;
+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)loadTipsContainerView;
- (void)loadEndContainerView;
- (void)layoutSubviews;
- (void)layoutTipsContainerView;
- (void)layoutEndContainerView;
- (void)updateActivityIndicatorViewLoadingState;
- (id)tipsContainerView;
- (void)setTipsContainerView:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)endLineContainerView;
- (void)setEndLineContainerView:(id)arg1;
- (id)leftLine;
- (void)setLeftLine:(id)arg1;
- (id)endPointView;
- (void)setEndPointView:(id)arg1;
- (id)rightLine;
- (void)setRightLine:(id)arg1;
- (void).cxx_destruct;
@end

