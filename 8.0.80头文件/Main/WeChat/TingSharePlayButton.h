@interface TingSharePlayButton : MMUIButton <BrandAudioServiceExt>
{
    BOOL _matchPlayingItemByListenId; // +0x8
    BOOL _enterPlayer; // +0x9
    BOOL _isBrandAudio; // +0xa
    int _scene; // +0xc
    TingItem * _tingItem; // +0x10
    MMListenCategoryItem * _categoryItem; // +0x18
    ActiveSessionContext * _sessionContext; // +0x20
}
- (id)sessionContext;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2;
- (void)setButtonStyle:(unsigned long long)arg1;
- (BOOL)isCurrentItemMatchedByListenId;
- (id)currentReportCategoryItemWithPlayer:(id)arg1;
- (void)reportPlayButtonClick:(BOOL)arg1 player:(id)arg2;
- (void)playCurrentTingItem;
- (void)togglePlay;
- (void)togglePlayForBrandAudio;
- (int)transformBizAudioEnterSceneWithTingScene:(int)arg1;
- (void)setTingItem:(id)arg1;
- (void)setScene:(int)arg1;
- (BOOL)isPlaying;
- (void)playApp:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (int)scene;
- (id)tingItem;
- (id)categoryItem;
- (void)setCategoryItem:(id)arg1;
- (BOOL)matchPlayingItemByListenId;
- (void)setMatchPlayingItemByListenId:(BOOL)arg1;
- (void)setSessionContext:(id)arg1;
- (BOOL)enterPlayer;
- (void)setEnterPlayer:(BOOL)arg1;
- (BOOL)isBrandAudio;
- (void)setIsBrandAudio:(BOOL)arg1;
- (void).cxx_destruct;
@end
