@interface MMFinderLiveAnniversaryDecorationViewModel : NSObject
{
    BOOL _shouldHideHeaderDecorationView; // +0x8
    BOOL _shouldHideAtmosphereDecorationView; // +0x9
    BOOL _shouldPlayAtmosphereDecorationView; // +0xa
    NSString * _atmosphereLotAnimationViewUrl; // +0x10
    NSString * _avatarLotAnimationViewUrl; // +0x18
    FinderSyncDecorationInfoResp * _resp; // +0x20
    MMLiveResourceFetcherLegacyApiAdapter * _downloadManager; // +0x28
    MMTimer * _timer; // +0x30
    long long _defaultVerifyTime; // +0x38
    MMLiveStorageCleanupPinningToken * _resourcesPinningToken; // +0x40
    CGRect _rect; // +0x48
}
- (id)init;
- (void)setup;
- (void)updateModel:(id)arg1;
- (void)setupData;
- (void)triggerTimer;
- (void)playAtmosphereAnimationEnd;
- (id)downloadUrlFrom:(id)arg1;
- (id)md5From:(id)arg1;
- (id)atmosphereLotAnimationViewUrl;
- (void)setAtmosphereLotAnimationViewUrl:(id)arg1;
- (id)avatarLotAnimationViewUrl;
- (void)setAvatarLotAnimationViewUrl:(id)arg1;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
- (BOOL)shouldHideHeaderDecorationView;
- (void)setShouldHideHeaderDecorationView:(BOOL)arg1;
- (BOOL)shouldHideAtmosphereDecorationView;
- (void)setShouldHideAtmosphereDecorationView:(BOOL)arg1;
- (BOOL)shouldPlayAtmosphereDecorationView;
- (void)setShouldPlayAtmosphereDecorationView:(BOOL)arg1;
- (id)resp;
- (void)setResp:(id)arg1;
- (id)downloadManager;
- (void)setDownloadManager:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (long long)defaultVerifyTime;
- (void)setDefaultVerifyTime:(long long)arg1;
- (id)resourcesPinningToken;
- (void)setResourcesPinningToken:(id)arg1;
- (void).cxx_destruct;
@end
