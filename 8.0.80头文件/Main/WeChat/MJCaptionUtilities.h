@interface MJCaptionUtilities : NSObject
+ (id)audioIDWithMeidaFileURL:(id)arg1 timeRange:(struct)arg2;
+ (id)assetIDWithMeidaFileURL:(id)arg1;
+ (id)changeSpeedWithCaptionGroups:(id)arg1 speedRatio:(double)arg2;
+ (id)adjustCaptionItems:(id)arg1 addingStartTime:(struct)arg2;
+ (id)sortCaptionItems:(id)arg1;
+ (void)captionSegment:(id)arg1 bindAssetIDWithMeidaFileURL:(id)arg2;
+ (id)getAssetIDWithCaptionSegment:(id)arg1;
+ (id)getAudioIDWithCaptionSegment:(id)arg1;
@end
