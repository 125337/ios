@interface WCVideoProducerMusicInfoMarqueeView : UIView
{
    id <WCVideoProducerMusicInfoMarqueeViewProtocol> _delegate; // +0x8
    long long _musicScene; // +0x10
    OMJMusicInfo * _currentSelectedMusic; // +0x18
    UIImageView * _musicIconView; // +0x20
    UIImageView * _arrowIconView; // +0x28
    WCMarqueeTextView * _marqueeTextView; // +0x30
}
- (void)configSnsDataReport;
- (id)genSnsReportDict;
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
- (long long)musicScene;
- (void)setMusicScene:(long long)arg1;
- (id)currentSelectedMusic;
- (void)setCurrentSelectedMusic:(id)arg1;
- (id)musicIconView;
- (void)setMusicIconView:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (id)marqueeTextView;
- (void)setMarqueeTextView:(id)arg1;
- (void).cxx_destruct;
@end
