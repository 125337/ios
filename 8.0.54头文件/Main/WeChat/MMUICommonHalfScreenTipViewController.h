@interface MMUICommonHalfScreenTipViewController : MMUIHalfScreenViewController
{
    MMUIButton * m_backgroundButton; // +0x68
    MMUIView * m_contentView; // +0x70
    MMUILabel * m_titleView; // +0x78
    MMUILabel * m_descContentView; // +0x80
    UIButton * m_operateButton; // +0x88
    UIButton * m_cancelButton; // +0x90
    MMUIView * m_descContentSegmenView; // +0x98
    MMCommonHalfScreenTipViewConfigParam * m_viewConfigParam; // +0xa0
    BOOL _m_isDarkMode; // +0xa8
    unsigned int _m_viewConfigFlag; // +0xac
    MMUIButton * _closeButton; // +0xb0
    id <MMUICommonHalfScreenTipViewControllerDelegate> _m_delegate; // +0xb8
}
- (id)initWithViewConfigParam:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)getViewConfigParam;
- (void)initData;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;
- (id)closeButton;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutDescContentView;
- (void)layoutDescContentSegmenView;
- (void)layoutOperateButton;
- (void)layoutCancelButton;
- (void)appendDescContentSegmenView:(id)arg1 contentSegmenView:(id)arg2 isLastSegmen:(BOOL)arg3;
- (double)getTitleViewTop;
- (double)getDescContentViewTop;
- (double)getDescContentViewBottom;
- (double)getOperateButtonBottom;
- (double)getCommonHalfScreenTipViewHeight;
- (void)onClickClose:(id)arg1;
- (void)onClickOperateButton:(id)arg1;
- (void)onClickCancelButtonButton:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)setCloseButton:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_isDarkMode;
- (void)setM_isDarkMode:(BOOL)arg1;
- (unsigned int)m_viewConfigFlag;
- (void)setM_viewConfigFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

