@interface WCAdWorldCupAvatarContainerView : MMUIView <WCAdWorldCupAvatarLogicDelegate, WCAdPagViewDelegate>
{
    id <WCAdWorldCupAvatarContainerViewDelegate> _delegate; // +0x8
    WCDataItem * _dataItem; // +0x10
    unsigned long long _contentItemScene; // +0x18
    WCAdWorldCupAvatarLogic * _logic; // +0x20
    WCAdURLImageView * _avatarImageView; // +0x28
    NSMutableArray * _hotZoneButtons; // +0x30
    WCAdTwinTurboPagView * _stageOnePagView; // +0x38
    WCAdTwinTurboPagView * _stageTwoPagView; // +0x40
    WCAdTwinTurboPagView * _stageFourPagView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 logic:(id)arg4;
- (id)loadPagViewFromCache:(id)arg1 pagInfo:(id)arg2 pagDarkInfo:(id)arg3 repeatCount:(int)arg4;
- (id)stageOnePagView;
- (id)stageTwoPagView;
- (id)stageFourPagView;
- (void)playCurrentStage;
- (void)pauseCurrentStage;
- (void)stopAllStages;
- (void)pauseAllStagesIfNeeded;
- (void)updateStageView;
- (id)avatarImageView;
- (void)addHotZoneButtonWithFrame:(CGRect)arg1 subClickPos:(long long)arg2;
- (CGRect)scaledFrameForHotZone:(id)arg1 scale:(double)arg2;
- (void)setupHotZones;
- (void)onHotZoneTapped:(id)arg1;
- (void)onPagViewPlayEnd:(id)arg1;
- (void)logicDidSwitchStage:(long long)arg1 shouldPlay:(BOOL)arg2;
- (void)onWorldCupAvatarNotifyCanvasDidBePopedWithDataItem:(id)arg1;
- (void)prepare;
- (void)prepareForDetail;
- (void)start;
- (void)pause;
- (void)stop;
- (void)updateDataItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (id)hotZoneButtons;
- (void)setHotZoneButtons:(id)arg1;
- (void)setStageOnePagView:(id)arg1;
- (void)setStageTwoPagView:(id)arg1;
- (void)setStageFourPagView:(id)arg1;
- (void).cxx_destruct;
@end
