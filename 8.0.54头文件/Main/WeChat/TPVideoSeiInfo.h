@interface TPVideoSeiInfo : NSObject
{
    long long _videoCodecType; // +0x8
    long long _videoSeiType; // +0x10
    long long _seiDataSize; // +0x18
    NSData * _seiData; // +0x20
}
- (id)initWithCodecType:(long long)arg1 seiType:(long long)arg2 seiDataSize:(long long)arg3 seiData:(id)arg4;
- (long long)videoCodecType;
- (long long)videoSeiType;
- (long long)seiDataSize;
- (id)seiData;
- (void).cxx_destruct;
@end

