@interface IntelligentMsgImgStartUsingViewController : MMUIHalfScreenViewController <IntelligentMsgImgTipViewControllerDelegate>
{
    UIButton * m_makeSureButton; // +0x68
    UIButton * m_makeRejectButton; // +0x70
    MMUIButton * m_backgroundButton; // +0x78
    MMScrollView * m_contentView; // +0x80
    MMUILabel * m_titleView; // +0x88
    MMUILabel * m_descContentView; // +0x90
    MMUIImageView * m_imageView; // +0x98
    MMUIView * m_operateView; // +0xa0
    MMUIButton * m_protectButton; // +0xa8
    MMUIButton * m_explainButton; // +0xb0
    MMUIView * m_operateViewIntervalView; // +0xb8
    double m_contentViewTop; // +0xc0
    BOOL _m_isDarkMode; // +0xc8
    id <IntelligentMsgImgStartUsingViewControllerDelegate> _m_delegate; // +0xd0
    NSString * _m_sessionId; // +0xd8
    NSString * _m_nsChatName; // +0xe0
}
- (void)viewDidLoad;
- (void)initData;
- (long long)overrideUserInterfaceStyle;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutDescContentView;
- (void)layoutImageView;
- (void)layoutMakeRejectButton;
- (void)layoutMakeSureButton;
- (void)layoutOperateView;
- (id)genOperateViewButton:(id)arg1;
- (void)OnMakeRejectButtionClick;
- (void)OnMakeSureButtionClick;
- (void)OnProtectButtionClick;
- (void)OnExplainButtionClick;
- (void)showImgTipViewController;
- (void)onClickClose:(id)arg1;
- (void)OnIntelligentMsgImgCloseButtionClick;
- (id)navigationBarBackgroundColor;
- (void)traitCollectionDidChange:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_sessionId;
- (void)setM_sessionId:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (BOOL)m_isDarkMode;
- (void)setM_isDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

