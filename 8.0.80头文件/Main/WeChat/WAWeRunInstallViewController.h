@interface WAWeRunInstallViewController : MMUIViewController <contactVerifyLogicDelegate>
{
    CContact * m_weSportContact; // +0x70
    NSString * m_nsWeappName; // +0x78
    id /* block */ m_callBack; // +0x80
    CContactVerifyLogic * m_oLogic; // +0x88
    UIScrollView * _backgroundScrollView; // +0x90
    UIView * m_headerView; // +0x98
    MMHeadImageView * m_headImgView; // +0xa0
    double m_headImgOriginalWidth; // +0xa8
    double m_headImgOriginalHeight; // +0xb0
    double m_headImgOriginalImageWidth; // +0xb8
    double m_headImgOriginalImageHeight; // +0xc0
    MMUILabel * m_displayNameLabel; // +0xc8
    UIView * m_statusView; // +0xd0
    MMUILabel * m_statusLabel; // +0xd8
    UIImageView * m_statusImgView; // +0xe0
    UIView * m_descView; // +0xe8
    UIView * m_separateLine; // +0xf0
    MMUILabel * m_descTitleLabel; // +0xf8
    UIView * m_descTipsIcon; // +0x100
    MMUILabel * m_descTipsLabel; // +0x108
    UIButton * m_installBtn; // +0x110
    BOOL bIsClosed; // +0x118
}
- (id)initWithContact:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)onCloseModalView:(id)arg1;
- (void)layoutHeaderView;
- (void)layoutDescView;
- (void)layoutFooterView;
- (void)installPlugin;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)handleAddedContact;
- (id)m_nsWeappName;
- (void)setM_nsWeappName:(id)arg1;
- (void).cxx_destruct;
@end
