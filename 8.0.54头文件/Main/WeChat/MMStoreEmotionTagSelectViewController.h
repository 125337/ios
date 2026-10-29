@interface MMStoreEmotionTagSelectViewController : MMUIViewController <FavTagEditViewDelegate>
{
    UIViewController * m_blurViewController; // +0x68
    UIView * m_backgroundView; // +0x70
    NSArray * m_tagDescList; // +0x78
    NSDictionary * m_tagDic; // +0x80
    NSString * m_lastSelectedTagDesc; // +0x88
    MMUIScrollView * m_scrollView; // +0x90
    FavTagListView * m_tagListView; // +0x98
    id <MMStoreEmotionTagSelectDelegate> _delegate; // +0xa0
}
- (id)initWithTagList:(id)arg1 AndSelectedTag:(id)arg2;
- (void)setBlurViewFromViewController:(id)arg1;
- (void)viewDidLoad;
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

