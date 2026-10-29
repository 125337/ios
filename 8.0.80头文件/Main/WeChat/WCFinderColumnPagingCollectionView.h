@interface WCFinderColumnPagingCollectionView : UICollectionView
{
    BOOL _atFirstCard; // +0x8
}
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)atFirstCard;
- (void)setAtFirstCard:(BOOL)arg1;
@end
