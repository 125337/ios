@interface ChatBotSnapLinksViewController : MMUIViewController
{
    MMUIButton * _backBtn; // +0x70
    MMUILabel * _titleLabel; // +0x78
    MMUILabel * _emptyLabel; // +0x80
    ChatBotHorizontalPageView * _horizontalPageView; // +0x88
}
- (void)viewDidLoad;
- (void)layoutBackBtn;
- (void)layoutTitleLabel;
- (void)layoutEmptyLabel;
- (void)setupContentView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)close;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)horizontalPageView;
- (void)setHorizontalPageView:(id)arg1;
- (void).cxx_destruct;
@end
