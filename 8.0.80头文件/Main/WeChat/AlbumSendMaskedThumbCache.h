@interface AlbumSendMaskedThumbCache : NSObject
+ (id)sharedCache;
+ (void)setImage:(id)arg1 forAssetId:(id)arg2;
+ (id)takeImageForAssetId:(id)arg1;
+ (void)removeAll;
@end
