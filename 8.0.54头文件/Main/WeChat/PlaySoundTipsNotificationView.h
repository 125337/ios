@interface PlaySoundTipsNotificationView : MMNotificationView
{
    id /* block */ _onClickPlaySoundButton; // +0x8
    UIImageView * _imageView; // +0x10
    MMUILabel * _textLabel; // +0x18
    MMUILabel * _detailTextLabel; // +0x20
    UIButton * _playSoundButton; // +0x28
}
- (void)initContentView;
- (void)sizeToFitWidth:(double)arg1;
- (void)configSDKReport;
- (void)clickPlaySoundButton;
- (id /* block */)onClickPlaySoundButton;
- (void)setOnClickPlaySoundButton:(id /* block */)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)detailTextLabel;
- (void)setDetailTextLabel:(id)arg1;
- (id)playSoundButton;
- (void)setPlaySoundButton:(id)arg1;
- (void).cxx_destruct;
@end

