@interface WCAdDynamicFeedPagView : WCAdDynamicFeedEmptyLayoutView
{
    WCAdTwinTurboPagView * _pagView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 elementInfo:(id)arg2;
- (void)setupPagView;
- (int)scaleModeFromObjectFit:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)play;
- (void)pause;
- (void)stop;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (void).cxx_destruct;
@end
