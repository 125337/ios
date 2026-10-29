@interface WCFinderProfileAudioPageModel : WCFinderStreamProfilePageModel
{
    id <WCFinderProfileAudioPageModelDelegate> _delegate; // +0x8
    NSArray * _sections; // +0x10
    WCFinderStreamLoadingState * _state; // +0x18
    FinderLiteAppParam * _postAudioLiteAppParams; // +0x20
    FinderLiteAppParam * _manageAudioLiteAppParams; // +0x28
    NSString * _username; // +0x30
}
+ (BOOL)shouldDisplay:(id)arg1;
+ (int)tabId;
+ (BOOL)allowLimitMode;
+ (id)overviewSectionTypes;
+ (void)onClickAudio:(id)arg1 section:(id)arg2 username:(id)arg3 postLiteAppParams:(id)arg4 navController:(id)arg5;
+ (void)onClickAudio:(id)arg1 section:(id)arg2 scene:(int)arg3 username:(id)arg4 postLiteAppParams:(id)arg5 navController:(id)arg6;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)updateOverviewSection:(id)arg1 withAudioSection:(id)arg2 fillCacheItem:(BOOL)arg3;
- (id)init;
- (void)requestPageData;
- (void)reloadPage;
- (void)requestNextPage;
- (void)_requestPageData;
- (void)bindSDKReport:(id)arg1 forAudio:(id)arg2 tabName:(id)arg3;
- (void)bindSDKReport:(id)arg1 forAudiOCollection:(id)arg2;
- (void)onClickAudio:(id)arg1 section:(id)arg2 postLiteAppParams:(id)arg3 navController:(id)arg4;
- (void)onClickAudioCollection:(id)arg1;
- (id)reportParamsBlock;
- (void)correctionCollectionCount:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)postAudioLiteAppParams;
- (void)setPostAudioLiteAppParams:(id)arg1;
- (id)manageAudioLiteAppParams;
- (void)setManageAudioLiteAppParams:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end

