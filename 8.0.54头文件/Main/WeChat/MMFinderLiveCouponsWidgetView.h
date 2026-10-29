@interface MMFinderLiveCouponsWidgetView : UIView
{
    BOOL _isNormalStyle; // +0x8
    FinderLiveGetFinderCouponWidgetsResponse * _info; // +0x10
    PAGView * _pagView; // +0x18
    UILabel * _label; // +0x20
}
- (id)initWithInfo:(id)arg1;
- (void)enter;
- (void)toNormalStyleWithCompletion:(id /* block */)arg1;
- (void)layoutSubviews;
- (void)updateTextsFor:(id)arg1;
- (id)getEnterPAG;
- (id)getWeakenPAG;
- (void)updateWithInfo:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (BOOL)isNormalStyle;
- (void)setIsNormalStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end

