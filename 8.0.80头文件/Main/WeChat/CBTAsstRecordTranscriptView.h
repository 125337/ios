@interface CBTAsstRecordTranscriptView : UITableViewCell
{
    id /* block */ _onSpeakerTap; // +0x8
    MMUIButton * _speakerButton; // +0x10
    UILabel * _contentLabel; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupCellUI;
- (void)configureWithSpeaker:(id)arg1 content:(id)arg2;
- (void)speakerButtonTapped;
- (id /* block */)onSpeakerTap;
- (void)setOnSpeakerTap:(id /* block */)arg1;
- (id)speakerButton;
- (void)setSpeakerButton:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end
