@interface EnterpriseOpenWeworkBottomBar : WCBottomBar <MMImageLoaderObserver>
{
    UIButton * _weworkButton; // +0x8
    NSString * _iconUrl; // +0x10
}
- (void)addOpenWeworkButton:(SEL)arg1 target:(id)arg2 btnTitle:(id)arg3;
- (void)updateBtnTitle:(id)arg1 icon:(id)arg2 titleColor:(id)arg3;
- (void)updateIconImage:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void).cxx_destruct;
@end

