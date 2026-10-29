@interface WCFinderNativeDramaDetailRangeConfigurationView : UIView <UIContentView>
{
    WCFinderNativeDramaDetailRangeConfiguration * _appliedConfiguration; // +0x8
    UILabel * _rangeLabel; // +0x10
}
- (id)initWithConfiguration:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1;
- (void)_setupUI;
- (void)_updateUI;
- (void)_updateLayout;
- (void)layoutSubviews;
- (id)rangeLabel;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setRangeLabel:(id)arg1;
- (void).cxx_destruct;
@end
