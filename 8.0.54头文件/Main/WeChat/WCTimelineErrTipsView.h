@interface WCTimelineErrTipsView : UIButton <ILinkEventExt>
{
    id <WCTimelineErrTipsViewDelegate> _delegate; // +0x8
    UIImageView * _errImageView; // +0x10
    RichTextView * _errTipsView; // +0x18
    WCMomentsErrTipsViewModel * _viewModel; // +0x20
}
+ (double)heightForViewModel:(id)arg1 width:(double)arg2;
+ (double)heightForDataItem:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)initView;
- (void)updateErrImageView:(unsigned long long)arg1;
- (void)updateWithDataItem:(id)arg1;
- (id)errTipsAccessibilityText;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)errImageView;
- (void)setErrImageView:(id)arg1;
- (id)errTipsView;
- (void)setErrTipsView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

