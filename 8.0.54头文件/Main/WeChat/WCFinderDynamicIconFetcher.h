@interface WCFinderDynamicIconFetcher : NSObject
{
    NSMapTable * _imageCache; // +0x8
    NSMutableDictionary * _imageProcessMap; // +0x10
}
- (id)init;
- (id)fetchImageWithDarkUrl:(id)arg1 lightUrl:(id)arg2 size:(CGSize)arg3 color:(id)arg4;
- (id)createTaskConfig:(id)arg1 size:(CGSize)arg2 color:(id)arg3 isDark:(BOOL)arg4;
- (id)createFetchTaskWithDark:(id)arg1 light:(id)arg2;
- (id)covertDynamicColor:(id)arg1 dark:(BOOL)arg2;
- (id)imageCache;
- (void)setImageCache:(id)arg1;
- (id)imageProcessMap;
- (void)setImageProcessMap:(id)arg1;
- (void).cxx_destruct;
@end

