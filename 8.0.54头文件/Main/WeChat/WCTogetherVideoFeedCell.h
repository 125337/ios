@interface WCTogetherVideoFeedCell : WCTogetherBaseFeedCell <WCSNSNodeVideoViewDelegate>
{
    WCSNSNodeVideoView * _videoView; // +0x8
}
+ (id)cellIdentifier;
+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)loadItemContentView;
- (void)layoutItemContentView;
- (void)willMoveToSuperview:(id)arg1;
- (void)resetPlayingWithViewItem:(id)arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (void)onClickWCSight:(id)arg1;
- (void)onWillFullPlay:(BOOL *)arg1 sightView:(id)arg2;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (void).cxx_destruct;
@end

