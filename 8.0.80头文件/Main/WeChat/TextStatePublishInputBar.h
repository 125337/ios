@interface TextStatePublishInputBar : UIView <WCInputViewProtocol>
{
    id <WCCommonInputViewDelegate> _delegate; // +0x8
    MMUIButton * _switchButton; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setInputMode:(unsigned long long)arg1;
- (void)onTapSwitchButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)switchButton;
- (void)setSwitchButton:(id)arg1;
- (void).cxx_destruct;
@end
