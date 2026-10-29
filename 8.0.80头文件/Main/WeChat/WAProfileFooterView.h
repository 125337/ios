@interface WAProfileFooterView : UIView <ILinkEventExt>
{
    BOOL _needBottomFeedbackButton; // +0x8
    WAContact * _contact; // +0x10
    id /* block */ _eventAction; // +0x18
    UIView * _footerViewBackground; // +0x20
    UIView * _footerViewContainer; // +0x28
    RichTextView * _aboutOriginalView; // +0x30
    RichTextView * _teenagerProtectView; // +0x38
    MMUIView * _buttonSplitView; // +0x40
    UIButton * _bottomFeedBackButton; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)bottomFeedBackButton;
- (void)onBottomFeedBack;
- (void)setNeedBottomFeedbackButton:(BOOL)arg1;
- (void)setContact:(id)arg1;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (id)contact;
- (BOOL)needBottomFeedbackButton;
- (id /* block */)eventAction;
- (void)setEventAction:(id /* block */)arg1;
- (id)footerViewBackground;
- (void)setFooterViewBackground:(id)arg1;
- (id)footerViewContainer;
- (void)setFooterViewContainer:(id)arg1;
- (id)aboutOriginalView;
- (void)setAboutOriginalView:(id)arg1;
- (id)teenagerProtectView;
- (void)setTeenagerProtectView:(id)arg1;
- (id)buttonSplitView;
- (void)setButtonSplitView:(id)arg1;
- (void)setBottomFeedBackButton:(id)arg1;
- (void).cxx_destruct;
@end
