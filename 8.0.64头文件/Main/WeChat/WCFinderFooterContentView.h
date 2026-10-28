@interface WCFinderFooterContentView : UIView <UIContentView>
{
    WCFinderFooterConfiguration * _appliedConfiguration; // +0x8
    UILabel * _stateLabel; // +0x10
    WCFinderNoMoreView * _noMoreView; // +0x18
}
- (id)initWithConfiguration:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)_applyConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (id)configuration;
- (id)stateLabel;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (id)noMoreView;
- (void)setNoMoreView:(id)arg1;
- (void).cxx_destruct;
@end
