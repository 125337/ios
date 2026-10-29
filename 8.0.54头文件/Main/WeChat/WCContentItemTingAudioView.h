@interface WCContentItemTingAudioView : WCContentItemBaseView
{
    TingSharedAudioView * _audioContentView; // +0x38
    TingItem * _tingItem; // +0x40
    MMListenCategoryItem * _categoryItem; // +0x48
}
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (id)tingItem;
- (id)categoryItem;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)setNonInteractive;
- (void)contentItemWillDisplay;
- (id)audioContentView;
- (void)throwUrlMessage;
- (void)onFavoriteAdd:(id)arg1;
- (void)addFavorite;
- (id)reportParams;
- (void)onAddListenLater:(id)arg1;
- (void)onShareToOpenSDK:(id)arg1;
- (void)onLongTouch;
- (void)setPlayButtonHidden:(BOOL)arg1;
- (void)setAudioContentView:(id)arg1;
- (void)setTingItem:(id)arg1;
- (void)setCategoryItem:(id)arg1;
- (void).cxx_destruct;
@end

