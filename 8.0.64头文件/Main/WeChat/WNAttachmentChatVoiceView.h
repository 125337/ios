@interface WNAttachmentChatVoiceView : WNAttachmentBaseView <IWNAudioMgrExt>
{
    UILabel * titleLabel; // +0x8
    UIImageView * playingImageView; // +0x10
    int viewType; // +0x18
}
- (id)initWithAttachment:(id)arg1;
- (BOOL)ifLayoutViewByBase;
- (void)layoutView;
- (void)showNormalView;
- (void)showPlayingView;
- (void)onClickObject;
- (id)getDuration:(int)arg1;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (void)OnEndPlayWNAudio:(id)arg1;
- (void).cxx_destruct;
@end
