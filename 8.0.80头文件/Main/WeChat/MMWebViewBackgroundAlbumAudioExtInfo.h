@interface MMWebViewBackgroundAlbumAudioExtInfo : NSObject <PBCoding>
{
    NSString * _bizUin; // +0x8
    long long _msgId; // +0x10
    long long _idx; // +0x18
    long long _scene; // +0x20
    long long _subScene; // +0x28
    long long _voiceType; // +0x30
    NSString * _sessionId; // +0x38
    NSString * _playId; // +0x40
    long long _enterId; // +0x48
    NSString * _albumPageUrl; // +0x50
    long long _audioPos; // +0x58
    NSString * _albumTitle; // +0x60
    NSString * _audioTitle; // +0x68
}
+ (void)PBArrayAdd_bizUin;
+ (void)PBArrayAdd_msgId;
+ (void)PBArrayAdd_idx;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_subScene;
+ (void)PBArrayAdd_playId;
+ (void)PBArrayAdd_voiceType;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_enterId;
+ (void)PBArrayAdd_albumPageUrl;
+ (void)PBArrayAdd_audioPos;
+ (void)PBArrayAdd_albumTitle;
+ (void)PBArrayAdd_audioTitle;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithDictionary:(id)arg1;
- (id)bizUin;
- (void)setBizUin:(id)arg1;
- (long long)msgId;
- (void)setMsgId:(long long)arg1;
- (long long)idx;
- (void)setIdx:(long long)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)subScene;
- (void)setSubScene:(long long)arg1;
- (long long)voiceType;
- (void)setVoiceType:(long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)playId;
- (void)setPlayId:(id)arg1;
- (long long)enterId;
- (void)setEnterId:(long long)arg1;
- (id)albumPageUrl;
- (void)setAlbumPageUrl:(id)arg1;
- (long long)audioPos;
- (void)setAudioPos:(long long)arg1;
- (id)albumTitle;
- (void)setAlbumTitle:(id)arg1;
- (id)audioTitle;
- (void)setAudioTitle:(id)arg1;
- (void).cxx_destruct;
@end
