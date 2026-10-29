@interface WCAdSchemaJumpInfo : NSObject <NSCoding>
{
    BOOL _bInternalJump; // +0x8
    NSString * _sdkAppId; // +0x10
    NSString * _appJumpUrl; // +0x18
    NSString * _appPageUrl; // +0x20
    WCAdOpenAppHalfScreenInfo * _openAppHalfScreenInfo; // +0x28
    WCAdSchemaDoubleLinkInfo * _doubleLinkInfo; // +0x30
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)sdkAppId;
- (void)setSdkAppId:(id)arg1;
- (id)appJumpUrl;
- (void)setAppJumpUrl:(id)arg1;
- (id)appPageUrl;
- (void)setAppPageUrl:(id)arg1;
- (BOOL)bInternalJump;
- (void)setBInternalJump:(BOOL)arg1;
- (id)openAppHalfScreenInfo;
- (void)setOpenAppHalfScreenInfo:(id)arg1;
- (id)doubleLinkInfo;
- (void)setDoubleLinkInfo:(id)arg1;
- (void).cxx_destruct;
@end

