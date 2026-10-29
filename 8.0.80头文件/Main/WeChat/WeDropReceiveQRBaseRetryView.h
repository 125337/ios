@interface WeDropReceiveQRBaseRetryView : UIView <WeDropReceiveModuleView>
{
    UIView * _containerView; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    MMUIButton * _retryBtn; // +0x20
}
+ (double)expectingHeight:(double)arg1;
- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onRetryTapped;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)retryBtn;
- (void)setRetryBtn:(id)arg1;
- (void).cxx_destruct;
@end
