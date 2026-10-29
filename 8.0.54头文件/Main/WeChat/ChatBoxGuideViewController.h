@interface ChatBoxGuideViewController : MMPageSheetBaseViewController
{
    NSString * _chatroomUsername; // +0x68
    UILabel * _titleLabel; // +0x70
    UIView * _animateView; // +0x78
    UIButton * _confirmButton; // +0x80
    MMUIButton * _goButton; // +0x88
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onClickConfirmButton:(id)arg1;
- (void)onClickGoButton:(id)arg1;
- (id)chatroomUsername;
- (void)setChatroomUsername:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)animateView;
- (void)setAnimateView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)goButton;
- (void)setGoButton:(id)arg1;
- (void).cxx_destruct;
@end

