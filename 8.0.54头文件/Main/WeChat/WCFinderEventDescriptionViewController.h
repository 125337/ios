@interface WCFinderEventDescriptionViewController : MMUIHalfScreenViewController <ILinkEventExt, WCFinderFeedBaseViewControllerProtocol>
{
    id <WCFinderEventDescriptionViewControllerDelegate> _descriptionDelegate; // +0x68
    MMUIButton * _exitBtn; // +0x70
    MMUILabel * _titleLabel; // +0x78
    UIScrollView * _descContainer; // +0x80
    UIView * _contactView; // +0x88
    WCFinderHeadImageView * _avatarImageView; // +0x90
    UILabel * _nicknameLabel; // +0x98
    WCFinderAuthInfoIconView * _authIconView; // +0xa0
    UILabel * _authInfoLabel; // +0xa8
    RichTextView * _descTextView; // +0xb0
    RichTextView * _statementView; // +0xb8
    FinderEventInfo * _eventInfo; // +0xc0
}
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)updateWithEventInfo:(id)arg1;
- (double)heightWithEventInfo:(id)arg1;
- (void)onExitBtnClicked;
- (void)onClickAuthorInfoAction;
- (id)exitBtn;
- (id)titleLabel;
- (id)descContainer;
- (id)contactView;
- (id)avatarImageView;
- (id)nicknameLabel;
- (id)authIconView;
- (id)authInfoLabel;
- (id)descTextView;
- (id)statementView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)descriptionDelegate;
- (void)setDescriptionDelegate:(id)arg1;
- (void)setExitBtn:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescContainer:(id)arg1;
- (void)setContactView:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setAuthInfoLabel:(id)arg1;
- (void)setDescTextView:(id)arg1;
- (void)setStatementView:(id)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (void).cxx_destruct;
@end

