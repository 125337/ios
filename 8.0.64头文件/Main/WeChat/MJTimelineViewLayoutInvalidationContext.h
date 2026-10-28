@interface MJTimelineViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    BOOL _initiatedFromChangeScale; // +0x8
    BOOL _initiatedFromChangeMode; // +0x9
}
- (BOOL)initiatedFromChangeScale;
- (void)setInitiatedFromChangeScale:(BOOL)arg1;
- (BOOL)initiatedFromChangeMode;
- (void)setInitiatedFromChangeMode:(BOOL)arg1;
@end
