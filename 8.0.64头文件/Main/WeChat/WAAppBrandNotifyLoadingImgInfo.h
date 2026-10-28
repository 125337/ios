@interface WAAppBrandNotifyLoadingImgInfo : NSObject <PBCoding>
{
    NSString * _loadingImgUrl; // +0x8
    NSString * _loadingImgProgressbarColor; // +0x10
}
+ (void)PBArrayAdd_loadingImgUrl;
+ (void)PBArrayAdd_loadingImgProgressbarColor;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)loadingImgUrl;
- (void)setLoadingImgUrl:(id)arg1;
- (id)loadingImgProgressbarColor;
- (void)setLoadingImgProgressbarColor:(id)arg1;
- (void).cxx_destruct;
@end
