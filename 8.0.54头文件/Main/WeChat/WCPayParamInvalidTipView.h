@interface WCPayParamInvalidTipView : MMUILabel
{
    BOOL _bIsShowing; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 fontColor:(id)arg3;
- (void)showViewWithContent:(id)arg1;
- (void)dismiss;
- (BOOL)isTipsViewShowing;
- (BOOL)bIsShowing;
- (void)setBIsShowing:(BOOL)arg1;
@end

