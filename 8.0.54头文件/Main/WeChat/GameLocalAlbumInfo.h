@interface GameLocalAlbumInfo : MMObject
{
    NSString * _appId; // +0x8
    NSString * _gameName; // +0x10
    NSString * _albumName; // +0x18
    NSString * _defaultTitle; // +0x20
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)gameName;
- (void)setGameName:(id)arg1;
- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (id)defaultTitle;
- (void)setDefaultTitle:(id)arg1;
- (void).cxx_destruct;
@end

