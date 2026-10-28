@interface VideoParamsSource : NSObject <NSCoding>
{
    NSURL * _videoURL; // +0x8
    MMAsset * _videoMMAsset; // +0x10
}
+ (id)videoParamsSourceFromURL:(id)arg1;
+ (id)videoParamsSourceFromMMAsset:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)genVideoParamsInfo;
- (id)genVideoParamsInfoFromURL:(id)arg1;
- (id)genVideoParamsInfoFromMMAsset:(id)arg1;
- (id)genVideoParamsInfoFromAVAsset:(id)arg1;
- (id)videoURL;
- (void)setVideoURL:(id)arg1;
- (id)videoMMAsset;
- (void)setVideoMMAsset:(id)arg1;
- (void).cxx_destruct;
@end
