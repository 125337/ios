@interface OpenIMAddContactRemindHalfScreenViewController : MMUIHalfScreenViewController
{
    UIButton * m_makeSureButton; // +0x68
    MMUIView * m_contentView; // +0x70
    MMUILabel * m_titleView; // +0x78
    MMHeadImageView * m_headImageView; // +0x80
    MMUILabel * m_descContentView; // +0x88
    MMUIScrollView * m_contentScrollView; // +0x90
    MMUILabel * m_nickNameTextLabel; // +0x98
    MMUILabel * m_nickNamePostTextLabel; // +0xa0
    double m_contentViewTop; // +0xa8
    MMOpenIMAddContactRemindViewView * m_maskView; // +0xb0
    double m_descContentViewHeight; // +0xb8
    CContact * m_contact; // +0xc0
    MMUIButton * _closeButton; // +0xc8
    NSString * _m_nsDescContent; // +0xd0
    id <OpenIMAddContactRemindDelegate> _m_delegate; // +0xd8
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)closeButton;
- (void)layoutHalfScreenView;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutContentScrollView;
- (void)layoutTitleView;
- (void)layoutHeadView;
- (void)layoutNickNameTextLabel;
- (void)layoutNickNamePostTextLabel;
- (void)layoutDescContentView;
- (void)layoutMakeMaskView;
- (void)layoutMakeSureButton;
- (void)onClickClose:(id)arg1;
- (void)OnMakeSureButtionClick;
- (id)navigationBarBackgroundColor;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (id)m_nsDescContent;
- (void)setM_nsDescContent:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

