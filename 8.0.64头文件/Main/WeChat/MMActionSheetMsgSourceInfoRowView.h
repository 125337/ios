@interface MMActionSheetMsgSourceInfoRowView : UIView
{
    MMUIButton * _rightButton; // +0x8
    CommonMessageSourceInfoHandler * _sourceInfoHandler; // +0x10
    MMUIViewController * _fromViewController; // +0x18
}
- (id)initWithSourceInfoHandler:(id)arg1 fromViewController:(id)arg2;
- (void)initViews;
- (void)layoutSubviews;
- (id)rightButton;
- (void)handleClick;
- (void)setRightButton:(id)arg1;
- (id)sourceInfoHandler;
- (void)setSourceInfoHandler:(id)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (void).cxx_destruct;
@end
