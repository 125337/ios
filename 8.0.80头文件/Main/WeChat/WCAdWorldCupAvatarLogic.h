@interface WCAdWorldCupAvatarLogic : WCAdvertiseOperationLogicBase <WCAdWorldCupAvatarExt, WCAdDynamicCanvasVCExt>
{
    BOOL _isPlaying; // +0x8
    BOOL _stageOnePlayed; // +0x9
    id <WCAdWorldCupAvatarLogicDelegate> _delegate; // +0x10
    long long _currentStage; // +0x18
    UIView * _stageOnePagView; // +0x20
    UIView * _stageTwoPagView; // +0x28
    UIView * _stageFourPagView; // +0x30
    NSString * _avatarUrl; // +0x38
    WCDataItem * _dataItem; // +0x40
    unsigned long long _contentItemScene; // +0x48
    NSMutableSet * _pagNotReadyReportedStages; // +0x50
}
+ (id)getWorldCupAvatarLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
+ (void)updateAvatarUrl:(id)arg1 avatarMd5:(id)arg2 forAid:(id)arg3;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)dealloc;
- (id)worldCupAvatarInfo;
- (id)aid;
- (id)avatarUrl;
- (void)resetAvatarUrlCache;
- (BOOL)shouldReportPagNotReadyForStage:(long long)arg1;
- (void)markPagNotReadyReportedForStage:(long long)arg1;
- (void)determineCurrentStage;
- (void)notifyStageChanged;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (void)onStageOneDidFinish;
- (void)onAvatarUpdateDoneWithAvatarUrl:(id)arg1;
- (void)onWorldCupAvatarUpdateDone:(id)arg1 aid:(id)arg2;
- (void)onAdDynamicCanvasNotifyDidBePoped:(id)arg1;
- (id)fetchAdOperationLogicKey;
- (void)tryToNotifyCanvasDidBePoped;
- (void)notifyCanvasDidBePoped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)currentStage;
- (void)setCurrentStage:(long long)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (id)stageOnePagView;
- (void)setStageOnePagView:(id)arg1;
- (id)stageTwoPagView;
- (void)setStageTwoPagView:(id)arg1;
- (id)stageFourPagView;
- (void)setStageFourPagView:(id)arg1;
- (void)setAvatarUrl:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (BOOL)stageOnePlayed;
- (void)setStageOnePlayed:(BOOL)arg1;
- (id)pagNotReadyReportedStages;
- (void)setPagNotReadyReportedStages:(id)arg1;
- (void).cxx_destruct;
@end
