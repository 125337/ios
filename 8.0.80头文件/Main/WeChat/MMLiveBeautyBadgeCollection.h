@interface MMLiveBeautyBadgeCollection : NSObject <MMLiveBeautyBadgeItemExt>
{
    NSString * _collectionId; // +0x8
    NSMutableDictionary * _containedBadges; // +0x10
    NSMutableSet * _activeBadges; // +0x18
}
- (id)init;
- (id)initWithCollectionId:(id)arg1;
- (id)badges;
- (BOOL)containsActiveBadges;
- (void)addEventSubscriber:(id)arg1;
- (void)removeEventSubscriber:(id)arg1;
- (void)addBadge:(id)arg1;
- (void)addBadges:(id)arg1;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (id)collectionId;
- (void)setCollectionId:(id)arg1;
- (id)containedBadges;
- (void)setContainedBadges:(id)arg1;
- (id)activeBadges;
- (void)setActiveBadges:(id)arg1;
- (void).cxx_destruct;
@end
