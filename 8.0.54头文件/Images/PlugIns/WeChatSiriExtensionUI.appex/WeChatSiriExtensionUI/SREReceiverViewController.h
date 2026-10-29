@interface SREReceiverViewController : UIViewController
{
    INSendMessageIntent * _intent; // +0x8
    UIView * _recipientBackgroundView; // +0x10
    UILabel * _recipientsLabel; // +0x18
    UIView * _nameContainer; // +0x20
    UILabel * _nameLabel; // +0x28
}
- (void)viewDidLoad;
- (void)setupWithIntent:(id)arg1;
- (void)updateWithBackgroundImageLoaded:(BOOL)arg1;
- (id)intent;
- (void)setIntent:(id)arg1;
- (id)recipientBackgroundView;
- (void)setRecipientBackgroundView:(id)arg1;
- (id)recipientsLabel;
- (void)setRecipientsLabel:(id)arg1;
- (id)nameContainer;
- (void)setNameContainer:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (void).cxx_destruct;
@end

