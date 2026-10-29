@interface AppTingListMessageCellView : CommonMessageCellView
{
    TingSharedListView * _listContentView; // +0xb8
    id <TingPlayApp> _player; // +0xc0
}
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onThumbImageCompleted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)listContentView;
- (id)categoryItem;
- (id)operationMenuItems;
- (BOOL)canShowForwardMenuItem;
- (BOOL)canShowFavoriteMenuItem;
- (void)onForward:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onAppear;
- (void)onTouchUpInside;
- (void)onClickAsRefer;
- (void)setListContentView:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void).cxx_destruct;
@end
