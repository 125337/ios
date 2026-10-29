@interface WAWebErrorView : MMUIView <MMWebImageViewDelegate>
{
    WAContact * m_contact; // +0x8
    NSString * m_title; // +0x10
    NSString * m_desc; // +0x18
    NSString * m_buttonTitle; // +0x20
    MMUILabel * m_descLabel; // +0x28
    MMUIButton * _quitButton; // +0x30
    BOOL m_isNeedGray; // +0x38
    BOOL m_isSupportDark; // +0x39
    MMWebImageView * m_logoView; // +0x40
    MMUILabel * m_titleLabel; // +0x48
    UIButton * m_operationButton; // +0x50
    NSObject<WAWebErrorViewDelegate> * _delegate; // +0x58
}
- (id)initWithUserName:(id)arg1 title:(id)arg2 desc:(id)arg3 supportDark:(BOOL)arg4;
- (id)initWithUserName:(id)arg1 title:(id)arg2 desc:(id)arg3 buttonTitle:(id)arg4 needGrayed:(BOOL)arg5 supportDark:(BOOL)arg6;
- (void)layoutSubviews;
- (void)initLogoView;
- (void)initTitleLabel;
- (void)showQuitButton;
- (void)onClickQuitButton;
- (void)initDescLabel;
- (void)initOperationButton;
- (void)onLoadImageOK:(id)arg1;
- (void)onOperationButtonTapped:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

