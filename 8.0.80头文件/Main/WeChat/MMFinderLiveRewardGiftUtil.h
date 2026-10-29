@interface MMFinderLiveRewardGiftUtil : NSObject
+ (id)genRewardUniqueIDWithProductId:(id)arg1;
+ (id)getThumbailSrcWithProductId:(id)arg1 md5:(id)arg2 targetUrl:(id)arg3;
+ (id)getCustomizeRewardItem:(id)arg1 extra:(id)arg2;
+ (void)extractResourceId:(id *)arg1 fromRewardItem:(id)arg2;
+ (void)extractResourceId:(id *)arg1 fromRewardItem:(id)arg2 extra:(id)arg3;
+ (void)extractThumbnailMd5:(id *)arg1 thumbnailUrl:(id *)arg2 fromRewardItem:(id)arg3;
+ (void)extractThumbnailMd5:(id *)arg1 thumbnailUrl:(id *)arg2 fromRewardItem:(id)arg3 extra:(id)arg4;
+ (void)extractPreviewPagMd5:(id *)arg1 previewPagUrl:(id *)arg2 fromRewardItem:(id)arg3;
+ (void)extractPreviewPagMd5:(id *)arg1 previewPagUrl:(id *)arg2 fromRewardItem:(id)arg3 extra:(id)arg4;
+ (void)extractAnimationPagMd5:(id *)arg1 animationPagUrl:(id *)arg2 fromRewardItem:(id)arg3 extra:(id)arg4;
+ (unsigned long long)getResourceMemoryCacheOptionsForRewardItem:(id)arg1;
+ (unsigned long long)getResourceMemoryCacheOptionsForRewardItem:(id)arg1 extra:(id)arg2;
@end
