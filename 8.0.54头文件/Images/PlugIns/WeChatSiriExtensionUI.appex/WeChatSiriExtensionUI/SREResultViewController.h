@interface SREResultViewController : UIViewController
{
    INSendMessageIntent * _intent; // +0x8
    UIImageView * _backgroundImageView; // +0x10
    UIView * _recipientBackgroundView; // +0x18
    UILabel * _resultLabel; // +0x20
    SREReceiverViewController * _receiverController; // +0x28
}
- (void)viewDidLoad;
- (void)setupWithIntent:(id)arg1;
- (void)updateWithBackgroundImage:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)intent;
- (void)setIntent:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)recipientBackgroundView;
- (void)setRecipientBackgroundView:(id)arg1;
- (id)resultLabel;
- (void)setResultLabel:(id)arg1;
- (id)receiverController;
- (void)setReceiverController:(id)arg1;
- (void).cxx_destruct;
@end

