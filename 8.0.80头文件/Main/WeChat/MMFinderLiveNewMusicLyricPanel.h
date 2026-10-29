@interface MMFinderLiveNewMusicLyricPanel : UIView
{
    BOOL _isCollapsed; // +0x8
    id <MMFinderLiveNewMusicLyricPanelDelegate> _delegate; // +0x10
    id /* block */ _positionUpdateBlock; // +0x18
    id /* block */ _styleUpdateBlock; // +0x20
    id /* block */ _collapseStatusUpdateBlock; // +0x28
    id /* block */ _startPlayingBlock; // +0x30
    MMFinderLiveKSKitLyricStyle * _lyricStyle; // +0x38
    MMFinderLiveKTVSongItem * _currSongItem; // +0x40
    MMFinderLiveKSKitMusicSong * _currSongResourceData; // +0x48
    MMFinderLiveKSKitLyricContainerView * _musicLyricContainerView; // +0x50
    UIView * _buttonContainerView; // +0x58
    MMFinderLiveTaskId * _taskId; // +0x60
    long long _channel; // +0x68
    MMUIButton * _pauseButton; // +0x70
    MMUIButton * _cutButton; // +0x78
    MMUIButton * _originalSongButton; // +0x80
    MMUIButton * _moreButton; // +0x88
    MMUIButton * _foldButton; // +0x90
    unsigned long long _lastCollapsedStatusTimeMs; // +0x98
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)startWithSongItem:(id)arg1 ksMusicSong:(id)arg2;
- (void)stopPlayingCurrentSong;
- (void)pause;
- (void)resume;
- (void)refreshPauseButton;
- (void)onSwitchChannel:(long long)arg1;
- (void)refreshOriginalSongButton;
- (void)updateLyricStyle:(id)arg1;
- (void)updateLyricAlignment:(unsigned long long)arg1;
- (void)startPreview;
- (void)stopPreview;
- (void)setIsCollapsed:(BOOL)arg1;
- (void)updateLyricWithProgress:(int)arg1 lyricPosition:(id)arg2 lyricStyle:(id)arg3;
- (void)onLivePauseStateChanged:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)musicLyricContainerView;
- (id)buttonContainerView;
- (id)pauseButton;
- (id)cutButton;
- (id)originalSongButton;
- (id)moreButton;
- (id)foldButton;
- (void)onTapPauseButton;
- (void)onTapCutButton;
- (void)onTapOriginalSongButton;
- (void)onTapMoreButton;
- (void)onTapFoldButton;
- (void)impactOccurred;
- (id)liveTask;
- (id)anchorReporter;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)positionUpdateBlock;
- (void)setPositionUpdateBlock:(id /* block */)arg1;
- (id /* block */)styleUpdateBlock;
- (void)setStyleUpdateBlock:(id /* block */)arg1;
- (id /* block */)collapseStatusUpdateBlock;
- (void)setCollapseStatusUpdateBlock:(id /* block */)arg1;
- (id /* block */)startPlayingBlock;
- (void)setStartPlayingBlock:(id /* block */)arg1;
- (id)lyricStyle;
- (void)setLyricStyle:(id)arg1;
- (id)currSongItem;
- (void)setCurrSongItem:(id)arg1;
- (id)currSongResourceData;
- (void)setCurrSongResourceData:(id)arg1;
- (BOOL)isCollapsed;
- (void)setMusicLyricContainerView:(id)arg1;
- (void)setButtonContainerView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)channel;
- (void)setChannel:(long long)arg1;
- (void)setPauseButton:(id)arg1;
- (void)setCutButton:(id)arg1;
- (void)setOriginalSongButton:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setFoldButton:(id)arg1;
- (unsigned long long)lastCollapsedStatusTimeMs;
- (void)setLastCollapsedStatusTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
