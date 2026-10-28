@interface MMLiveBizArticleMoreView : UIView
{
    long long _loadStatus; // +0x8
    MMUILabel * _tipsLabel; // +0x10
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x18
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)loadTipsLabel;
- (void)loadActivityIndicatorView;
- (void)setLoadStatus:(long long)arg1;
- (void)layoutSubviews;
- (void)updateTipsLabelWithLoadStatus:(long long)arg1;
- (void)updateActivityIndicatorViewWithLoadStatus:(long long)arg1;
- (long long)loadStatus;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
