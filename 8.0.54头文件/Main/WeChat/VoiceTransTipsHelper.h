@interface VoiceTransTipsHelper : NSObject <IAudioReceiverExt, AutoPlayControllerExt, VoiceAutoTranslateExt>
{
    BOOL _bAutoPlaying; // +0x8
    BOOL _bAutoTranslating; // +0x9
    id <VoiceTransTipsHelperDelegate> _delegate; // +0x10
    NSHashTable * _voiceCellTable; // +0x18
    VoiceMessageViewModel * _tipsShowingViewModel; // +0x20
}
+ (BOOL)CanShowQuickTransTips;
- (id)initWithDelegate:(id)arg1;
- (float)getShowTipsMinDuration;
- (void)onViewDisappear;
- (void)tryShowTranslateTips;
- (void)onChangeVisableCells:(id)arg1;
- (void)animateCleanTransTips;
- (void)onTableDidScroll:(id)arg1;
- (void)OnBeginPlaying:(id)arg1 success:(BOOL)arg2;
- (void)OnEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)onAutoPlayEndWithMsg:(id)arg1;
- (void)onAutoTransStart;
- (void)onAutoTransEnd:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voiceCellTable;
- (void)setVoiceCellTable:(id)arg1;
- (id)tipsShowingViewModel;
- (void)setTipsShowingViewModel:(id)arg1;
- (BOOL)bAutoPlaying;
- (void)setBAutoPlaying:(BOOL)arg1;
- (BOOL)bAutoTranslating;
- (void)setBAutoTranslating:(BOOL)arg1;
- (void).cxx_destruct;
@end

