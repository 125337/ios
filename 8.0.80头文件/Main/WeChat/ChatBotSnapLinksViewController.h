@interface ChatBotSnapLinksViewController : MMUIViewController
{
    MMUIButton * _backBtn; // +0x70
    MMUILabel * _emptyLabel; // +0x78
    ChatBotHorizontalPageView * _horizontalPageView; // +0x80
    ChatBotMiniToolListView * _miniToolListView; // +0x88
    NSMutableArray * _pageContentArray; // +0x90
}
- (id)init;
- (void)viewDidLoad;
- (void)layoutBackBtn;
- (double)safeAreaTop;
- (void)viewSafeAreaInsetsDidChange;
- (void)layoutEmptyLabel;
- (void)setupContentView;
- (void)loadUserToolList;
- (void)updateMiniToolTabWithToolListInfo:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)close;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)horizontalPageView;
- (void)setHorizontalPageView:(id)arg1;
- (id)miniToolListView;
- (void)setMiniToolListView:(id)arg1;
- (id)pageContentArray;
- (void)setPageContentArray:(id)arg1;
- (void).cxx_destruct;
@end
