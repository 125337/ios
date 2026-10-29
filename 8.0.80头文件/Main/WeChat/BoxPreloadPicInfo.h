@interface BoxPreloadPicInfo : NSObject
{
    NSString * _contentUrl; // +0x8
    NSArray * _preloadPicUrls; // +0x10
}
+ (id)makeWithContentUrl:(id)arg1 preloadPicUrls:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (id)preloadPicUrls;
- (void)setPreloadPicUrls:(id)arg1;
- (void).cxx_destruct;
@end
