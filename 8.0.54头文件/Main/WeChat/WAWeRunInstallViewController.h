@interface WAWeRunInstallViewController : MMUIViewController <contactVerifyLogicDelegate>
{
    CContact * m_weSportContact; // +0x68
    NSString * m_nsWeappName; // +0x70
    id /* block */ m_callBack; // +0x78
    CContactVerifyLogic * m_oLogic; // +0x80
    UIScrollView * _backgroundScrollView; // +0x88
    UIView * m_headerView; // +0x90
    MMHeadImageView * m_headImgView; // +0x98
    double m_headImgOriginalWidth; // +0xa0
    double m_headImgOriginalHeight; // +0xa8
    double m_headImgOriginalImageWidth; // +0xb0
    double m_headImgOriginalImageHeight; // +0xb8
    MMUILabel * m_displayNameLabel; // +0xc0
    UIView * m_statusView; // +0xc8
    MMUILabel * m_statusLabel; // +0xd0
    UIImageView * m_statusImgView; // +0xd8
    UIView * m_descView; // +0xe0
    UIView * m_separateLine; // +0xe8
    MMUILabel * m_descTitleLabel; // +0xf0
    UIView * m_descTipsIcon; // +0xf8
    MMUILabel * m_descTipsLabel; // +0x100
    UIButton * m_installBtn; // +0x108
    BOOL bIsClosed; // +0x110
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

