@interface WCFinderProfileFeedPageHeaderContainerView : UICollectionReusableView <WCFinderTagListViewDelegate, WCFinderProfileCollectionListViewDelegate>
{
    id <WCFinderProfileFeedPageHeaderContainerViewDelegate> _delegate; // +0x8
    WCFinderTagListView * _tagListView; // +0x10
    WCFinderProfileCollectionListView * _collectionListView; // +0x18
}
+ (id)createTagListViewOptions;
+ (double)displayHeightWithTagLayout:(id)arg1 collectionLayout:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureSubviewWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithoutNotifyTagLayout:(id)arg1 selectedTopic:(id)arg2 collectionLayout:(id)arg3;
- (void)updateWithTagLayout:(id)arg1 selectedTopic:(id)arg2 collectionLayout:(id)arg3;
- (void)onTagListView:(id)arg1 onSelectedItem:(id)arg2;
- (void)onTagListViewIsExpandChanged:(id)arg1 isExpand:(BOOL)arg2;
- (void)clickedNextEpisodeButton;
- (void)clickedAllEpisodeButton;
- (void)clickedCollectionItemWithInfo:(id)arg1;
- (void)clickedMoreButton;
- (void)collectionListDisplayHeightChanged;
- (void)setupReportWithNextEpisodeBtn:(id)arg1 allEpisodeBtn:(id)arg2 moreBtn:(id)arg3;
- (void)setupReportWithCollectionItemButtons:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tagListView;
- (void)setTagListView:(id)arg1;
- (id)collectionListView;
- (void)setCollectionListView:(id)arg1;
- (void).cxx_destruct;
@end

