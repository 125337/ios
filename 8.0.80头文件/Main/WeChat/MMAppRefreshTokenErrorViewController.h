@interface MMAppRefreshTokenErrorViewController : MMUIViewController
{
    BOOL _isShare; // +0x70
    id <MMAppRefreshTokenErrorViewControllerDelegate> _delegate; // +0x78
    UIView * _errView; // +0x80
    UIView * _scrollView; // +0x88
    UIImageView * _imgView; // +0x90
    MMUILabel * _titleLabel; // +0x98
    UIButton * _confirmBtn; // +0xa0
}
- (void)viewDidLoad;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (void)onConfirmBtnClicked;
- (BOOL)isShare;
- (void)setIsShare:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)errView;
- (void)setErrView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)imgView;
- (void)setImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (void).cxx_destruct;
@end
