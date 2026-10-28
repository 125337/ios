@interface AppTingListMessageCellView : CommonMessageCellView
{
    TingSharedListView * _listContentView; // +0xb0
    id <TingFlowPlayerProtocol> _player; // +0xb8
}
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onThumbImageCompleted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)listContentView;
- (id)categoryItem;
- (id)operationMenuItems;
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
