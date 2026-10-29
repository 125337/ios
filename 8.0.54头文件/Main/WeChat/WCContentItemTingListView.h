@interface WCContentItemTingListView : WCContentItemBaseView
{
    TingSharedListView * _listContentView; // +0x38
}
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (id)initWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 width:(double)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;
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

