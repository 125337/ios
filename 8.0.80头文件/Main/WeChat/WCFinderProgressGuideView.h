@interface WCFinderProgressGuideView : UIView <PAGViewListener>
{
    BOOL _isDismissing; // +0x8
    id /* block */ _completion; // +0x10
    UILabel * _descLabel; // +0x18
    PAGView * _pagView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)displayPAG;
- (id)descLabel;
- (id)pagView;
- (void)onAnimationEnd:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setPagView:(id)arg1;
- (void).cxx_destruct;
@end
