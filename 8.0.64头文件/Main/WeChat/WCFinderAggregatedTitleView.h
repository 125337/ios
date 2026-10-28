@interface WCFinderAggregatedTitleView : UIView
{
    RichTextView * _titleView; // +0x8
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x10
    RichTextView * _suffixTitleView; // +0x18
    id _target; // +0x20
    SEL _action; // +0x28
}
+ (double)getTitleWidthWithTitle:(id)arg1 suffixTitle:(id)arg2 font:(id)arg3 width:(double)arg4;
+ (double)getTitleWidthWithTitle:(id)arg1 authInfo:(id)arg2 font:(id)arg3 width:(double)arg4;
+ (BOOL)shouldShowSuffixTitleWithTitle:(id)arg1 font:(id)arg2 width:(double)arg3;
- (id)init;
- (void)cleanTitle;
- (void)setUpUI;
- (void)setTitle:(id)arg1 suffixTitle:(id)arg2 authInfo:(id)arg3 font:(id)arg4 width:(double)arg5 titleWidth:(double)arg6 shouldShowSuffix:(BOOL)arg7;
- (double)fullWidth;
- (void)setupAuthInfo:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;
- (void)tapGestureAction;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)suffixTitleView;
- (void)setSuffixTitleView:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (void).cxx_destruct;
@end
