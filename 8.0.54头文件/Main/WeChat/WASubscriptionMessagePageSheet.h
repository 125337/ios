@interface WASubscriptionMessagePageSheet : WAAuthorizePageSheet
{
    WASubscriptionMessagePageSheetViewModel * _viewModel; // +0x8
    WATemplateAudioPlayer * _audioPlayer; // +0x10
}
- (id)initWithViewModel:(id)arg1;
- (void)playAudio:(id)arg1;
- (id)audioPlayer;
- (id)subviewClassList;
- (id)subViewModel;
- (void)onAcceptButtonClick;
- (void)onRejectButtonClick;
- (void)onDeclineButtonClick;
- (id)viewModel;
- (void)setAudioPlayer:(id)arg1;
- (void).cxx_destruct;
@end

