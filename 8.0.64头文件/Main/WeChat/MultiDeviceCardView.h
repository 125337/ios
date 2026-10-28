@interface MultiDeviceCardView : UIView
{
    id <MultiDeviceCardViewDelegate> _delegate; // +0x8
    unsigned long long _type; // +0x10
    MultiDeviceCardLoginContentView * _deviceLoginContentView; // +0x18
    MultiDeviceLoginInfo * _deviceLoginInfo; // +0x20
    MultiDeviceCardManageContentView * _deviceManageContentView; // +0x28
    MultiDeviceManageInfo * _deviceManageInfo; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)reloadView;
- (void)reset;
- (void)changeForLoginWithInfo:(id)arg1;
- (id)getLoginConfirmInfo;
- (void)onLoginConfirmFailed;
- (void)changeForManageWithInfo:(id)arg1;
- (void)updateFrameWithContentView:(id)arg1;
- (void)setExpand:(BOOL)arg1;
- (BOOL)isExpand;
- (void)setSingleCard:(BOOL)arg1;
- (BOOL)isSingleCard;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)deviceLoginContentView;
- (void)setDeviceLoginContentView:(id)arg1;
- (id)deviceLoginInfo;
- (void)setDeviceLoginInfo:(id)arg1;
- (id)deviceManageContentView;
- (void)setDeviceManageContentView:(id)arg1;
- (id)deviceManageInfo;
- (void)setDeviceManageInfo:(id)arg1;
- (void).cxx_destruct;
@end
