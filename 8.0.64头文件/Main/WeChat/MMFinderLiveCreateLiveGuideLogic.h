@interface MMFinderLiveCreateLiveGuideLogic : NSObject <MMFinderLiveCreateLivePOIGuideViewDataSource>
{
    BOOL _currentTopicTextValid; // +0x8
    BOOL _currentLiveHasPOIInfo; // +0x9
    BOOL _currentLiveHasTopicInfo; // +0xa
    id <MMFinderLiveCreateLiveGuideLogicDelegate> _delegate; // +0x10
    long long _currentCreateLivePageMode; // +0x18
    MMLiveTaskId * _liveTaskId; // +0x20
    LbsLifeData * _lbsLifeData; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)updateCreateLiveInfoByDelegate;
- (void)updateTopicTextValidState:(BOOL)arg1;
- (void)updateLbsLifeData:(id)arg1;
- (void)updateOnShowGuidePanel;
- (id)getLiveTask;
- (id)getGuidePageControlInfo;
- (id)getRemiderControlInfoForCurPageMode;
- (id)getPoiPopupFreqencyInfo;
- (id)getPOIGuideViewLbsLifeData;
- (BOOL)needShowCreateLiveGuidePanel;
- (id)createLivePanelTitle;
- (BOOL)needShowPOIGuide;
- (BOOL)needShowTopicGuide;
- (BOOL)needShowCancelButton;
- (BOOL)enableStartLive;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)currentCreateLivePageMode;
- (void)setCurrentCreateLivePageMode:(long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (BOOL)currentTopicTextValid;
- (void)setCurrentTopicTextValid:(BOOL)arg1;
- (id)lbsLifeData;
- (void)setLbsLifeData:(id)arg1;
- (BOOL)currentLiveHasPOIInfo;
- (void)setCurrentLiveHasPOIInfo:(BOOL)arg1;
- (BOOL)currentLiveHasTopicInfo;
- (void)setCurrentLiveHasTopicInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
