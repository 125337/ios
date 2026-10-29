@interface WCPayGPMemberFillMoneyCell : MMTableViewCell <UITextFieldDelegate>
{
    BOOL _disableEdit; // +0x8
    id <WCPayGPMemberFillMoneyCellDelegate> _delegate; // +0x10
    unsigned long long _maxPerAmount; // +0x18
    MMUIView * _cellContentView; // +0x20
    WCUITextField * _textField; // +0x28
    MMHeadImageView * _headImgView; // +0x30
    MMUILabel * _nicknameLabel; // +0x38
    MMUIView * _keyboardInputToolBar; // +0x40
    UIImageView * _checkMarkImgView; // +0x48
    MMUIView * _lineView; // +0x50
    MMUILabel * _postfixLabel; // +0x58
    MMUILabel * _tipsLabel; // +0x60
    MMUILabel * _commentLabel; // +0x68
    UIButton * _previousBtn; // +0x70
    UIButton * _nextBtn; // +0x78
    CContact * _contact; // +0x80
    double _payAmount; // +0x88
    NSString * _comment; // +0x90
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupContentView;
- (id)genKeyboardInputToolbar;
- (void)configLayout;
- (void)updateCellContentWithContact:(id)arg1 payAmount:(double)arg2 displayName:(id)arg3 needShowSepLine:(BOOL)arg4 comment:(id)arg5 disableEdit:(BOOL)arg6;
- (void)makeTextFieldBecomeFirstResponder;
- (void)setPreviousBtnEnable:(BOOL)arg1;
- (void)setNextBtnEnable:(BOOL)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)resignTextField;
- (void)previousTextField;
- (void)nextTextField;
- (id)accessibilityLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)maxPerAmount;
- (void)setMaxPerAmount:(unsigned long long)arg1;
- (id)cellContentView;
- (void)setCellContentView:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)headImgView;
- (void)setHeadImgView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)keyboardInputToolBar;
- (void)setKeyboardInputToolBar:(id)arg1;
- (id)checkMarkImgView;
- (void)setCheckMarkImgView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)postfixLabel;
- (void)setPostfixLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg1;
- (id)previousBtn;
- (void)setPreviousBtn:(id)arg1;
- (id)nextBtn;
- (void)setNextBtn:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (double)payAmount;
- (void)setPayAmount:(double)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (BOOL)disableEdit;
- (void)setDisableEdit:(BOOL)arg1;
- (void).cxx_destruct;
@end

