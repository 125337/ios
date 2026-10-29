@interface ForwardMsgSpamRequestCommonParams : NSObject
{
    BOOL _ignoreOverSeaUser; // +0x8
    BOOL _ignoreMsgFromSelf; // +0x9
    BOOL _isRepeat; // +0xa
    BOOL _isSwitchOff; // +0xb
    unsigned long long _scene; // +0x10
}
- (BOOL)ignoreOverSeaUser;
- (void)setIgnoreOverSeaUser:(BOOL)arg1;
- (BOOL)ignoreMsgFromSelf;
- (void)setIgnoreMsgFromSelf:(BOOL)arg1;
- (BOOL)isRepeat;
- (void)setIsRepeat:(BOOL)arg1;
- (BOOL)isSwitchOff;
- (void)setIsSwitchOff:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
@end
