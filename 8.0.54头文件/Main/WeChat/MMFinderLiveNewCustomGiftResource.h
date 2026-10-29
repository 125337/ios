@interface MMFinderLiveNewCustomGiftResource : NSObject <NSCopying>
{
    NSString * _key; // +0x8
    MMFinderLiveNewCustomGiftItemResourceURL * _thumbnail; // +0x10
    MMFinderLiveNewCustomGiftItemResourceURL * _preview; // +0x18
    MMFinderLiveNewCustomGiftItemResourceURL * _animation; // +0x20
    MMFinderLiveNewCustomGiftItemResourceURL * _landscapeAnimation; // +0x28
    MMFinderLiveNewCustomGiftItemResourceURL * _signPreview; // +0x30
    MMFinderLiveNewCustomGiftItemResourceURL * _signThumbnail; // +0x38
}
+ (id)transferFromResourcePB:(id)arg1 business:(id)arg2;
+ (BOOL)isResourcePBValid:(id)arg1 business:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)thumbnail;
- (void)setThumbnail:(id)arg1;
- (id)preview;
- (void)setPreview:(id)arg1;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (id)landscapeAnimation;
- (void)setLandscapeAnimation:(id)arg1;
- (id)signPreview;
- (void)setSignPreview:(id)arg1;
- (id)signThumbnail;
- (void)setSignThumbnail:(id)arg1;
- (void).cxx_destruct;
@end

