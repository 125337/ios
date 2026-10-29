@interface MMFinderLiveAnchorCustomizeRewardResourceUrl : NSObject
{
    NSString * _url; // +0x8
    NSString * _md5Hash; // +0x10
}
+ (BOOL)isResourceUrlEmpty:(id)arg1;
- (id)initWithPBResourceUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 md5:(id)arg2;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)md5Hash;
- (void)setMd5Hash:(id)arg1;
- (void).cxx_destruct;
@end

