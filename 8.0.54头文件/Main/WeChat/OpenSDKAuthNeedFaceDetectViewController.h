@interface OpenSDKAuthNeedFaceDetectViewController : MMUIViewController <FaceRecogPrivateVerifyHandlerDelegate, UITextFieldDelegate, ILinkEventExt, UIGestureRecognizerDelegate>
{
    id <OpenSDKAuthNeedFaceDetectViewControllerDelegate> _delegate; // +0x68
    OpenSdkFaceDetectInfo * _faceDetectInfo; // +0x70
    UIView * _errorTipsBar; // +0x78
    UILabel * _titleLabel; // +0x80
    UILabel * _subtitleLabel; // +0x88
    UIButton * _confirmButton; // +0x90
    RichTextView * _richTextView; // +0x98
    UITextField * _nameTextField; // +0xa0
    UITextField * _idNumberTextFiled; // +0xa8
    UILabel * _nameLabel; // +0xb0
    UILabel * _idNumberLabel; // +0xb8
    UIView * _upperSeperatorLine; // +0xc0
    UIView * _middleSeperatorLine; // +0xc8
    UIView * _bottomSeperatorLine; // +0xd0
    AuthorizeCheckBox * _checkBox; // +0xd8
    MMURLHandler * _urlHandler; // +0xe0
    FaceRecogPrivateVerifyHandler * _faceHandler; // +0xe8
}
+ (BOOL)isFaceDetectInfoValid:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)addKeyboardObserver;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)onStartFaceDetect;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldInteractivePop;
- (void)configureLayout;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)nameLabel;
- (id)idNumberLabel;
- (id)nameTextField;
- (id)idNumberTextFiled;
- (id)upperSeperatorLine;
- (id)middleSeperatorLine;
- (id)bottomSeperatorLine;
- (id)confirmButton;
- (id)checkBox;
- (id)richTextView;
- (id)genCommonLabel;
- (id)genTextField;
- (id)genSeperatorLine;
- (void)onNavigationBackButtonClicked;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)checkParamsValidAndShowTipsIfInvalid;
- (BOOL)checkIDCardNumberValid:(id)arg1;
- (void)showErrorTipsBar:(id)arg1;
- (void)hideErrorTipsBar;
- (id)urlHandler;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)faceDetectInfo;
- (void)setFaceDetectInfo:(id)arg1;
- (id)errorTipsBar;
- (void)setErrorTipsBar:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (void)setNameTextField:(id)arg1;
- (void)setIdNumberTextFiled:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setIdNumberLabel:(id)arg1;
- (void)setUpperSeperatorLine:(id)arg1;
- (void)setMiddleSeperatorLine:(id)arg1;
- (void)setBottomSeperatorLine:(id)arg1;
- (void)setCheckBox:(id)arg1;
- (void)setUrlHandler:(id)arg1;
- (id)faceHandler;
- (void)setFaceHandler:(id)arg1;
- (void).cxx_destruct;
@end

