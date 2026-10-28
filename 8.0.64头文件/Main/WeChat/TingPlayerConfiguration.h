@interface TingPlayerConfiguration : NSObject
{
    BOOL _ignoreVideoDecodeError; // +0x8
    BOOL _takeOverDownload; // +0x9
    BOOL _isAuditoryEnhEnable; // +0xa
    BOOL _isTPAudioMixTtsEnable; // +0xb
    BOOL _isHearingAidEnable; // +0xc
    BOOL _isHearingTtsScene; // +0xd
    int _auditoryEnhMode; // +0x10
    int _hearingAidType; // +0x14
    int _hearingAidDevice; // +0x18
}
- (BOOL)ignoreVideoDecodeError;
- (void)setIgnoreVideoDecodeError:(BOOL)arg1;
- (BOOL)takeOverDownload;
- (void)setTakeOverDownload:(BOOL)arg1;
- (BOOL)isAuditoryEnhEnable;
- (void)setIsAuditoryEnhEnable:(BOOL)arg1;
- (int)auditoryEnhMode;
- (void)setAuditoryEnhMode:(int)arg1;
- (BOOL)isTPAudioMixTtsEnable;
- (void)setIsTPAudioMixTtsEnable:(BOOL)arg1;
- (BOOL)isHearingAidEnable;
- (void)setIsHearingAidEnable:(BOOL)arg1;
- (BOOL)isHearingTtsScene;
- (void)setIsHearingTtsScene:(BOOL)arg1;
- (int)hearingAidType;
- (void)setHearingAidType:(int)arg1;
- (int)hearingAidDevice;
- (void)setHearingAidDevice:(int)arg1;
@end
