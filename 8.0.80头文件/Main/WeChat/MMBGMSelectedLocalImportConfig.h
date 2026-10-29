@interface MMBGMSelectedLocalImportConfig : NSObject
{
    BOOL _enabled; // +0x8
    BOOL _allowsAlbumVideo; // +0x9
    BOOL _allowsPhoneFile; // +0xa
    BOOL _allowsInteractedVideo; // +0xb
    unsigned long long _reportMaterialType; // +0x10
}
+ (id)configWithEnabled:(BOOL)arg1;
+ (id)configWithEnabled:(BOOL)arg1 allowsAlbumVideo:(BOOL)arg2 allowsPhoneFile:(BOOL)arg3 allowsInteractedVideo:(BOOL)arg4;
- (id)init;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)allowsAlbumVideo;
- (void)setAllowsAlbumVideo:(BOOL)arg1;
- (BOOL)allowsPhoneFile;
- (void)setAllowsPhoneFile:(BOOL)arg1;
- (BOOL)allowsInteractedVideo;
- (void)setAllowsInteractedVideo:(BOOL)arg1;
- (unsigned long long)reportMaterialType;
- (void)setReportMaterialType:(unsigned long long)arg1;
@end
