@interface WCFinderMusicPlaylistTabPageModel : WCFinderStreamProfilePageModel
{
    id <WCFinderStreamProfileMusicPlaylistDelegate> _delegate; // +0x8
    WCFinderStreamLoadingState * _state; // +0x10
    NSArray * _sections; // +0x18
    WCFinderStreamProfileMusicPlaylist * _albumSection; // +0x20
    FinderLiteAppParam * _postMusicLiteAppParams; // +0x28
    FinderLiteAppParam * _manageMusicLiteAppParams; // +0x30
    NSString * _username; // +0x38
    MMListenCategoryItem * _musicCategory; // +0x40
    FinderMusicBaikeSummary * _baikeSummary; // +0x48
}
+ (BOOL)shouldDisplay:(id)arg1;
+ (BOOL)allowLimitMode;
+ (int)tabId;
+ (id)overviewSectionTypes;
+ (id)idForCategory:(id)arg1;
+ (id)listenIdForMusicItem:(id)arg1;
- (BOOL)shouldDisplayTab;
- (void)requestPageData;
- (void)_updateMusicOverviewSection:(BOOL)arg1;
- (id)init;
- (id)initWithUserName:(id)arg1;
- (id)displayName;
- (id)viewPageClassName;
- (int)tingPlayScene;
- (void)requestNextPageData:(BOOL)arg1;
- (BOOL)sectionHasData:(id)arg1;
- (void)onClickPlaylist:(id)arg1;
- (void)onClickMusic:(id)arg1;
- (void)onClickMusic:(id)arg1 scene:(int)arg2;
- (void)onClickAllMusic;
- (void)onClickBaikeMusic;
- (void)fetchPlayListWithCompletion:(id /* block */)arg1;
- (void)reloadPage;
- (id)reportParamsBlock;
- (void)bindSDKReportAlubmCard:(id)arg1 album:(id)arg2;
- (void)bindSDKReportAlubmMore:(id)arg1 sec:(id)arg2;
- (void)bindSDKReportMusic:(id)arg1 view:(id)arg2;
- (void)bindSDKReportAllMusicView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)state;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)albumSection;
- (void)setAlbumSection:(id)arg1;
- (id)postMusicLiteAppParams;
- (void)setPostMusicLiteAppParams:(id)arg1;
- (id)manageMusicLiteAppParams;
- (void)setManageMusicLiteAppParams:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)musicCategory;
- (void)setMusicCategory:(id)arg1;
- (id)baikeSummary;
- (void)setBaikeSummary:(id)arg1;
- (void).cxx_destruct;
@end
