@interface WCFinderVideoProducerMusicInfoMarqueeView : UIView
{
    id <WCFinderVideoProducerMusicInfoMarqueeViewProtocol> _delegate; // +0x8
    UIImageView * _musicIconView; // +0x10
    UIImageView * _arrowIconView; // +0x18
    WCMarqueeTextView * _marqueeTextView; // +0x20
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateMarqueeTextContent:(id)arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (void)_onSelfTapped;
- (void)_relayoutView;
- (void)_initView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)musicIconView;
- (void)setMusicIconView:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (id)marqueeTextView;
- (void)setMarqueeTextView:(id)arg1;
- (void).cxx_destruct;
@end
