@interface MMFinderLiveGoodsCellSubInfosView : UIView
{
    BOOL _isRouter; // +0x8
    NSArray * _routerInfos; // +0x10
    NSArray * _normalInfos; // +0x18
    UIFont * _font; // +0x20
    id /* block */ _routeAction; // +0x28
    NSArray * _labels; // +0x30
    NSArray * _lines; // +0x38
    UIImageView * _iconView; // +0x40
}
+ (BOOL)willShowInWidth:(double)arg1 withGoods:(id)arg2 font:(id)arg3;
+ (void)setRouterInfos:(id *)arg1 normalInfos:(id *)arg2 forAnchorWithGoods:(id)arg3;
+ (BOOL)willShowInWidth:(double)arg1 withRouterInfos:(id)arg2 normalInfos:(id)arg3 font:(id)arg4;
- (void)updateForAnchorWithGoods:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setRouterInfos:(id)arg1;
- (void)setNormalInfos:(id)arg1;
- (id)infos;
- (void)setFont:(id)arg1;
- (void)setIsRouter:(BOOL)arg1;
- (id)routerColor;
- (void)update;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)hasInfoVisible;
- (void)onTaped;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (BOOL)isRouter;
- (id)routerInfos;
- (id)normalInfos;
- (id)font;
- (id /* block */)routeAction;
- (void)setRouteAction:(id /* block */)arg1;
- (id)labels;
- (void)setLabels:(id)arg1;
- (id)lines;
- (void)setLines:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end
