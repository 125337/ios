@interface WCOFeedBackTips : MMWindowViewController <MMGrowTextViewDelegate, InputControllerDelegate, IMMGrowTextViewExt>
{
    BOOL _hasInputSth; // +0x74
    int _roomid; // +0x78
    long long _callSeq; // +0x80
    UIView * _starView; // +0x88
    UIView * _feedWordingSubView; // +0x90
    UIView * _inviteView; // +0x98
    UIImageView * _backgroundView; // +0xa0
    double _tipsHeight; // +0xa8
    UIButton * _backgroundBtn; // +0xb0
    double _feedWordingSubViewHeight; // +0xb8
    NSMutableArray * _starBtnArr; // +0xc0
    NSMutableArray * _wordingBtnArr; // +0xc8
    UIView * _bottomBtnView; // +0xd0
    UIImageView * _inputView; // +0xd8
    EmoticonBoardView * _moticonBoardView; // +0xe0
    UIButton * _expressionButton; // +0xe8
    MMGrowTextView * _textView; // +0xf0
    UIView * _textBackgroundImage; // +0xf8
    WCInputController * _inputController; // +0x100
    NSMutableArray * _resitemArr; // +0x108
    long long _currStarTag; // +0x110
    NSString * _defaultShowText; // +0x118
    WCOutFeedbackCgi * _cgi; // +0x120
    UIButton * _confirmButton; // +0x128
}
- (id)init;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initData;
- (void)initStarView;
- (id)genBackgroundView;
- (void)initInputView;
- (void)initBottomButtons;
- (void)initInputToolView;
- (void)initInputController;
- (void)becomeInput;
- (void)resignInput;
- (void)onHideView:(id)arg1;
- (void)onClickStarBtn:(id)arg1;
- (void)onClickWordingBtn:(id)arg1;
- (void)onConfirm;
- (void)onCancelFeedback;
- (void)showLoadingOk;
- (void)didCommitText:(id)arg1;
- (void)didCommitEmptyText;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)keyboardWillShow;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (id)getInputText;
- (void)parseConfigXml:(id)arg1;
- (int)roomid;
- (void)setRoomid:(int)arg1;
- (long long)callSeq;
- (void)setCallSeq:(long long)arg1;
- (id)starView;
- (void)setStarView:(id)arg1;
- (id)feedWordingSubView;
- (void)setFeedWordingSubView:(id)arg1;
- (id)inviteView;
- (void)setInviteView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (double)tipsHeight;
- (void)setTipsHeight:(double)arg1;
- (id)backgroundBtn;
- (void)setBackgroundBtn:(id)arg1;
- (double)feedWordingSubViewHeight;
- (void)setFeedWordingSubViewHeight:(double)arg1;
- (id)starBtnArr;
- (void)setStarBtnArr:(id)arg1;
- (id)wordingBtnArr;
- (void)setWordingBtnArr:(id)arg1;
- (id)bottomBtnView;
- (void)setBottomBtnView:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)moticonBoardView;
- (void)setMoticonBoardView:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)textBackgroundImage;
- (void)setTextBackgroundImage:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)resitemArr;
- (void)setResitemArr:(id)arg1;
- (long long)currStarTag;
- (void)setCurrStarTag:(long long)arg1;
- (id)defaultShowText;
- (void)setDefaultShowText:(id)arg1;
- (BOOL)hasInputSth;
- (void)setHasInputSth:(BOOL)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end

