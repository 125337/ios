@interface WCFinderNativeDramaIAAFeedConfigView : UIView
{
    BOOL _volumeOn; // +0x8
    id /* block */ _volumeAction; // +0x10
    id /* block */ _closeAction; // +0x18
    UIImageView * _volumeImageView; // +0x20
    UIView * _separator; // +0x28
    UILabel * _textLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)_setupLayout;
- (void)updateWithVolumeOn:(BOOL)arg1;
- (void)updateWithVolumeOn:(BOOL)arg1 onTapVolumeAction:(id /* block */)arg2 onTapCloseAction:(id /* block */)arg3;
- (void)_onTapView:(id)arg1;
- (id)volumeImageView;
- (id)separator;
- (id)textLabel;
- (BOOL)volumeOn;
- (void)setVolumeOn:(BOOL)arg1;
- (id /* block */)volumeAction;
- (void)setVolumeAction:(id /* block */)arg1;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (void)setVolumeImageView:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
