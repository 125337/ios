@interface WCTimelinePostTipsView : UIView
{
    WCTimelinePostTipsViewModel * _viewModel; // +0x8
    UIView * _iconView; // +0x10
    UIImageView * _checkMarkView; // +0x18
    RichTextView * _postTipsView; // +0x20
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x28
    WCProgressCircleView * _progressCircleView; // +0x30
}
+ (double)heightForViewModel:(id)arg1 width:(double)arg2;
+ (double)heightForDataItem:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)_initViews;
- (void)initIconView;
- (id)checkMarkView;
- (id)checkMark;
- (id)activityIndicatorView;
- (id)progressCircleView;
- (void)initPostTipsView;
- (id)postTipsAccessibilityText;
- (void)setViewModel:(id)arg1;
- (void)updateWithDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)updateProgress:(double)arg1;
- (id)viewModel;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void)setCheckMarkView:(id)arg1;
- (id)postTipsView;
- (void)setPostTipsView:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setProgressCircleView:(id)arg1;
- (void).cxx_destruct;
@end
