@interface MMFinderLiveCouponsWidgetView : UIView
{
    BOOL _isNormalStyle; // +0x8
    FinderLiveSyncEcCouponInfoResp_WidgetInfo * _info; // +0x10
    PAGView * _pagView; // +0x18
    UILabel * _label; // +0x20
    PAGComposition * _enterPAG; // +0x28
    PAGComposition * _weakenPAG; // +0x30
}
+ (void)loadWidgetWithInfo:(id)arg1 completion:(id /* block */)arg2;
+ (void)updatePAG:(id)arg1 withInfo:(id)arg2;
- (id)initWithInfo:(id)arg1;
- (void)enter;
- (void)prepareToNormalState;
- (void)toNormalStyleWithCompletion:(id /* block */)arg1;
- (void)layoutSubviews;
- (void)updateInfo:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (BOOL)isNormalStyle;
- (void)setIsNormalStyle:(BOOL)arg1;
- (id)enterPAG;
- (void)setEnterPAG:(id)arg1;
- (id)weakenPAG;
- (void)setWeakenPAG:(id)arg1;
- (void).cxx_destruct;
@end
