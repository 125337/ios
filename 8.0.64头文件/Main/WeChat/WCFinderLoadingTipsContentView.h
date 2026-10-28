@interface WCFinderLoadingTipsContentView : UIView <WCFinderDataLoadTipsDelegate, UIContentView>
{
    WCFinderLoadingTipsConfigration * _appliedConfiguration; // +0x8
    WCFinderDataLoadTips * _loadingTips; // +0x10
}
- (id)initWithConfigration:(id)arg1;
- (void)layoutSubviews;
- (void)_applyConfiguration:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (id)loadingTips;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setLoadingTips:(id)arg1;
- (void).cxx_destruct;
@end
