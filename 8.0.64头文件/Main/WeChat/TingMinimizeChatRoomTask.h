@interface TingMinimizeChatRoomTask : TingMinimizeBaseTask <MiniAudioTaskContentViewDelegate, MMImageLoaderObserver>
{
    BOOL _disableOpen; // +0x8
    unsigned int _memberCount; // +0xc
    MiniAudioTaskContentView * _contentView; // +0x10
    UILabel * _memberCountLabel; // +0x18
}
- (id)init;
- (void)dealloc;
- (id)leftButton;
- (id)contentView;
- (id)taskContainerView;
- (BOOL)canMinimizeBecomeActive:(id)arg1;
- (id)getChatRoomPluginService;
- (id)contentDefaultImage;
- (BOOL)isRoomCreatedByMyself;
- (void)updateContentViewIfNeedWithForce:(BOOL)arg1;
- (id)currentListenItemCover;
- (void)updateTaskDataBeforeMinimize:(id)arg1;
- (BOOL)shouldStopPlayWhenTaskEngagedForReason:(long long)arg1;
- (void)updateChatRoomMemberCount:(unsigned int)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMinimizeTaskTerminate;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)setPausedState:(BOOL)arg1;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onStateViewPlayPauseBtnClick:(BOOL)arg1;
- (void)openTask;
- (void)openChatRoomWithParams:(id)arg1;
- (void)setContentView:(id)arg1;
- (BOOL)disableOpen;
- (void)setDisableOpen:(BOOL)arg1;
- (id)memberCountLabel;
- (void)setMemberCountLabel:(id)arg1;
- (unsigned int)memberCount;
- (void)setMemberCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
