@interface MMFinderLiveAnchorCustomizeRewardSkinItem : NSObject
{
    NSString * _skinId; // +0x8
    NSString * _name; // +0x10
    UIColor * _color; // +0x18
    MMFinderLiveAnchorCustomizeRewardResourceUrl * _animationUrl; // +0x20
    MMFinderLiveAnchorCustomizeRewardResourceUrl * _previewAnimationUrl; // +0x28
    MMFinderLiveAnchorCustomizeRewardResourceUrl * _thumbnailUrl; // +0x30
}
- (id)initWithPBSwitchSkinItem:(id)arg1;
- (id)skinId;
- (void)setSkinId:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)animationUrl;
- (void)setAnimationUrl:(id)arg1;
- (id)previewAnimationUrl;
- (void)setPreviewAnimationUrl:(id)arg1;
- (id)thumbnailUrl;
- (void)setThumbnailUrl:(id)arg1;
- (void).cxx_destruct;
@end

