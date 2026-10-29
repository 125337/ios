@interface VoiceReminderConfirmCellView : BaseMessageCellView <IVoiceReminderExt, IAudioReceiverExt, ISettingExtChange>
{
    int m_playCount; // +0x28
    BOOL m_playing; // +0x2c
    BOOL m_deleting; // +0x2d
    UIImageView * m_bgImageView; // +0x30
    UIImageView * m_remindStatusImageView; // +0x38
    UIImageView * m_bodyBkgImageView; // +0x40
    UILabel * m_dateLabel; // +0x48
    UILabel * m_timeLabel; // +0x50
    UILabel * m_timeDescLabel; // +0x58
    UILabel * m_descLabel; // +0x60
    UIButton * m_playButton; // +0x68
    UIButton * m_cancelButton; // +0x70
    MMUIActivityIndicatorView * m_spinner; // +0x78
    UIView * m_maskView; // +0x80
    UIView * m_separatorView; // +0x88
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)layoutContentView;
- (void)setHighlighted:(BOOL)arg1;
- (void)initView;
- (void)onDelete:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onPlayButtonClicked:(id)arg1;
- (void)startPlayVoice;
- (void)stopPlayVoice;
- (id)getRemindBackgroundImage:(id)arg1;
- (void)becomeRemindStatus;
- (void)cancelRemindMsg:(id)arg1;
- (void)downloadAppData;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onDeleteRemindMsgsReturn:(BOOL)arg1 msgWrap:(id)arg2;
- (void)OnEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)onSettingExtChanged:(long long)arg1;
- (void).cxx_destruct;
@end
