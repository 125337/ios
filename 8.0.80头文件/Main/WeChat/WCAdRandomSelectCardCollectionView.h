@interface WCAdRandomSelectCardCollectionView : UICollectionView
{
    id <WCAdRandomSelectCardCollectionViewDelegate> _cardDelegate; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)cardDelegate;
- (void)setCardDelegate:(id)arg1;
- (void).cxx_destruct;
@end
