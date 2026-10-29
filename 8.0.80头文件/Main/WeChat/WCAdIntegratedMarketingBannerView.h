@interface WCAdIntegratedMarketingBannerView : WCAdBaseBarView <WCAdDivingPagViewDelegate, WCAdBarSingleProductDelegate, CAAnimationDelegate>
{
    WCDataItem * _dataItem; // +0x8
    WCAdBarPAGContainerInfo * _pagInfo; // +0x10
    WCAdBarSingleProductInfo * _singleProductInfo; // +0x18
    unsigned long long _itemScene; // +0x20
    WCAdBarSingleProductView * _singleProductView; // +0x28
    WCAdDivingPagView * _pagView; // +0x30
    long long _state; // +0x38
}
+ (double)viewHeight:(id)arg1 maxWidth:(double)arg2;
+ (double)topMargin:(id)arg1 maxWidth:(double)arg2;
+ (double)bottomMargin;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (void)generateSubviews;
- (id)singleProductView;
- (id)pagView;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (void)hidePagView;
- (void)onHidePagViewDone;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)onDivingPagViewPlayDone;
- (void)onSingleProductViewShownAnimationDone;
- (void)onSingleProductViewClicked;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)pagInfo;
- (void)setPagInfo:(id)arg1;
- (id)singleProductInfo;
- (void)setSingleProductInfo:(id)arg1;
- (unsigned long long)itemScene;
- (void)setItemScene:(unsigned long long)arg1;
- (void)setSingleProductView:(id)arg1;
- (void)setPagView:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (void).cxx_destruct;
@end
