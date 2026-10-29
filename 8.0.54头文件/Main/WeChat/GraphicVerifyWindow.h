@interface GraphicVerifyWindow : MMUIWindow
{
    UIImageView * m_codeImageView; // +0x8
    UIButton * m_changeImgBtn; // +0x10
    UIButton * m_verifyBtn; // +0x18
    UIButton * m_cancelBtn; // +0x20
    UITextField * m_textFieldCode; // +0x28
    id <GraphicVerifyWindowDelegate> m_delegate; // +0x30
    UIWindow * oldKeyWindow; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)internalInit;
- (void)initHeaderView;
- (void)onGraphicVerifyChangeImage;
- (void)onGraphicVerifyBack;
- (void)onNext;
- (void)setDelegate:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)makeKeyAndVisible;
- (void)resignKeyWindow;
- (id)oldKeyWindow;
- (void)setOldKeyWindow:(id)arg1;
- (id)m_codeImageView;
- (void)setM_codeImageView:(id)arg1;
- (void).cxx_destruct;
@end

