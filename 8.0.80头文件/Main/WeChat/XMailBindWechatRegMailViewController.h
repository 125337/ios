@interface XMailBindWechatRegMailViewController : MMUIViewController <ILinkEventExt>
{
    UIScrollView * m_scrollView; // +0x70
    NSString * _mailAddr; // +0x78
    NSString * _loginUrl; // +0x80
    NSString * _headUrl; // +0x88
    id /* block */ _onClickConfirmBlock; // +0x90
    id /* block */ _onClickUseOtherMailBlock; // +0x98
}
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)onReturn;
- (void)onClickConfirmBtn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)mailAddr;
- (void)setMailAddr:(id)arg1;
- (id)loginUrl;
- (void)setLoginUrl:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (id /* block */)onClickConfirmBlock;
- (void)setOnClickConfirmBlock:(id /* block */)arg1;
- (id /* block */)onClickUseOtherMailBlock;
- (void)setOnClickUseOtherMailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
