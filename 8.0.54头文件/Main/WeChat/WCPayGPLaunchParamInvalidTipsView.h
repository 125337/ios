@interface WCPayGPLaunchParamInvalidTipsView : MMUILabel
{
    BOOL _bHasShow; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)showViewWithContent:(id)arg1 completion:(id /* block */)arg2;
- (void)hide;
- (BOOL)isShow;
- (BOOL)bHasShow;
- (void)setBHasShow:(BOOL)arg1;
@end

