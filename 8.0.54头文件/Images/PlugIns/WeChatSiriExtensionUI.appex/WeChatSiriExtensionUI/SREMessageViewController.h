@interface SREMessageViewController : UIViewController
{
    INSendMessageIntent * _intent; // +0x8
    UIImageView * _backgroundImageView; // +0x10
    UIView * _recipientBackgroundView; // +0x18
    UIImageView * _bubleBgImgView; // +0x20
    UILabel * _messageLabel; // +0x28
    SREReceiverViewController * _receiverController; // +0x30
}
- (void)viewDidLoad;
- (void)setupWithIntent:(id)arg1;
- (BOOL)isMultipleLines;
- (void)viewDidLayoutSubviews;
- (void)updateWithBackgroundImage:(id)arg1;
- (id)intent;
- (void)setIntent:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)recipientBackgroundView;
- (void)setRecipientBackgroundView:(id)arg1;
- (id)bubleBgImgView;
- (void)setBubleBgImgView:(id)arg1;
- (id)messageLabel;
- (void)setMessageLabel:(id)arg1;
- (id)receiverController;
- (void)setReceiverController:(id)arg1;
- (void).cxx_destruct;
@end

