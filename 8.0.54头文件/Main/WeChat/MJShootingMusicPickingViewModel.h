@interface MJShootingMusicPickingViewModel : NSObject <MJCameraMusicTabViewModelDataSource, MJCameraMusicTabViewModelDelegate, MMBGMSelectedFavFeedSoundTabViewModelDelegate>
{
    BOOL _isOSTSelected; // +0x8
    BOOL _isBGMSelected; // +0x9
    BOOL _isManualSettingMusicOn; // +0xa
    BOOL _isFirstShow; // +0xb
    BOOL _shouldBlockSelectCallback; // +0xc
    BOOL _shouldOpenMusicPanelForFavMusicEntry; // +0xd
    BOOL _didSelectedMusicTriggeredByMusicPanelFirstShowing; // +0xe
    id <MJShootingMusicPickingViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _bgmPanelTabModels; // +0x18
    MMBGMSelectedConfig * _bgmPanelConfig; // +0x20
    NSArray * _templateMusics; // +0x28
    OMJMusicInfo * _currentMusicInfo; // +0x30
    unsigned long long _tabIndex; // +0x38
    unsigned long long _index; // +0x40
    unsigned long long _currentMusicSource; // +0x48
    OMJMusicInfo * _followMusicInfo; // +0x50
    NSMutableArray * _wxToMaasMusicIds; // +0x58
    RecommendedMusicInfo * _patMusicInfo; // +0x60
    MJPublisherContext * _publisherContext; // +0x68
    NSMutableDictionary * _musicDataByID; // +0x70
    MJCameraMusicTabViewModel * _camMusicVM; // +0x78
    NSString * _templateId; // +0x80
    NSString * _templateMusicId; // +0x88
    OMJMusicInfo * _templateMusicInfo; // +0x90
    EditVideoMusicController * _musicController; // +0x98
}
+ (id)lyricInfosWithResp:(id)arg1 musicDuration:(struct)arg2;
+ (unsigned long long)bgmIDWithMusicID:(id)arg1;
+ (int)bgmTypeWithMusicID:(id)arg1;
- (id)init;
- (long long)favMusicTabIndex;
- (void)loadAndPlayMusic:(id)arg1;
- (void)pauseMusic;
- (void)replayMusic;
- (void)configForceUsedMusicsWithTemplateInfo:(id)arg1 wxToMaasMusicIds:(id)arg2 patMusicInfo:(id)arg3;
- (void)fillMusicParamsTo:(id)arg1 withTemplateId:(id)arg2;
- (id)genMusicInfoAfterClearTemplate;
- (void)updateTemplateMusic:(id)arg1 selectedMusic:(id)arg2;
- (void)updateCurrentMusic:(id)arg1 atTabIndex:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (void)updateCurrentMusic:(id)arg1 source:(unsigned long long)arg2;
- (BOOL)_isForceUsedMusic:(id)arg1;
- (id)overrideMusicInfoWithPatInfoIfNeeded:(id)arg1;
- (id)_insertSelectMusicToFirst:(id)arg1 selectedMusic:(id)arg2;
- (void)downloadMusic:(id)arg1 completion:(id /* block */)arg2;
- (void)setFollowMusicInfo:(id)arg1;
- (id)MJCameraMusicTabViewModelGetMusicInfo:(id)arg1;
- (void)cameraMusicTabViewModelDidFetchRecommendedMusic:(id)arg1;
- (void)bgmSelectedFavFeedSoundTabViewModel:(id)arg1 didFetchMusicDatas:(id)arg2;
- (void)requestLyricForCurrentMusicInfoWithCompletionHandler:(id /* block */)arg1;
- (void)setPublisherContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bgmPanelTabModels;
- (id)bgmPanelConfig;
- (id)templateMusics;
- (id)currentMusicInfo;
- (unsigned long long)tabIndex;
- (unsigned long long)index;
- (unsigned long long)currentMusicSource;
- (id)followMusicInfo;
- (id)wxToMaasMusicIds;
- (void)setWxToMaasMusicIds:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (id)publisherContext;
- (BOOL)isOSTSelected;
- (void)setIsOSTSelected:(BOOL)arg1;
- (BOOL)isBGMSelected;
- (void)setIsBGMSelected:(BOOL)arg1;
- (BOOL)isManualSettingMusicOn;
- (void)setIsManualSettingMusicOn:(BOOL)arg1;
- (BOOL)isFirstShow;
- (void)setIsFirstShow:(BOOL)arg1;
- (BOOL)shouldBlockSelectCallback;
- (void)setShouldBlockSelectCallback:(BOOL)arg1;
- (BOOL)shouldOpenMusicPanelForFavMusicEntry;
- (void)setShouldOpenMusicPanelForFavMusicEntry:(BOOL)arg1;
- (BOOL)didSelectedMusicTriggeredByMusicPanelFirstShowing;
- (void)setDidSelectedMusicTriggeredByMusicPanelFirstShowing:(BOOL)arg1;
- (id)musicDataByID;
- (id)camMusicVM;
- (void)setCamMusicVM:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)templateMusicId;
- (void)setTemplateMusicId:(id)arg1;
- (id)templateMusicInfo;
- (void)setTemplateMusicInfo:(id)arg1;
- (id)musicController;
- (void).cxx_destruct;
@end

