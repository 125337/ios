@interface WCContentItemTingListView : WCContentItemBaseView
{
    TingSharedListView * _listContentView; // +0x38
}
+ (double)heightForMedia:(id)arg1 pageContext:(id)arg2 showDetail:(BOOL)arg3;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (id)initWithWCDataItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)setNonInteractive;
- (void)contentItemWillDisplay;
- (id)categoryItem;
- (id)listContentView;
- (void)throwUrlMessage;
- (void)onFavoriteAdd:(id)arg1;
- (void)addFavorite;
- (void)onLongTouch;
- (void)setListContentView:(id)arg1;
- (void).cxx_destruct;
@end
