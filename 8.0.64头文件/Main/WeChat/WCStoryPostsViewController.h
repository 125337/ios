@interface WCStoryPostsViewController : MMUIViewController <WCActionSheetDelegate, MMNewTipsMgrExt>
{
    unsigned int _scene; // +0x70
    UISegmentedControl * _segmentedControl; // +0x78
    MMUnderlineTabsView * _underlineTabView; // +0x80
    UILabel * _textStateLabel; // +0x88
    MMUIViewController * _textStateViewController; // +0x90
    WCStoryHistoryViewController * _storyViewController; // +0x98
    WCStoryAlbumViewController * _albumViewController; // +0xa0
    unsigned long long _defaultSelectedTag; // +0xa8
}
- (id)init;
- (id)initWithPostsScene:(unsigned int)arg1 withRequestType:(unsigned int)arg2;
- (id)initWithPostsScene:(unsigned int)arg1 AndDefaultTag:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setupViews;
- (void)configViewControllers;
- (id)segmentedControl;
- (void)clickSegmentedControl;
- (void)initNavTitleView;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)clickTimelineTab;
- (void)clickStoryTab;
- (void)onClikeTextStateMsg;
- (void)replaceFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)registerYReportSdk;
- (void)setSegmentedControl:(id)arg1;
- (id)underlineTabView;
- (void)setUnderlineTabView:(id)arg1;
- (id)textStateLabel;
- (void)setTextStateLabel:(id)arg1;
- (id)textStateViewController;
- (void)setTextStateViewController:(id)arg1;
- (id)storyViewController;
- (void)setStoryViewController:(id)arg1;
- (id)albumViewController;
- (void)setAlbumViewController:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned long long)defaultSelectedTag;
- (void)setDefaultSelectedTag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
