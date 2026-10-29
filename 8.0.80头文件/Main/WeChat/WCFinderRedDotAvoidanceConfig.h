@interface WCFinderRedDotAvoidanceConfig : NSObject
{
    BOOL _forceSingleLine; // +0x8
    BOOL _hideAvatar; // +0x9
    NSString * _configTag; // +0x10
    NSString * _forceSingleLineAvoidPath; // +0x18
    unsigned long long _forceSingleLineReason; // +0x20
    NSString * _hideAvatarAvoidPath; // +0x28
    unsigned long long _hideAvatarReason; // +0x30
}
- (id)init;
- (BOOL)forceSingleLine;
- (void)setForceSingleLine:(BOOL)arg1;
- (BOOL)hideAvatar;
- (void)setHideAvatar:(BOOL)arg1;
- (id)configTag;
- (void)setConfigTag:(id)arg1;
- (id)forceSingleLineAvoidPath;
- (void)setForceSingleLineAvoidPath:(id)arg1;
- (unsigned long long)forceSingleLineReason;
- (void)setForceSingleLineReason:(unsigned long long)arg1;
- (id)hideAvatarAvoidPath;
- (void)setHideAvatarAvoidPath:(id)arg1;
- (unsigned long long)hideAvatarReason;
- (void)setHideAvatarReason:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
