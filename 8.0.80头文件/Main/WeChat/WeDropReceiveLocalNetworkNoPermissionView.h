@interface WeDropReceiveLocalNetworkNoPermissionView : UIView <WeDropReceiveModuleView>
{
    UIView * _titleContainer; // +0x8
    UIImageView * _iconView; // +0x10
    MMUILabel * _descLabel; // +0x18
    UIButton * _actionBtn; // +0x20
}
+ (double)expectingHeight:(double)arg1;
- (id)init;
- (void)initSubviews;
- (void)onGoToSystemSettings;
- (void)layoutSubviews;
- (id)titleContainer;
- (void)setTitleContainer:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)actionBtn;
- (void)setActionBtn:(id)arg1;
- (void).cxx_destruct;
@end
