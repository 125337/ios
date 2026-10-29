@interface MMAuthorizeOverseasViewController : MMUIViewController <ILinkEventExt>
{
    id <MMAuthorizeViewControllerDelegate> _delegate; // +0x68
    UIButton * _comfirmBtn; // +0x70
    UIButton * _denyBtn; // +0x78
    UIView * _scrollContainerView; // +0x80
    UIScrollView * _scrollView; // +0x88
    CAGradientLayer * _gradientMaskLayer; // +0x90
    UILabel * _titleLabel; // +0x98
    UIImageView * _dot1; // +0xa0
    UIImageView * _dot2; // +0xa8
    RichTextView * _contentLabel1; // +0xb0
    RichTextView * _contentLabel2; // +0xb8
}
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (void)initTitleView;
- (void)initContentView;
- (id)genContentTextView;
- (void)fillContentLabel;
- (void)initFooterView;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (void)onReturn;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)comfirmBtn;
- (void)setComfirmBtn:(id)arg1;
- (id)denyBtn;
- (void)setDenyBtn:(id)arg1;
- (id)scrollContainerView;
- (void)setScrollContainerView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)dot1;
- (void)setDot1:(id)arg1;
- (id)dot2;
- (void)setDot2:(id)arg1;
- (id)contentLabel1;
- (void)setContentLabel1:(id)arg1;
- (id)contentLabel2;
- (void)setContentLabel2:(id)arg1;
- (void).cxx_destruct;
@end

