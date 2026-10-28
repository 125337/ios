@interface GCCollectionView : UICollectionView
{
    BOOL _disableChildViewEvent; // +0x8
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)relayoutAndReload;
- (BOOL)disableChildViewEvent;
- (void)setDisableChildViewEvent:(BOOL)arg1;
@end
