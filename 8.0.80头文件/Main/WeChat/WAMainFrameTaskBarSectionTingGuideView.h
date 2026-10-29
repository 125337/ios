@interface WAMainFrameTaskBarSectionTingGuideView : UICollectionViewCell
{
    id /* block */ _sessionIdProvider; // +0x8
    id /* block */ _onLeavePageHandler; // +0x10
    UILabel * _textLabel; // +0x18
    UIImageView * _arrowImageView; // +0x20
    UIView * _containerView; // +0x28
}
+ (void)trackExposureIfNeededWithSessionId:(id)arg1;
+ (long long)currentDismissReason;
+ (id)dismissReasonString:(long long)arg1;
+ (void)reportDismissReasonIfNeededWithSessionId:(id)arg1;
+ (long long)contentHeight;
+ (BOOL)shouldShow;
+ (void)markTapped;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)onTapGuide;
- (void)layoutSubviews;
- (id /* block */)sessionIdProvider;
- (void)setSessionIdProvider:(id /* block */)arg1;
- (id /* block */)onLeavePageHandler;
- (void)setOnLeavePageHandler:(id /* block */)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
