@interface IntelligentMsgImgStartUsingViewController : MMUIHalfScreenViewController <IntelligentMsgImgTipViewControllerDelegate>
{
    UIButton * m_makeSureButton; // +0x70
    UIButton * m_makeRejectButton; // +0x78
    MMUIButton * m_backgroundButton; // +0x80
    MMScrollView * m_contentView; // +0x88
    MMUILabel * m_titleView; // +0x90
    MMUILabel * m_descContentView; // +0x98
    MMUIImageView * m_imageView; // +0xa0
    MMUIView * m_operateView; // +0xa8
    MMUIButton * m_protectButton; // +0xb0
    MMUIButton * m_explainButton; // +0xb8
    MMUIView * m_operateViewIntervalView; // +0xc0
    double m_contentViewTop; // +0xc8
    double m_layoutContentWidth; // +0xd0
    BOOL _m_isDarkMode; // +0xd8
    id <IntelligentMsgImgStartUsingViewControllerDelegate> _m_delegate; // +0xe0
    NSString * _m_sessionId; // +0xe8
    NSString * _m_nsChatName; // +0xf0
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (long long)overrideUserInterfaceStyle;
- (void)layoutView;
- (void)updateContentHeight;
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
