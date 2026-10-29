@interface MMStoreEmotionTagSelectViewController : MMUIViewController <FavTagEditViewDelegate>
{
    UIViewController * m_blurViewController; // +0x70
    UIView * m_backgroundView; // +0x78
    NSArray * m_tagDescList; // +0x80
    NSDictionary * m_tagDic; // +0x88
    NSString * m_lastSelectedTagDesc; // +0x90
    MMUIScrollView * m_scrollView; // +0x98
    FavTagListView * m_tagListView; // +0xa0
    id <MMStoreEmotionTagSelectDelegate> _delegate; // +0xa8
}
- (id)initWithTagList:(id)arg1 AndSelectedTag:(id)arg2;
- (void)setBlurViewFromViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)initView;
- (void)configNavigationBar;
- (void)configScrollView;
- (void)updateScrollView;
- (void)configTagListView;
- (void)onTopBarFrameChanged;
- (void)configBackgrounView;
- (void)OnCancelClick;
- (void)onTagHighLight:(id)arg1;
- (void)onTouchEndBlankView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
