@interface WNAttachmentVoiceView : WNAttachmentBaseView <IWNAudioMgrExt>
{
    UILabel * _titleLabel; // +0x8
    UILabel * _totalTimeLabel; // +0x10
    MMUIButton * _controlBtn; // +0x18
    int _viewType; // +0x20
    UIView * _recordingPoint; // +0x28
    UIView * _progressIndicator; // +0x30
    UIView * _progressBackView; // +0x38
    UIView * _progressFrontView; // +0x40
    BOOL _userDragging; // +0x48
    double _titleWidth; // +0x50
    unsigned int _timems; // +0x58
}
- (id)initWithAttachment:(id)arg1;
- (unsigned int)timems;
- (BOOL)ifLayoutViewByBase;
- (void)setSelected;
- (void)setUnSelected;
- (void)layoutView;
- (void)onClickObject;
- (void)onIndicatorPan:(id)arg1;
- (void)setProgressIndicatorCenterX:(double)arg1;
- (void)showNormalView;
- (void)showRecordingView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)showPlayingView;
- (void)onClickControlBtn;
- (id)getDuration:(int)arg1;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)UpdateWNAudioRecordWithObj:(id)arg1;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (void)OnEndPlayWNAudio:(id)arg1;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (id)getSubViewAccessibilityRecursive;
- (void)setTimems:(unsigned int)arg1;
- (void).cxx_destruct;
@end
