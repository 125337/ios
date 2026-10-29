@interface OpenIMAddContactRemindHalfScreenViewController : MMUIHalfScreenViewController
{
    UIButton * m_makeSureButton; // +0x70
    MMUIView * m_contentView; // +0x78
    MMUILabel * m_titleView; // +0x80
    MMHeadImageView * m_headImageView; // +0x88
    MMUILabel * m_descContentView; // +0x90
    MMUIScrollView * m_contentScrollView; // +0x98
    MMUILabel * m_nickNameTextLabel; // +0xa0
    MMUILabel * m_nickNamePostTextLabel; // +0xa8
    double m_contentViewTop; // +0xb0
    MMOpenIMAddContactRemindViewView * m_maskView; // +0xb8
    double m_descContentViewHeight; // +0xc0
    CGSize m_layoutSize; // +0xc8
    CContact * m_contact; // +0xd8
    MMUIButton * _closeButton; // +0xe0
    NSString * _m_nsDescContent; // +0xe8
    id <OpenIMAddContactRemindDelegate> _m_delegate; // +0xf0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
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
