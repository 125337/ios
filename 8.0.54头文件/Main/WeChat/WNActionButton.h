@interface WNActionButton : UIView
{
    BOOL _isShowBorder; // +0x8
    long long _dataSourceType; // +0x10
    id <WNActionButtonDelegate> _delegate; // +0x18
    UIButton * _button; // +0x20
}
- (id)initButtonWithInfo:(id)arg1;
- (id)generateStandButtonWithTitle:(id)arg1 andImage:(id)arg2 andFont:(id)arg3 andWidth:(double)arg4 andType:(long long)arg5;
- (id)generateSystemButtonWithTitle:(id)arg1 andImage:(id)arg2 andType:(long long)arg3;
- (void)onLabelClick:(id)arg1;
- (void)setIsShowBorder:(BOOL)arg1;
- (long long)dataSourceType;
- (void)setDataSourceType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (BOOL)isShowBorder;
- (void).cxx_destruct;
@end

