@interface MMBGMSelectedView : MMUIView <MMBGMSelectedBottomViewDelegate, MMBGMSelectedContentViewDelegate>
{
    id <MMBGMSelectedViewDelegate> _delegate; // +0x8
    MMBGMPanelPublishContext * _publishContext; // +0x10
    MMBGMSelectedConfig * _config; // +0x18
    MMBGMSelectedContentView * _topContentView; // +0x20
    MMBGMSelectedBottomView * _bottomView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 tabModel:(id)arg2 config:(id)arg3;
- (void)setupDataReport;
- (id)genReportDict;
- (void)setupWithtabModel:(id)arg1 config:(id)arg2;
- (void)setPublishContext:(id)arg1;
- (void)layoutSubviews;
- (void)addMusicData:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)findAndSetMusicPlaying:(id)arg1;
- (unsigned long long)currentSelectedTabIndex;
- (void)selectMusicAtTabIndex:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)setAllCellUnSelected;
- (void)switchToTabIndex:(unsigned long long)arg1;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicOfCurrentTabIfNeeded;
- (void)addSearchSelectedResultIfNeed;
- (BOOL)isMusicOn;
- (BOOL)isOriginSoundSelected;
- (BOOL)isLyricOn;
- (void)manualSetMusicOn:(BOOL)arg1;
- (void)manualSetOstOn:(BOOL)arg1;
- (void)manualSetLyricOn:(BOOL)arg1;
- (id)currentMusicData;
- (id)genMusicSelectedResult;
- (void)setBgmViewShow;
- (void)onBGMSelectedBottomView:(id)arg1 didClickOstBtn:(id)arg2;
- (void)onBGMSelectedBottomView:(id)arg1 didClickMusicOnBtn:(id)arg2;
- (void)onBGMSelectedBottomView:(id)arg1 didClickLyricOnBtn:(id)arg2;
- (void)bgmSelectedContentViewDidSelectedMusic:(id)arg1 atTabIndex:(unsigned long long)arg2 index:(unsigned long long)arg3 isTriggerByTap:(BOOL)arg4;
- (id)bgmSelectedContentView:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3 tabIndex:(unsigned long long)arg4;
- (void)bgmSelectedContentView:(id)arg1 willShowMusic:(id)arg2 tabIndex:(unsigned long long)arg3 musicIndex:(unsigned long long)arg4;
- (void)bgmSelectedContentViewDidClickSearchBar:(id)arg1;
- (void)bgmSelectedContentView:(id)arg1 didSearchWithKey:(id)arg2;
- (void)bgmSelectedContentViewDidCloseSearchView:(id)arg1 latestSelectedMusic:(id)arg2;
- (BOOL)bgmSelectedContentViewGetMusicState:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publishContext;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)topContentView;
- (void)setTopContentView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void).cxx_destruct;
@end

