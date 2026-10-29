@interface SearchResultFinderVideoPlayInfo : NSObject
{
    NSString * _nonceId; // +0x8
    NSString * _encryptedObjectId; // +0x10
    NSNumber * _videoScrWidth; // +0x18
    NSNumber * _videoScrHeight; // +0x20
}
+ (id)makeWithNonceId:(id)arg1 encryptedObjectId:(id)arg2 videoScrWidth:(id)arg3 videoScrHeight:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)encryptedObjectId;
- (void)setEncryptedObjectId:(id)arg1;
- (id)videoScrWidth;
- (void)setVideoScrWidth:(id)arg1;
- (id)videoScrHeight;
- (void)setVideoScrHeight:(id)arg1;
- (void).cxx_destruct;
@end
