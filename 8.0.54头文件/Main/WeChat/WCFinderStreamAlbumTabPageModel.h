@interface WCFinderStreamAlbumTabPageModel : WCFinderStreamProfilePageModel <WCFinderStreamProfileMusicPlaylistPageDelegate>
{
    id <WCFinderStreamAlbumTabPageModelDelegate> _delegate; // +0x8
    WCFinderStreamLoadingState * _state; // +0x10
    NSString * _username; // +0x18
    WCFinderStreamProfileMusicPlaylist * _section; // +0x20
}
+ (BOOL)shouldDisplay:(id)arg1;
+ (int)tabId;
- (void)dealloc;
- (id)categoryItems;
- (id)state;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)requestPageData;
- (void)_fetchAlbumData;
- (void)onMusicPageDataFilled:(id)arg1;
- (void)requestNextPageData;
- (void)bindSDKReport:(id)arg1 forCategory:(id)arg2;
- (void)onPlayList:(id)arg1 appendDataAtRange:(_NSRange)arg2;
- (id)reportParamsBlock;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setState:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)section;
- (void)setSection:(id)arg1;
- (void).cxx_destruct;
@end

