@interface WCAudioInfo : NSObject
{
    BOOL _isHls; // +0x8
    BOOL _useAVCore; // +0x9
    BOOL _isLocalFile; // +0xa
    BOOL _ignoreCache; // +0xb
    float _playRate; // +0xc
    float _startTime; // +0x10
    NSString * _audioId; // +0x18
    NSString * _dataUrl; // +0x20
    NSString * _decryptKey; // +0x28
    NSString * _fileCacheId; // +0x30
    id _userData; // +0x38
    NSString * _refer; // +0x40
}
- (id)init;
- (id)audioId;
- (void)setAudioId:(id)arg1;
- (id)dataUrl;
- (void)setDataUrl:(id)arg1;
- (id)decryptKey;
- (void)setDecryptKey:(id)arg1;
- (BOOL)isHls;
- (void)setIsHls:(BOOL)arg1;
- (BOOL)useAVCore;
- (void)setUseAVCore:(BOOL)arg1;
- (float)playRate;
- (void)setPlayRate:(float)arg1;
- (float)startTime;
- (void)setStartTime:(float)arg1;
- (BOOL)isLocalFile;
- (void)setIsLocalFile:(BOOL)arg1;
- (BOOL)ignoreCache;
- (void)setIgnoreCache:(BOOL)arg1;
- (id)fileCacheId;
- (void)setFileCacheId:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)refer;
- (void)setRefer:(id)arg1;
- (void).cxx_destruct;
@end
