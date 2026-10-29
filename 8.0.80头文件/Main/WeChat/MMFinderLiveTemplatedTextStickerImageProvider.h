@interface MMFinderLiveTemplatedTextStickerImageProvider : NSObject <MMFinderLiveStickerImageProviding>
{
    OMJLowerThirdImageGenerator * _generator; // +0x8
    MMFinderLiveStickerTextTemplateResourceRepository * _resources; // +0x10
}
- (id)initWithLowerThirdImageGenerator:(id)arg1 resources:(id)arg2;
- (void)createImageWithStickerItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)generator;
- (void)setGenerator:(id)arg1;
- (id)resources;
- (void)setResources:(id)arg1;
- (void).cxx_destruct;
@end
