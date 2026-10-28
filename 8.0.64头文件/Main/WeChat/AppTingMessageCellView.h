@interface AppTingMessageCellView : CommonMessageCellView
{
    TingSharedAudioView * _audioContentView; // +0xb0
    TingItem * _tingItem; // +0xb8
}
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onThumbImageCompleted:(BOOL)arg1;
- (void)reload;
- (void)setHighlighted:(BOOL)arg1;
- (id)audioContentView;
- (id)tingItem;
- (id)shareListenItem;
- (id)categoryItem;
- (id)addToListenStarMenuItem;
- (void)onAddToListenStar:(id)arg1;
- (BOOL)canShowAddToStarMenuItem;
- (id)operationMenuItems;
- (void)onForward:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onAppear;
- (void)onTouchUpInside;
- (BOOL)isFromMusicShake;
- (BOOL)canClickSourceView;
- (void)onAppButtonClicked:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (BOOL)handleMagicTapAction:(id)arg1;
- (void)onClickAsRefer;
- (void)setAudioContentView:(id)arg1;
- (void)setTingItem:(id)arg1;
- (void).cxx_destruct;
@end
