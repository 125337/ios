@interface MMLiveAudioRoomContext : NSObject
{
    BOOL _anchorIsTalking; // +0x8
    UIColor * _audioWaveColor; // +0x10
    WCFinderContact * _anchorContact; // +0x18
    id <MMLiveUniqueTaskId> _taskId; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)updateAnchorIsTalking:(BOOL)arg1;
- (void)updateAudioWaveColor:(id)arg1;
- (void)updateAnchorContact:(id)arg1;
- (BOOL)anchorIsTalking;
- (void)setAnchorIsTalking:(BOOL)arg1;
- (id)audioWaveColor;
- (void)setAudioWaveColor:(id)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
