@interface WAJSCoreServiceOpenData : NSObject
{
    BOOL _reLaunch; // +0x8
    unsigned int _launchMode; // +0xc
    unsigned int _secFlagForSinglePageMode; // +0x10
    WAAppTaskReferrerInfo * _referrerInfo; // +0x18
    WAAppTaskTransitInfo * _transitInfo; // +0x20
    NSString * _path; // +0x28
    NSDictionary * _extraParamInfo; // +0x30
    NSDictionary * _hostExtraData; // +0x38
    NSString * _debugLaunchInfo; // +0x40
    NSString * _chatroomUsername; // +0x48
    NSString * _chatUsername; // +0x50
    long long _enterForegroundReason; // +0x58
    NSString * _mpShortLink; // +0x60
}
- (id)referrerInfo;
- (void)setReferrerInfo:(id)arg1;
- (id)transitInfo;
- (void)setTransitInfo:(id)arg1;
- (BOOL)reLaunch;
- (void)setReLaunch:(BOOL)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)extraParamInfo;
- (void)setExtraParamInfo:(id)arg1;
- (id)hostExtraData;
- (void)setHostExtraData:(id)arg1;
- (id)debugLaunchInfo;
- (void)setDebugLaunchInfo:(id)arg1;
- (id)chatroomUsername;
- (void)setChatroomUsername:(id)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (unsigned int)launchMode;
- (void)setLaunchMode:(unsigned int)arg1;
- (long long)enterForegroundReason;
- (void)setEnterForegroundReason:(long long)arg1;
- (id)mpShortLink;
- (void)setMpShortLink:(id)arg1;
- (unsigned int)secFlagForSinglePageMode;
- (void)setSecFlagForSinglePageMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end

