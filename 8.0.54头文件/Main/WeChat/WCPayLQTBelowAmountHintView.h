@interface WCPayLQTBelowAmountHintView : UIView <ILinkEventExt>
{
    NSMutableArray * _hintBelowAmount; // +0x8
    id <WCPayLQTBelowAmountHintViewDelegate> _delegate; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setContent:(id)arg1;
- (void)updateView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)hintBelowAmount;
- (void)setHintBelowAmount:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

