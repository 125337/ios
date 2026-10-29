@interface WCFinderFeedRetryToolBar : UIView
{
    id <WCFinderFeedRetryToolBarDelegate> _delegate; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 errorTips:(id)arg2 buttonOptionFlag:(unsigned long long)arg3;
- (id)initWithFrame:(CGRect)arg1 errorTips:(id)arg2 errorReason:(id)arg3 buttonOptionFlag:(unsigned long long)arg4 errorTipsLabelColor:(id)arg5;
- (void)clickCancelAction;
- (void)clickRetryAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
