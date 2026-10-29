@interface WCAccountRegByOldPhoneViewController : WCAccountBaseViewController
{
    id <WCAccountRegByOldPhoneViewControllerDelegate> m_delegate; // +0x78
    MMWebImageView * _headImageView; // +0x80
    MMUILabel * _nicknameLabel; // +0x88
    MMUILabel * _contentLabel; // +0x90
    UIButton * _confirmButton; // +0x98
    UIButton * _cancelButton; // +0xa0
}
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)initNavigationBar;
- (void)initView;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end

