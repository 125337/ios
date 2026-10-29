@interface FinderVideoPlayInfo : NSObject
{
    NSString * _finder_object_nonce_id; // +0x8
    NSString * _finder_object_id; // +0x10
    NSNumber * _videoScrWidth; // +0x18
    NSNumber * _videoScrHeight; // +0x20
}
+ (id)makeWithFinder_object_nonce_id:(id)arg1 finder_object_id:(id)arg2 videoScrWidth:(id)arg3 videoScrHeight:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)finder_object_nonce_id;
- (void)setFinder_object_nonce_id:(id)arg1;
- (id)finder_object_id;
- (void)setFinder_object_id:(id)arg1;
- (id)videoScrWidth;
- (void)setVideoScrWidth:(id)arg1;
- (id)videoScrHeight;
- (void)setVideoScrHeight:(id)arg1;
- (void).cxx_destruct;
@end

