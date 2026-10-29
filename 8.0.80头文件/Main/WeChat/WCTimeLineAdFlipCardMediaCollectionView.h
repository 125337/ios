@interface WCTimeLineAdFlipCardMediaCollectionView : UICollectionView
{
    id <WCTimeLineAdFlipCardMediaCollectionViewDelegate> _mediaDelegate; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)parseTouchesLocationsFor:(id)arg1;
- (id)mediaDelegate;
- (void)setMediaDelegate:(id)arg1;
- (void).cxx_destruct;
@end
