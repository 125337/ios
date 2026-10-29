@interface WeDropReceiveFirstInView : UIView <WeDropReceiveModuleView>
{
    id <WeDropReceiveFirstInViewDelegate> _delegate; // +0x8
    UIView * _tipsContainer; // +0x10
    UILabel * _tipsLabel; // +0x18
    UIButton * _confirmBtn; // +0x20
}
+ (double)expectingHeight:(double)arg1;
- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tipsContainer;
- (void)setTipsContainer:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (void).cxx_destruct;
@end
