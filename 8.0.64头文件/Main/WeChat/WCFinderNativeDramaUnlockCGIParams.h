@interface WCFinderNativeDramaUnlockCGIParams : NSObject
{
    int _commentScene; // +0x8
    unsigned long long _dramaID; // +0x10
    unsigned long long _objectID; // +0x18
    NSString * _promotionObjectID; // +0x20
    FinderUnlockNativeDramaPromotionAdGating * _adGating; // +0x28
}
- (unsigned long long)dramaID;
- (void)setDramaID:(unsigned long long)arg1;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (id)promotionObjectID;
- (void)setPromotionObjectID:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)adGating;
- (void)setAdGating:(id)arg1;
- (void).cxx_destruct;
@end
