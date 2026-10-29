@interface CBTAsstDebugInfoViewController : MMUIViewController
{
    NSString * _aiSearchContent; // +0x70
    UIScrollView * _scrollView; // +0x78
    UILabel * _contentLabel; // +0x80
}
- (id)initWithDebugInfo:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupScrollView;
- (void)setupContentLabel;
- (id)aiSearchContent;
- (void)setAiSearchContent:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end
