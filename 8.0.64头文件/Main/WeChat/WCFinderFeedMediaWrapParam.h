@interface WCFinderFeedMediaWrapParam : NSObject
{
    BOOL _genArrDataSource; // +0x8
    BOOL _useSystemPlayer; // +0x9
    BOOL _ignoreCache; // +0xa
    BOOL _ignoreSettingToCache; // +0xb
    BOOL _forceUpdateMultiLevel; // +0xc
    BOOL _ignoreHDR; // +0xd
    BOOL _useOfflinePath; // +0xe
    int _scene; // +0x10
    int _setMaxBitrate; // +0x14
    NSString * _fileFormat; // +0x18
    unsigned long long _liveCoverPreferredAspectRatio; // +0x20
    WCFinderMediaInfo * _mediaInfo; // +0x28
}
+ (id)defaultParamWithMediaInfo:(id)arg1;
- (id)fileFormat;
- (void)setFileFormat:(id)arg1;
- (BOOL)genArrDataSource;
- (void)setGenArrDataSource:(BOOL)arg1;
- (BOOL)useSystemPlayer;
- (void)setUseSystemPlayer:(BOOL)arg1;
- (unsigned long long)liveCoverPreferredAspectRatio;
- (void)setLiveCoverPreferredAspectRatio:(unsigned long long)arg1;
- (BOOL)ignoreCache;
- (void)setIgnoreCache:(BOOL)arg1;
- (BOOL)ignoreSettingToCache;
- (void)setIgnoreSettingToCache:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (int)setMaxBitrate;
- (void)setSetMaxBitrate:(int)arg1;
- (BOOL)forceUpdateMultiLevel;
- (void)setForceUpdateMultiLevel:(BOOL)arg1;
- (BOOL)ignoreHDR;
- (void)setIgnoreHDR:(BOOL)arg1;
- (BOOL)useOfflinePath;
- (void)setUseOfflinePath:(BOOL)arg1;
- (void).cxx_destruct;
@end
