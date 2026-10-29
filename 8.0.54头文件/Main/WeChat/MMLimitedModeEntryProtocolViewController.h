@interface MMLimitedModeEntryProtocolViewController : MMUIHalfScreenViewController <ILinkEventExt>
{
    MMUIView * m_contentView; // +0x68
    MMUILabel * m_titleView; // +0x70
    RichTextView * m_descContentView; // +0x78
    UIButton * m_agreeButton; // +0x80
    UIButton * m_disagreeButton; // +0x88
    MMUIButton * _closeButton; // +0x90
    long long _scene; // +0x98
    id <MMLimitedModeEntryProtocolViewControllerDelegate> _m_delegate; // +0xa0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initData;
- (void)viewDidTransitionToNewSize;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutDescContentView;
- (void)layoutDisagreeButton;
- (void)layoutAgreeButton;
- (void)onClickAgreeButton:(id)arg1;
- (void)onClickDisagreeButton:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

