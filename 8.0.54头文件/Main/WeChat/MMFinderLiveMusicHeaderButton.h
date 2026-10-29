@interface MMFinderLiveMusicHeaderButton : UIView
{
    id <MMFinderLiveMusicHeaderButtonDelegate> _delegate; // +0x8
    MMLRUCache * _qqMusicCache; // +0x10
    MMLRUCache * _tingMusicCache; // +0x18
    FinderLiveBriefMusicInfo * _currentBriefInfo; // +0x20
    UIView * _musicButton; // +0x28
    UIImageView * _musicIconView; // +0x30
}
- (id)initWithCacheCapacity:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutMusicIcon;
- (BOOL)updateCurrentId:(id)arg1;
- (void)updateMusicLogo;
- (void)setCacheSongItemForId:(id)arg1 item:(id)arg2;
- (id)objectCacheSongItemForId:(id)arg1;
- (void)onClick;
- (void)setupMusicView;
- (id)musicIconView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)qqMusicCache;
- (void)setQqMusicCache:(id)arg1;
- (id)tingMusicCache;
- (void)setTingMusicCache:(id)arg1;
- (id)currentBriefInfo;
- (void)setCurrentBriefInfo:(id)arg1;
- (id)musicButton;
- (void)setMusicButton:(id)arg1;
- (void)setMusicIconView:(id)arg1;
- (void).cxx_destruct;
@end

