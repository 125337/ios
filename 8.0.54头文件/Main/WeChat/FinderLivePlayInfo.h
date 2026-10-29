@interface FinderLivePlayInfo : NSObject
{
    NSString * _finder_export_id; // +0x8
    NSNumber * _videoScrWidth; // +0x10
    NSNumber * _videoScrHeight; // +0x18
    NSNumber * _containerWidth; // +0x20
    NSNumber * _containerHeight; // +0x28
}
+ (id)makeWithFinder_export_id:(id)arg1 videoScrWidth:(id)arg2 videoScrHeight:(id)arg3 containerWidth:(id)arg4 containerHeight:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)finder_export_id;
- (void)setFinder_export_id:(id)arg1;
- (id)videoScrWidth;
- (void)setVideoScrWidth:(id)arg1;
- (id)videoScrHeight;
- (void)setVideoScrHeight:(id)arg1;
- (id)containerWidth;
- (void)setContainerWidth:(id)arg1;
- (id)containerHeight;
- (void)setContainerHeight:(id)arg1;
- (void).cxx_destruct;
@end

