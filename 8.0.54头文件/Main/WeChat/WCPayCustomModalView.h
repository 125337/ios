@interface WCPayCustomModalView : MMWindowViewController <WCPayWebImageViewDelegate, WCPayVoidCallbackDelegate>
{
    BOOL _m_protocolSelected; // +0x74
    BOOL _m_hasClickProtocol; // +0x75
    double _backgroundWidth; // +0x78
    double _backgroundY; // +0x80
    NSString * _leftNaviName; // +0x88
    CustomModal * _m_customModal; // +0x90
    id <WCPayCustomModalViewDelegate> _m_delegate; // +0x98
    UIView * _m_backgroundView; // +0xa0
    UIView * _m_navigationView; // +0xa8
    UIScrollView * _m_contentView; // +0xb0
    UIView * _m_itemSectionView; // +0xb8
    WCPayWebImageView * _m_leftImageView; // +0xc0
    UIButton * _m_leftButton; // +0xc8
    KindaRichLabelViewV2 * _m_titleView; // +0xd0
    NSMutableArray * _m_contentArray; // +0xd8
    UIButton * _m_confirmButton; // +0xe0
    RouteInfo * _m_confirmRoute; // +0xe8
    NSMutableArray * _m_richLabelArray; // +0xf0
}
- (id)initWithModal:(id)arg1 delegate:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateView;
- (void)updateBackgroundView;
- (void)updateNavigationView;
- (void)updateLeftImageView;
- (void)updateLeftButton;
- (void)updateTitleView;
- (double)updateContent;
- (double)updateTextView:(double)arg1 textData:(id)arg2;
- (double)updateImageView:(double)arg1 imageData:(id)arg2;
- (double)updateItemSection:(double)arg1 Data:(id)arg2;
- (double)updateProtocolButton:(double)arg1 protocolButtonData:(id)arg2;
- (void)clickCheckBox:(id)arg1;
- (void)clickConfirmButton;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)onLeftButtonClick;
- (double)backgroundWidth;
- (void)setBackgroundWidth:(double)arg1;
- (double)backgroundY;
- (void)setBackgroundY:(double)arg1;
- (id)leftNaviName;
- (void)setLeftNaviName:(id)arg1;
- (id)m_customModal;
- (void)setM_customModal:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (id)m_navigationView;
- (void)setM_navigationView:(id)arg1;
- (id)m_contentView;
- (void)setM_contentView:(id)arg1;
- (id)m_itemSectionView;
- (void)setM_itemSectionView:(id)arg1;
- (id)m_leftImageView;
- (void)setM_leftImageView:(id)arg1;
- (id)m_leftButton;
- (void)setM_leftButton:(id)arg1;
- (id)m_titleView;
- (void)setM_titleView:(id)arg1;
- (id)m_contentArray;
- (void)setM_contentArray:(id)arg1;
- (BOOL)m_protocolSelected;
- (void)setM_protocolSelected:(BOOL)arg1;
- (BOOL)m_hasClickProtocol;
- (void)setM_hasClickProtocol:(BOOL)arg1;
- (id)m_confirmButton;
- (void)setM_confirmButton:(id)arg1;
- (id)m_confirmRoute;
- (void)setM_confirmRoute:(id)arg1;
- (id)m_richLabelArray;
- (void)setM_richLabelArray:(id)arg1;
- (void).cxx_destruct;
@end

