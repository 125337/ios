@interface WCFinderMoreLiveTagListHeaderView : UICollectionViewCell <WCFinderLiveTagListCollectionViewDelegate>
{
    BOOL _forceDarkMode; // +0x8
    id <WCFinderMoreLiveTagListHeaderViewDelegate> _delegate; // +0x10
    unsigned long long _commentScene; // +0x18
    WCFinderLiveTagListCollectionView * _tagListView; // +0x20
    WCFinderLiveTagListCollectionViewConfig * _config; // +0x28
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithSubTabList:(id)arg1 wholeTabInfo:(id)arg2 selectTabInfo:(id)arg3;
- (id)tagListView;
- (void)onTagListView:(id)arg1 didSelectedItem:(id)arg2 isToggle:(BOOL)arg3;
- (BOOL)canTagListViewUnToggle:(id)arg1 unToggleItem:(id)arg2 toggleItem:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (unsigned long long)commentScene;
- (void)setCommentScene:(unsigned long long)arg1;
- (void)setTagListView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
