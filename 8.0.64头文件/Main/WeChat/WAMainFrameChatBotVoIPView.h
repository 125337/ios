@interface WAMainFrameChatBotVoIPView : UIView
{
    UILabel * _titleLabel; // +0x8
    UIButton * _voipBtn; // +0x10
    UILabel * _descLabel; // +0x18
}
+ (double)ContentWidth;
- (id)init;
- (void)layoutSubviews;
- (void)layoutTitleLabel;
- (void)layoutVoIPButton;
- (void)layoutDescLabel;
- (void)startVoIP;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)voipBtn;
- (void)setVoipBtn:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
