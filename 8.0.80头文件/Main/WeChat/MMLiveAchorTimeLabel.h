@interface MMLiveAchorTimeLabel : MMLiveBaseComponentView <MMLiveAnchorExceptionCheckDelegate>
{
    MMLiveAnchorExceptionCheckManager * _anchorExceptionCheckManager; // +0x8
    UIImageView * _networkStateImageView; // +0x10
    id /* block */ _anchorExceptionCheckActionWithTypeBlock; // +0x18
    BOOL _timerLabelNeedsResize; // +0x20
    id /* block */ _onLiveQualityUpdatedBlock; // +0x28
    id /* block */ _onCameraCastConnectionChangedBlock; // +0x30
    id /* block */ _onTimeLabelSizeDidChangedBlock; // +0x38
    long long _currentNetWorkState; // +0x40
    MMTimerLabel * _timerLabel; // +0x48
}
+ (id)networkImageForState:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutNetworkStateImageView;
- (void)layoutTimerLabel;
- (void)sizeToFits;
- (double)iconInnerPadding;
- (double)regularWidth;
- (void)onEnterLive;
- (void)onLivePaused;
- (void)onLiveResumed;
- (void)onLiveProgressUpdated:(unsigned int)arg1;
- (void)onLiveQualityUpdated:(id)arg1;
- (void)onCameraCastConnectionChanged:(BOOL)arg1;
- (void)checkAchorLiveUnNormal:(unsigned int)arg1;
- (id)anchorExceptionCheckManager;
- (id)finderLiveTaskId;
- (id)finderLiveTask;
- (void)anchorExceptionCheckActionWithType:(unsigned long long)arg1 isShow:(BOOL)arg2;
- (void)cancelAnchorExceptionCheckActionWithType:(unsigned long long)arg1;
- (void)setAnchorExceptionCheckActionWithTypeBlock:(id /* block */)arg1;
- (id /* block */)onLiveQualityUpdatedBlock;
- (void)setOnLiveQualityUpdatedBlock:(id /* block */)arg1;
- (id /* block */)onCameraCastConnectionChangedBlock;
- (void)setOnCameraCastConnectionChangedBlock:(id /* block */)arg1;
- (id /* block */)onTimeLabelSizeDidChangedBlock;
- (void)setOnTimeLabelSizeDidChangedBlock:(id /* block */)arg1;
- (long long)currentNetWorkState;
- (void)setCurrentNetWorkState:(long long)arg1;
- (id)networkStateImageView;
- (id)timerLabel;
- (void)setTimerLabel:(id)arg1;
- (BOOL)timerLabelNeedsResize;
- (void)setTimerLabelNeedsResize:(BOOL)arg1;
- (void).cxx_destruct;
@end
