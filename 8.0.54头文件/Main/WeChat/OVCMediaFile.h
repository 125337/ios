@interface OVCMediaFile : NSObject
{
    NSString * _localIdentifier; // +0x8
    NSString * _filePath; // +0x10
    OVCAudioTrack * _audioTrack; // +0x18
    OVCVideoTrack * _videoTrack; // +0x20
    OVCImageTrack * _imageTrack; // +0x28
    SharedPtr<XMFMediaFile> _backingMediaFile; // +0x30
}
- (id)initWithBackingMediaFile:(const void *)arg1 filePath:(id)arg2 localIdentifier:(id)arg3;
- (id)initWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 localIdentifier:(id)arg2;
- (BOOL)isImage;
- (struct)duration;
- (struct)startTime;
- (struct)timeRange;
- (unsigned long long)containerType;
- (id)title;
- (id)creationTime;
- (id)location;
- (id)localIdentifier;
- (id)filePath;
- (id)audioTrack;
- (id)videoTrack;
- (id)imageTrack;
- (SharedPtr<XMFMediaFile>)backingMediaFile;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

