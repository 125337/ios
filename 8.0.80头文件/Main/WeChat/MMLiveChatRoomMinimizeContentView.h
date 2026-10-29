@interface MMLiveChatRoomMinimizeContentView : UIView <MMLiveAudioRoomContextExt>
{
    BOOL _anchorIsTalking; // +0x8
    unsigned long long _scene; // +0x10
    id <MMLiveUniqueTaskId> _taskId; // +0x18
    MMFinderLiveAudioRoomTalkingUserView * _talkingUserView; // +0x20
}
- (id)initWithTaskId:(id)arg1 scene:(unsigned long long)arg2;
- (id)initWithTaskId:(id)arg1;
- (void)updateWithAudioRoomContext:(id)arg1;
- (void)registerExtensions;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)show;
- (void)hide;
- (void)onAudioRoomAnchorIsTalkingChanged:(BOOL)arg1 taskId:(id)arg2;
- (void)onAudioRoomAudioWaveColorChanged:(id)arg1 taskId:(id)arg2;
- (void)onAudioRoomAnchorContactChanged:(id)arg1 taskId:(id)arg2;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)talkingUserView;
- (void)setTalkingUserView:(id)arg1;
- (BOOL)anchorIsTalking;
- (void)setAnchorIsTalking:(BOOL)arg1;
- (void).cxx_destruct;
@end
