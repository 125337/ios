@interface MMFinderLiveStickerCustomCompositingLogic : MMFinderLiveStickerCompositingLogic
+ (id)createVideoFrameWidgetWithSticker:(id)arg1 sourceFrameSize:(CGSize)arg2 factor:(double)arg3;
+ (CGSize)getStickerFinalScale:(id)arg1 sourceFrameSize:(CGSize)arg2 factor:(double)arg3;
- (unsigned long long)addStickerItem:(id)arg1;
- (unsigned long long)insertStickerItemToBack:(id)arg1;
- (unsigned long long)removeStickerItem:(id)arg1;
- (unsigned long long)removeStickerItemWithId:(id)arg1;
@end

