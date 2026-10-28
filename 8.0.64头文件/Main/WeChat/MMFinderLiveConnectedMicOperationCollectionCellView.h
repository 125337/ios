@interface MMFinderLiveConnectedMicOperationCollectionCellView : UICollectionReusableView
{
    MMFinderLiveConnectedMicOperationBaseCellView * _baseView; // +0x8
}
+ (id)ReuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)setCorner:(BOOL)arg1;
- (BOOL)showQuitButton;
- (void)setShowQuitButton:(BOOL)arg1;
- (id /* block */)quitActionBlock;
- (void)setQuitActionBlock:(id /* block */)arg1;
- (id /* block */)pkActionBlock;
- (void)setPkActionBlock:(id /* block */)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (void).cxx_destruct;
@end
