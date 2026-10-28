@interface ShareToGoodLookComfirmView : UIView <UITextFieldDelegate>
{
    id /* block */ _cancelBlock; // +0x8
    id /* block */ _sendBlock; // +0x10
    NSString * _title; // +0x18
    NSString * _detailText; // +0x20
    NSString * _editPlaceHolder; // +0x28
    UIImage * _thumbImage; // +0x30
    NSString * _thumbImageURL; // +0x38
    UIView * _curMaskView; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _detailTextLabel; // +0x50
    UIView * _detailBackgroundView; // +0x58
    UIButton * _confirmButton; // +0x60
    UIButton * _cancelButton; // +0x68
    UITextField * _thoughtsTextField; // +0x70
    UIView * _horizationLineView; // +0x78
    UIView * _verticalLineView; // +0x80
    UIView * _textFieldUnderLineView; // +0x88
    UILabel * _tipsLabel; // +0x90
    MMWebImageView * _thumbImageView; // +0x98
    double _currentKeyboardOffset; // +0xa0
}
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 editPlaceHodler:(id)arg3 thumbImage:(id)arg4 thumbImageURL:(id)arg5 sendBlock:(id /* block */)arg6 cancelBlock:(id /* block */)arg7;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initSubviews;
- (double)viewHeight;
- (void)layoutSubviews;
- (void)insertTips:(id)arg1;
- (void)showInView:(id)arg1;
- (void)showInView:(id)arg1 withTips:(id)arg2;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)tapOutsideKeyboard;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onHandleSendButtonClicked:(id)arg1;
- (void)onHandleCancelButtonClicked:(id)arg1;
- (id)titleLabel;
- (id)detailTextLabel;
- (id)detailBackgroundView;
- (id)confirmButton;
- (id)cancelButton;
- (id)thoughtsTextField;
- (id)thumbImageView;
- (id)horizationLineView;
- (id)verticalLineView;
- (id)tipsLabel;
- (id)textFieldUnderLineView;
- (BOOL)shouldShowCoverView;
- (double)adaptedViewWidthIn:(id)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)sendBlock;
- (void)setSendBlock:(id /* block */)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)detailText;
- (void)setDetailText:(id)arg1;
- (id)editPlaceHolder;
- (void)setEditPlaceHolder:(id)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)thumbImageURL;
- (void)setThumbImageURL:(id)arg1;
- (id)curMaskView;
- (void)setCurMaskView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailTextLabel:(id)arg1;
- (void)setDetailBackgroundView:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setThoughtsTextField:(id)arg1;
- (void)setHorizationLineView:(id)arg1;
- (void)setVerticalLineView:(id)arg1;
- (void)setTextFieldUnderLineView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setThumbImageView:(id)arg1;
- (double)currentKeyboardOffset;
- (void)setCurrentKeyboardOffset:(double)arg1;
- (void).cxx_destruct;
@end
