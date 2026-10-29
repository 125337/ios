@interface MMLiveSyndicateParticipantIntroductionViewController : MMUIViewController <UITextViewDelegate, WCFinderCreateCoordinatorDelegate, MMLiveTermsOfServiceViewControllerDelegate, MMLiveNameVerifyViewControllerDelegate>
{
    BOOL _tosAccepted; // +0x70
    NSString * _finderUsername; // +0x78
    unsigned long long _syndicateId; // +0x80
    WCFinderContact * _initiator; // +0x88
    unsigned long long _settlementMode; // +0x90
    MMFinderLiveAgreementLogic * _agreementLogic; // +0x98
    unsigned long long _failure; // +0xa0
    NSString * _errorMessage; // +0xa8
    NSString * _spamJumpUri; // +0xb0
    WCFinderHeadImageView * _avatar; // +0xb8
    UIImageView * _errorIcon; // +0xc0
    UILabel * _nickname; // +0xc8
    UILabel * _titleLabel; // +0xd0
    UITextView * _introduction; // +0xd8
    UIButton * _acceptButton; // +0xe0
    UIButton * _cancelButton; // +0xe8
}
- (id)initWithFinderUsername:(id)arg1 syndicateId:(unsigned long long)arg2 initiatorContact:(id)arg3 settlementMode:(unsigned long long)arg4 agreementInfo:(id)arg5;
- (id)initWithGenericErrorMessage:(id)arg1;
- (id)initWithNoAccountErrorMessage:(id)arg1;
- (id)initWithIdNotVerifiedErrorMessage:(id)arg1;
- (void)setFailure:(unsigned long long)arg1;
- (void)setErrorMessage:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(_NSRange)arg3;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)onTermsOfServiceAccepted:(id)arg1;
- (void)onTermsOfServiceDeclined:(id)arg1;
- (void)onMMLiveNameVerifyViewControllerNameVerifySucceeded:(long long)arg1;
- (void)onAcceptTapped;
- (void)onCloseTapped;
- (void)navigateToWaitingPage;
- (void)pushParticipantStarterVCWithSyndicateModel:(id)arg1 prepareResponseModel:(id)arg2;
- (void)initializeComponents;
- (id)introductionString;
- (void)updateViews;
- (void)handleAccept;
- (void)handleCreateAccount;
- (void)handleTosWithIdVerificationFollowup:(BOOL)arg1;
- (void)handleIdVerification;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)syndicateId;
- (void)setSyndicateId:(unsigned long long)arg1;
- (id)initiator;
- (void)setInitiator:(id)arg1;
- (unsigned long long)settlementMode;
- (void)setSettlementMode:(unsigned long long)arg1;
- (id)agreementLogic;
- (void)setAgreementLogic:(id)arg1;
- (unsigned long long)failure;
- (id)errorMessage;
- (BOOL)tosAccepted;
- (void)setTosAccepted:(BOOL)arg1;
- (id)spamJumpUri;
- (void)setSpamJumpUri:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)errorIcon;
- (void)setErrorIcon:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)introduction;
- (void)setIntroduction:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end
