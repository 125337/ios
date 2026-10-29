@interface WCFinderFeedNotRealNameToolbarView : UIView <ILinkEventExt>
{
    id <WCFinderFeedNotRealNameToolbarViewDelegate> _delegate; // +0x8
    UIColor * _tipsLabelColor; // +0x10
    UIColor * _retryColor; // +0x18
}
+ (double)toolbarHeightWith:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 tipsLabelColor:(id)arg2 retryColor:(id)arg3;
- (void)setUpUI;
- (void)clickCancelAction;
- (void)clickRetryAction;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tipsLabelColor;
- (void)setTipsLabelColor:(id)arg1;
- (id)retryColor;
- (void)setRetryColor:(id)arg1;
- (void).cxx_destruct;
@end

