@interface WAGameRelatedGameInfo : NSObject
{
    BOOL _isCurrentGame; // +0x8
    unsigned int _tagType; // +0xc
    NSString * _appId; // +0x10
    NSString * _appName; // +0x18
    NSString * _portraitCoverUrl; // +0x20
    NSString * _landscapeCoverUrl; // +0x28
    NSString * _portraitVideoUrl; // +0x30
    NSString * _landscapeVideoUrl; // +0x38
    NSString * _logoUrl; // +0x40
    NSString * _tagText; // +0x48
    UIImage * _currentGameSnapshot; // +0x50
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)portraitCoverUrl;
- (void)setPortraitCoverUrl:(id)arg1;
- (id)landscapeCoverUrl;
- (void)setLandscapeCoverUrl:(id)arg1;
- (id)portraitVideoUrl;
- (void)setPortraitVideoUrl:(id)arg1;
- (id)landscapeVideoUrl;
- (void)setLandscapeVideoUrl:(id)arg1;
- (id)logoUrl;
- (void)setLogoUrl:(id)arg1;
- (unsigned int)tagType;
- (void)setTagType:(unsigned int)arg1;
- (id)tagText;
- (void)setTagText:(id)arg1;
- (BOOL)isCurrentGame;
- (void)setIsCurrentGame:(BOOL)arg1;
- (id)currentGameSnapshot;
- (void)setCurrentGameSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
