@interface WCPayQRCodeRewardCodeView : MMUIView <UITextFieldDelegate>
{
    id <WCPayQRCodeRewardCodeViewDelegate> _delegate; // +0x8
    WCPayControlData * _controlData; // +0x10
    long long _currentCodeDisplayMode; // +0x18
    NSString * _inputContent; // +0x20
    WCPayWebImageView * _codeImageView; // +0x28
    UIImageView * _headImgView; // +0x30
    UITextField * _textField; // +0x38
    UIButton * _photoHitButton; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 codeDelegate:(id)arg2 controlData:(id)arg3;
- (void)setupContentView;
- (void)updateAccessibility;
- (id)getSelfHeaderImageViewWithImgLen:(double)arg1;
- (BOOL)loadCacheCodeViewIfExist;
- (void)photoHitBtnClick;
- (void)changeToHeadImgMode;
- (void)changeToInputMode;
- (void)codeViewSetWordingSucc;
- (void)codeViewSetWordingFail;
- (void)codeViewRemovewordingSucc;
- (void)codeViewRemoveWordingFail;
- (void)confirmChangeToHeadImgMode;
- (void)confirmChangeToInputMode;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)controlData;
- (void)setControlData:(id)arg1;
- (long long)currentCodeDisplayMode;
- (void)setCurrentCodeDisplayMode:(long long)arg1;
- (id)inputContent;
- (void)setInputContent:(id)arg1;
- (id)codeImageView;
- (void)setCodeImageView:(id)arg1;
- (id)headImgView;
- (void)setHeadImgView:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)photoHitButton;
- (void)setPhotoHitButton:(id)arg1;
- (void).cxx_destruct;
@end
