@interface VoiceReminderRemindCellView : CommonMessageCellView <IAudioReceiverExt>
{
    UIButton * m_playButton; // +0xb0
    long long m_playCount; // +0xb8
    BOOL m_playing; // +0xc0
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)layoutContentView;
- (void)initView;
- (void)onPlayButtonClicked:(id)arg1;
- (void)startPlayVoice;
- (void)stopPlayVoice;
- (void)downloadAppData;
- (void)OnEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void).cxx_destruct;
@end
