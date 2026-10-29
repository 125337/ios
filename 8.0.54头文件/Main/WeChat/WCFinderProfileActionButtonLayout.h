@interface WCFinderProfileActionButtonLayout : UIView
{
    double _minLineHeight; // +0x8
    double _expandHorizontalMargin; // +0x10
    id /* block */ _defaultConfig; // +0x18
    UIView * _followRecommandView; // +0x20
    NSMutableDictionary * _configMap; // +0x28
    NSMutableArray * _buttonArray; // +0x30
    NSMutableDictionary * _cookingBtnMap; // +0x38
    NSMutableDictionary * _reuseMap; // +0x40
    unsigned long long _oldLayoutHash; // +0x48
    CGSize _lastLayoutSize; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)needRegister:(id)arg1;
- (void)register:(id)arg1 config:(id /* block */)arg2;
- (void)register:(id)arg1 btnCls:(Class)arg2 config:(id /* block */)arg3;
- (void)setFollowRecommandView:(id)arg1;
- (void)edit:(id /* block */)arg1;
- (void)adjustFlexDefines;
- (void)layout;
- (id)btnWithTag:(id)arg1;
- (id)tryGetBtnWithTag:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)minLineHeight;
- (void)setMinLineHeight:(double)arg1;
- (double)expandHorizontalMargin;
- (void)setExpandHorizontalMargin:(double)arg1;
- (id /* block */)defaultConfig;
- (void)setDefaultConfig:(id /* block */)arg1;
- (id)followRecommandView;
- (id)configMap;
- (void)setConfigMap:(id)arg1;
- (id)buttonArray;
- (void)setButtonArray:(id)arg1;
- (id)cookingBtnMap;
- (void)setCookingBtnMap:(id)arg1;
- (id)reuseMap;
- (void)setReuseMap:(id)arg1;
- (unsigned long long)oldLayoutHash;
- (void)setOldLayoutHash:(unsigned long long)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

