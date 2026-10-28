@interface MMActionSheetMsgPreviewRowView : UIView
{
    MMUIButton * _rightButton; // +0x8
    CMessageWrap * _msgWrap; // +0x10
    id /* block */ _handler; // +0x18
}
+ (id)rowViewWithMsgWrap:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithMsgWrap:(id)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
