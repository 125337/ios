@interface MMLiveCachedConnectMicInfoBeforeSwitchCdnOrTrtc : NSObject
{
    BOOL _isCdn; // +0x8
    MMLiveSEIConnectMicMsg * _seiMicMsg; // +0x10
}
- (BOOL)isCdn;
- (void)setIsCdn:(BOOL)arg1;
- (id)seiMicMsg;
- (void)setSeiMicMsg:(id)arg1;
- (void).cxx_destruct;
@end

