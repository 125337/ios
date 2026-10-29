@interface ShakeActionReporter : NSObject
{
    int _action; // +0x8
    unsigned int _userGender; // +0xc
    unsigned int _userHasSignature; // +0x10
    unsigned int _jumpStatus; // +0x14
    unsigned int _songRecommendPos; // +0x18
    unsigned int _songCopyright; // +0x1c
    unsigned int _musicScene; // +0x20
    unsigned int _sayHelloCount; // +0x24
    int _type; // +0x28
    int _scene; // +0x2c
    NSString * _username; // +0x30
    NSString * _songTVId; // +0x38
    long long _indexInList; // +0x40
    NSString * _userDistance; // +0x48
    long long _shakeCostTime; // +0x50
    NSString * _shakeSessionId; // +0x58
    NSString * _songName; // +0x60
    NSString * _singer; // +0x68
    NSString * _songWebUrl; // +0x70
    NSString * _songDataUrl; // +0x78
    long long _actionTs; // +0x80
    NSString * _sessionId; // +0x88
}
+ (id)reporter;
+ (void)reportAction:(int)arg1;
- (id)init;
- (void)reset;
- (void)report;
- (void)tryAddString:(id)arg1 toString:(id)arg2;
- (void)tryAddInteger:(long long)arg1 toString:(id)arg2;
- (void)updateShakeType;
- (void)updateShakeScene;
- (void)updateSongCopyright:(unsigned long long)arg1;
- (int)action;
- (void)setAction:(int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)songTVId;
- (void)setSongTVId:(id)arg1;
- (long long)indexInList;
- (void)setIndexInList:(long long)arg1;
- (unsigned int)userGender;
- (void)setUserGender:(unsigned int)arg1;
- (id)userDistance;
- (void)setUserDistance:(id)arg1;
- (unsigned int)userHasSignature;
- (void)setUserHasSignature:(unsigned int)arg1;
- (long long)shakeCostTime;
- (void)setShakeCostTime:(long long)arg1;
- (id)shakeSessionId;
- (void)setShakeSessionId:(id)arg1;
- (id)songName;
- (void)setSongName:(id)arg1;
- (id)singer;
- (void)setSinger:(id)arg1;
- (id)songWebUrl;
- (void)setSongWebUrl:(id)arg1;
- (id)songDataUrl;
- (void)setSongDataUrl:(id)arg1;
- (unsigned int)jumpStatus;
- (void)setJumpStatus:(unsigned int)arg1;
- (unsigned int)songRecommendPos;
- (void)setSongRecommendPos:(unsigned int)arg1;
- (unsigned int)songCopyright;
- (void)setSongCopyright:(unsigned int)arg1;
- (unsigned int)musicScene;
- (void)setMusicScene:(unsigned int)arg1;
- (unsigned int)sayHelloCount;
- (void)setSayHelloCount:(unsigned int)arg1;
- (long long)actionTs;
- (void)setActionTs:(long long)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
