@interface WXVideoFileObject : NSObject
{
    NSData * videoFileData; // +0x8
    NSString * _localIdentifier; // +0x10
}
+ (id)object;
- (id)init;
- (id)videoFileData;
- (void)setVideoFileData:(id)arg1;
- (id)localIdentifier;
- (void)setLocalIdentifier:(id)arg1;
- (void).cxx_destruct;
@end

