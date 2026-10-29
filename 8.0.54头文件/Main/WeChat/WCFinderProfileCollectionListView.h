@interface WCFinderProfileCollectionListView : UICollectionReusableView
{
    id <WCFinderProfileCollectionListViewDelegate> _delegate; // +0x8
    WCFinderProfileCollectionListLayout * _layout; // +0x10
    WCFinderProfileCollectionListStyle * _style; // +0x18
    NSMutableArray * _listItemButtons; // +0x20
    MMUIButton * _nextEpisodeButton; // +0x28
    MMUIButton * _allEpisodeButton; // +0x30
    MMUIButton * _moreButton; // +0x38
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureExtraButtons;
- (void)prepareForReuse;
- (id)nextEpisodeButton;
- (id)allEpisodeButton;
- (id)moreButton;
- (void)updateWithLayout:(id)arg1;
- (void)setupCollectionListItemButtonsWith:(id)arg1;
- (id)createCollectionListItemButton;
- (void)nextEpisodeButtonClicked:(id)arg1;
- (void)allEpisodeButtonClicked:(id)arg1;
- (void)collectionItemButtonClicked:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)listItemButtons;
- (void)setListItemButtons:(id)arg1;
- (void)setNextEpisodeButton:(id)arg1;
- (void)setAllEpisodeButton:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void).cxx_destruct;
@end

