@interface WAWebActionSheet : MMObject
{
    UIScrollView * _containerView; // +0x8
    NSMutableArray * _buttonArray; // +0x10
    UIButton * _cancelButton; // +0x18
    long long _actionSheedId; // +0x20
    id <WAWebActionSheetDelegate> _delegate; // +0x28
    double _maxHeight; // +0x30
    UIView * _backgroundView; // +0x38
    WAWebViewController * _vc; // +0x40
    UIView * _view; // +0x48
    NSMutableArray * _buttonArr; // +0x50
    UILabel * _titleLabel; // +0x58
}
- (id)initWithWebView:(id)arg1;
- (void)dealloc;
- (void)setItems:(id)arg1 cancelText:(id)arg2 alertText:(id)arg3;
- (void)updateItems:(id)arg1;
- (void)updateCancelText:(id)arg1;
- (void)updateAlertText:(id)arg1;
- (void)setItemColor:(id)arg1 cancelColor:(id)arg2;
- (void)tapOut:(id)arg1;
- (void)onClickBtn:(id)arg1;
- (void)dismissAndCancel;
- (void)dismiss;
- (void)beforeShow;
- (void)afterShow;
- (void)onCancel;
- (void)onSelected:(long long)arg1;
- (void)setItemColor:(id)arg1 atIndex:(long long)arg2;
- (id)makeAlertTextViewWithText:(id)arg1 backgroundWidth:(double)arg2;
- (long long)actionSheedId;
- (void)setActionSheedId:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)buttonArr;
- (void)setButtonArr:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

