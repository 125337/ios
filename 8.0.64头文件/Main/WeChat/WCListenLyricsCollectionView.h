@interface WCListenLyricsCollectionView : ICCollectionView
{
    id /* block */ _reloadDataCompletionBlock; // +0x8
}
- (void)reloadDataWithCompletionBlock:(id /* block */)arg1;
- (void)layoutSubviews;
- (id /* block */)reloadDataCompletionBlock;
- (void)setReloadDataCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
