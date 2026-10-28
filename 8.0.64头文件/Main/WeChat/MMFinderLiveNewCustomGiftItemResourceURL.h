@interface MMFinderLiveNewCustomGiftItemResourceURL : NSObject <NSCopying>
{
    NSString * _url; // +0x8
    NSString * _md5; // +0x10
}
+ (id)transferFromResourceUrlPB:(id)arg1 business:(id)arg2;
+ (BOOL)isResourceURLPBValid:(id)arg1 business:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (void).cxx_destruct;
@end
