@interface IntelligentMsgImgTipViewController : MMUIHalfScreenViewController <UIViewControllerAnimatedTransitioning>
{
    MMUIButton * m_backgroundButton; // +0x70
    MMUIView * m_contentView; // +0x78
    MMUILabel * m_titleView; // +0x80
    MMUILabel * m_descContentView; // +0x88
    double m_layoutContentWidth; // +0x90
    BOOL _m_isDarkMode; // +0x98
    MMUIButton * _closeButton; // +0xa0
    id <IntelligentMsgImgTipViewControllerDelegate> _m_delegate; // +0xa8
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initData;
- (long long)overrideUserInterfaceStyle;
- (id)closeButton;
- (void)layoutView;
- (void)updateContentHeight;
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
