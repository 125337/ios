@interface TLProfileExpandableHeaderView : MMUIButton <TLProfileDetailContentViewDelegate, WCActionSheetDelegate>
{
    shared_ptr<ExpandUIConfig> _config; // +0x8
    BOOL _isNicknameUnsafe; // +0x18
    BOOL _isSignatureUnsafe; // +0x19
    BOOL _showSignature; // +0x1a
    id /* block */ _showConcatBlock; // +0x20
    id /* block */ _onTouchUpInsideBlock; // +0x28
    id /* block */ _navigationBlock; // +0x30
    NSString * _cpKeyForNickname; // +0x38
    NSString * _cpKeyForSignature; // +0x40
    UIImageView * _bkgMaskView; // +0x48
    TLProfileNicknameContainerView * _nicknameContainerView; // +0x50
    MMCPLabel * _infoLabel; // +0x58
    MMHeadImageView * _headImageView; // +0x60
    UITableView * _tableView; // +0x68
    TLProfileDragAnimateHelper * _animateHelper; // +0x70
    MMUIViewController * _viewController; // +0x78
    TLProfileModel * _profileModel; // +0x80
    MMCPLabel * _signatureLabel; // +0x88
    UIView * _accessibilityView; // +0x90
    CGRect _bkgRect; // +0x98
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithTableView:(id)arg1 animator:(id)arg2 viewController:(id)arg3 config:(shared_ptr<ExpandUIConfig>)arg4 bkgRect:(CGRect)arg5 profileModel:(id)arg6;
- (void)updateframe;
- (void)setShowSignature:(BOOL)arg1;
- (double)mediaViewBottomMargin;
- (double)mediaViewDrawDownBottomMargin;
- (id)bkgMaskView;
- (id)nicknameContainerView;
- (id)infoLabel;
- (id)headImageView;
- (id)signatureLabel;
- (void)setupUI;
- (void)showChangeBkgOption;
- (void)showContactInfo;
- (void)onTouchUpInside;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)loadAccessibilityView;
- (void)updateAccessibilityInfo;
- (void)updateAccessibilityElements;
- (void)updateProfileModel:(id)arg1;
- (void)updateExpandableHeaderView;
- (id /* block */)showConcatBlock;
- (void)setShowConcatBlock:(id /* block */)arg1;
- (id /* block */)onTouchUpInsideBlock;
- (void)setOnTouchUpInsideBlock:(id /* block */)arg1;
- (id /* block */)navigationBlock;
- (void)setNavigationBlock:(id /* block */)arg1;
- (id)cpKeyForNickname;
- (void)setCpKeyForNickname:(id)arg1;
- (id)cpKeyForSignature;
- (void)setCpKeyForSignature:(id)arg1;
- (BOOL)isNicknameUnsafe;
- (void)setIsNicknameUnsafe:(BOOL)arg1;
- (BOOL)isSignatureUnsafe;
- (void)setIsSignatureUnsafe:(BOOL)arg1;
- (void)setBkgMaskView:(id)arg1;
- (void)setNicknameContainerView:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)animateHelper;
- (void)setAnimateHelper:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (CGRect)bkgRect;
- (void)setBkgRect:(CGRect)arg1;
- (id)profileModel;
- (void)setProfileModel:(id)arg1;
- (void)setSignatureLabel:(id)arg1;
- (BOOL)showSignature;
- (id)accessibilityView;
- (void)setAccessibilityView:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
