@interface IntelligentMsgImgTipViewController : MMUIHalfScreenViewController <UIViewControllerAnimatedTransitioning>
{
    MMUIButton * m_backgroundButton; // +0x70
    MMUIView * m_contentView; // +0x78
    MMUILabel * m_titleView; // +0x80
    MMUILabel * m_descContentView; // +0x88
    BOOL _m_isDarkMode; // +0x90
    MMUIButton * _closeButton; // +0x98
    id <IntelligentMsgImgTipViewControllerDelegate> _m_delegate; // +0xa0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initData;
- (long long)overrideUserInterfaceStyle;
- (id)closeButton;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutDescContentView;
- (void)onClickClose:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)setCloseButton:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_isDarkMode;
- (void)setM_isDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
