@interface LoginUserCellView : UIView
{
    BOOL _isLoginStateViewShowing; // +0x8
    LoginUserCellViewModel * _viewModel; // +0x10
    EmoticonCellLikeButton * _backgroundBtn; // +0x18
    UIImageView * _headImageView; // +0x20
    MMUILabel * _loginNameLabel; // +0x28
    MMUILabel * _userNameLabel; // +0x30
    UIButton * _deleteBtn; // +0x38
    UILabel * _currentLoginLabel; // +0x40
    MMUILabel * _loginLoadingLabel; // +0x48
    UILabel * _errorInfoLabel; // +0x50
}
- (void)configCurrentLoginLabel;
- (void)configLoginLoadingLabel;
- (void)configErrorInfoLabel;
- (void)updateViewWithAnimated:(BOOL)arg1;
- (void)updateBGViewStateWithAnimated:(BOOL)arg1;
- (void)updateLoginStateWithAnimated:(BOOL)arg1;
- (void)updateDeleteModeStateWithAnimated:(BOOL)arg1;
- (void)updateAccessibilityElements;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)backgroundBtn;
- (void)setBackgroundBtn:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)loginNameLabel;
- (void)setLoginNameLabel:(id)arg1;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg1;
- (id)deleteBtn;
- (void)setDeleteBtn:(id)arg1;
- (id)currentLoginLabel;
- (void)setCurrentLoginLabel:(id)arg1;
- (id)loginLoadingLabel;
- (void)setLoginLoadingLabel:(id)arg1;
- (id)errorInfoLabel;
- (void)setErrorInfoLabel:(id)arg1;
- (BOOL)isLoginStateViewShowing;
- (void)setIsLoginStateViewShowing:(BOOL)arg1;
- (void).cxx_destruct;
@end

