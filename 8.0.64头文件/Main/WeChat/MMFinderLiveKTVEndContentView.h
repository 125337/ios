@interface MMFinderLiveKTVEndContentView : MMFinderLiveKTVBaseView <MMFinderLiveKTVUIExt>
{
    NSString * _currUniqueId; // +0x8
    WCFinderHeadImageView * _singerHeadImageView; // +0x10
    MMUILabel * _endTipLabel; // +0x18
    MMUILabel * _scoreCntLabel; // +0x20
    MMUILabel * _levelCntLabel; // +0x28
    MMUILabel * _nextSongTipLabel; // +0x30
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutEndTipWidgets;
- (void)createSingerHeadImageView;
- (void)createTipLabel;
- (void)updateEndTipWidgetsOrigin;
- (void)layoutScoreAndLevelWidgets;
- (void)createScoreCntLabel;
- (void)createLevelCntLabel;
- (void)updateScoreAndLevelWidgetsOrigin;
- (void)layoutNextSongTipLabel;
- (void)updateNextSongTipLabelOrigin;
- (void)refresh;
- (void)onCurrSongNameUpdated;
- (void)onNextSongNameUpdated;
- (void)clearStates;
- (BOOL)updateCurrUniqueId;
- (void)updateDatas;
- (void)updateSingerHeaderImage;
- (void)updateEndTip;
- (void)updateScoreCnt;
- (void)updateLevelCnt;
- (void)updateNextSong;
- (id)gradientColorImageForTheme:(id)arg1;
- (void)onLiveKTVMainWidgetColorUpdate:(id)arg1 taskId:(id)arg2;
- (id)currUniqueId;
- (void)setCurrUniqueId:(id)arg1;
- (id)singerHeadImageView;
- (void)setSingerHeadImageView:(id)arg1;
- (id)endTipLabel;
- (void)setEndTipLabel:(id)arg1;
- (id)scoreCntLabel;
- (void)setScoreCntLabel:(id)arg1;
- (id)levelCntLabel;
- (void)setLevelCntLabel:(id)arg1;
- (id)nextSongTipLabel;
- (void)setNextSongTipLabel:(id)arg1;
- (void).cxx_destruct;
@end
