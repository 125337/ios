@interface WeDropNetworkItemModel : NSObject
{
    BOOL _showGotoSettingButton; // +0x8
    NSString * _number; // +0x10
    NSString * _tips; // +0x18
    unsigned long long _state; // +0x20
    unsigned long long _type; // +0x28
    UIView<WeDropNetworkPermissionCustomStatusView> * _customStateView; // +0x30
}
- (id)number;
- (void)setNumber:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)showGotoSettingButton;
- (void)setShowGotoSettingButton:(BOOL)arg1;
- (id)customStateView;
- (void)setCustomStateView:(id)arg1;
- (void).cxx_destruct;
@end
