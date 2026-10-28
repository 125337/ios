@interface WCPayCardNumberConfirmViewController : WCPayBaseViewController <WCPayLogicMgrExt>
{
    BOOL _didRenderViews; // +0x98
    NSString * _origin3DESText; // +0xa0
    id <WCPayFillCardNumberViewControllerDelegate> _delegate; // +0xa8
    NSString * _encryptedCardNumStr; // +0xb0
    UIImage * _cardImage; // +0xb8
    MMUILabel * _label; // +0xc0
    TenpayEditableBankNum * _editBankNumView; // +0xc8
    UIImageView * _cardImageView; // +0xd0
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setupViewsIfNeed;
- (id)getContainerView;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (void)nextAction:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)encryptedCardNumStr;
- (void)setEncryptedCardNumStr:(id)arg1;
- (id)cardImage;
- (void)setCardImage:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)editBankNumView;
- (void)setEditBankNumView:(id)arg1;
- (id)cardImageView;
- (void)setCardImageView:(id)arg1;
- (void).cxx_destruct;
@end
