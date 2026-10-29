@interface WCFinderPickerListDetailViewController : MMUIHalfScreenViewController
{
    UIView * _contentContainderView; // +0x68
    WCFinderFeedContentVM * _contentVM; // +0x70
    MMUIButton * _customCloseBtn; // +0x78
    UILabel * _titleLabel; // +0x80
    UIScrollView * _scrollView; // +0x88
    WCFinderHeadImageView * _headView; // +0x90
    UILabel * _nickNameLabel; // +0x98
    RichTextView * _textView; // +0xa0
    UIScrollView * _contentScrollView; // +0xa8
    RichTextView * _contentTextView; // +0xb0
}
- (id)initWithContentVM:(id)arg1;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)setupSubView;
- (id)topView;
- (id)titleLabel;
- (id)closeButton;
- (void)onClose;
- (id)contentContainderView;
- (void)setContentContainderView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)customCloseBtn;
- (void)setCustomCloseBtn:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (void).cxx_destruct;
@end

