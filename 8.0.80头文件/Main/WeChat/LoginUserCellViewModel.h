@interface LoginUserCellViewModel : NSObject
{
    BOOL _isLogin; // +0x8
    BOOL _isLoginLoading; // +0x9
    BOOL _disable; // +0xa
    BOOL _isDeleteMode; // +0xb
    LoginUserCellView * _cellView; // +0x10
    LoginUserInfo * _userInfo; // +0x18
    NSString * _errorInfo; // +0x20
    NSObject * _target; // +0x28
    SEL _clickCellSelector; // +0x30
    SEL _clickDeleteBtnSelector; // +0x38
}
- (void)setLoginCellWithAnimated:(BOOL)arg1;
- (void)setLoginLoadingCellWithAnimated:(BOOL)arg1;
- (void)setNormalCellWithErrorInfo:(id)arg1 animated:(BOOL)arg2;
- (void)updateLoginStateWithIsLogin:(BOOL)arg1 isLoginLoading:(BOOL)arg2 errorInfo:(id)arg3 animated:(BOOL)arg4;
- (void)setDisable:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIsDeleteMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)onClickCell;
- (void)onClickDeleteButton;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)isLogin;
- (void)setIsLogin:(BOOL)arg1;
- (BOOL)isLoginLoading;
- (void)setIsLoginLoading:(BOOL)arg1;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
- (BOOL)disable;
- (void)setDisable:(BOOL)arg1;
- (BOOL)isDeleteMode;
- (void)setIsDeleteMode:(BOOL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)clickCellSelector;
- (void)setClickCellSelector:(SEL)arg1;
- (SEL)clickDeleteBtnSelector;
- (void)setClickDeleteBtnSelector:(SEL)arg1;
- (void).cxx_destruct;
@end
