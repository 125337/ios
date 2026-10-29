@interface WeDropReceiveWifiNotOnView : UIView <WeDropReceiveModuleView>
{
    UIView * _containerView; // +0x8
    UIImageView * _iconView; // +0x10
    MMUILabel * _descLabel; // +0x18
}
+ (double)expectingHeight:(double)arg1;
- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
