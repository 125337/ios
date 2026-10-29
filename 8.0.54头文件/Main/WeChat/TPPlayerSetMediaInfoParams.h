@interface TPPlayerSetMediaInfoParams : NSObject
{
    BOOL _isLocal; // +0x8
    long long _playerId; // +0x10
    NSString * _mediaId; // +0x18
    NSString * _path; // +0x20
    NSString * _url; // +0x28
    NSString * _urlToken; // +0x30
    NSString * _decodeKey; // +0x38
    long long _videoWidth; // +0x40
    long long _videoHeight; // +0x48
    long long _videoDuration; // +0x50
    NSString * _fileFormat; // +0x58
    NSString * _thumbPath; // +0x60
    NSString * _thumbUrl; // +0x68
    NSString * _thumbUrlToken; // +0x70
}
+ (id)makeWithPlayerId:(long long)arg1 mediaId:(id)arg2 path:(id)arg3 url:(id)arg4 urlToken:(id)arg5 decodeKey:(id)arg6 videoWidth:(long long)arg7 videoHeight:(long long)arg8 videoDuration:(long long)arg9 fileFormat:(id)arg10 thumbPath:(id)arg11 thumbUrl:(id)arg12 thumbUrlToken:(id)arg13 isLocal:(BOOL)arg14;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)urlToken;
- (void)setUrlToken:(id)arg1;
- (id)decodeKey;
- (void)setDecodeKey:(id)arg1;
- (long long)videoWidth;
- (void)setVideoWidth:(long long)arg1;
- (long long)videoHeight;
- (void)setVideoHeight:(long long)arg1;
- (long long)videoDuration;
- (void)setVideoDuration:(long long)arg1;
- (id)fileFormat;
- (void)setFileFormat:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)thumbUrlToken;
- (void)setThumbUrlToken:(id)arg1;
- (BOOL)isLocal;
- (void)setIsLocal:(BOOL)arg1;
- (void).cxx_destruct;
@end

