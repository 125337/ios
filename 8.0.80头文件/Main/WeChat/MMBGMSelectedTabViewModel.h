@interface MMBGMSelectedTabViewModel : NSObject <MMBGMTabViewModelProtocol>
{
    id <MMBGMSelectedTabViewModelDelegate> _delegate; // +0x8
    MMBGMSelectedConfig * _config; // +0x10
    MMBGMSelectedTabViewModelParams * _optionalParams; // +0x18
    MMBGMPanelPublishContext * _publishContext; // +0x20
}
+ (void)syncMusicFavStateToServerWithMusicData:(id)arg1 bgmListType:(unsigned long long)arg2;
+ (void)syncMusicUnFavStateToServerWithMusicData:(id)arg1 bgmListType:(unsigned long long)arg2;
+ (void)syncMusicPlayedStateToServerWithMusicData:(id)arg1 bgmListType:(unsigned long long)arg2;
+ (void)syncMusicUnPlayedStateToServerWithMusicData:(id)arg1 bgmListType:(unsigned long long)arg2;
+ (id)_commonBgmInteractParamWithMusicData:(id)arg1 bgmListType:(unsigned long long)arg2;
+ (void)_startBgmInteractCGIWithParams:(id)arg1;
- (id)initWithPublishContext:(id)arg1;
- (id)tabTitle;
- (unsigned long long)tabType;
- (void)loadData;
- (BOOL)hasMoreData;
- (void)loadMoreData;
- (unsigned long long)dataCount;
- (BOOL)needsLoadData;
- (id)dataAtIndex:(unsigned long long)arg1;
- (void)addMusicData:(id)arg1;
- (void)removeMusicData:(id)arg1;
- (void)setMusicDataToFirst:(id)arg1;
- (BOOL)isReccommentdTabModel;
- (BOOL)shouldInsertSelectedMusicDataToFirst;
- (unsigned long long)indexOfMusicInfo:(id)arg1;
- (unsigned long long)getMaterialDuration;
- (void)reportBGMCgiWithDuration:(unsigned long long)arg1 resultCount:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)optionalParams;
- (void)setOptionalParams:(id)arg1;
- (id)publishContext;
- (void).cxx_destruct;
@end
