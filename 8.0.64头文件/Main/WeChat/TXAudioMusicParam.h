@interface TXAudioMusicParam : NSObject
{
    BOOL _publish; // +0x8
    BOOL _isShortFile; // +0x9
    int _ID; // +0xc
    NSString * _path; // +0x10
    long long _loopCount; // +0x18
    long long _startTimeMS; // +0x20
    long long _endTimeMS; // +0x28
}
- (id)init;
- (id)initWithBGMID:(int)arg1 path:(id)arg2;
- (id)initWithBGMID:(int)arg1 path:(id)arg2 loopCount:(long long)arg3 publish:(BOOL)arg4 enableCache:(BOOL)arg5;
- (AudioBgmParams)getInternalMusicParam:(BOOL)arg1;
- (id)description;
- (int)ID;
- (void)setID:(int)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (long long)loopCount;
- (void)setLoopCount:(long long)arg1;
- (BOOL)publish;
- (void)setPublish:(BOOL)arg1;
- (BOOL)isShortFile;
- (void)setIsShortFile:(BOOL)arg1;
- (long long)startTimeMS;
- (void)setStartTimeMS:(long long)arg1;
- (long long)endTimeMS;
- (void)setEndTimeMS:(long long)arg1;
- (void).cxx_destruct;
@end
