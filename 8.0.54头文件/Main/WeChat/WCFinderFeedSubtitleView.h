@interface WCFinderFeedSubtitleView : UIView <WCFinderFeedSubtitleExt>
{
    int _commentScene; // +0x8
    WCFinderFeedSubtitleViewModel * _viewModel; // +0x10
    FinderSubtitleSentence * _currentSentence; // +0x18
    NSMutableArray * _displaySentenceArray; // +0x20
    unsigned long long _displayIndex; // +0x28
    double _maxSubtitleWidth; // +0x30
    NSMutableArray * _subtitleLabelArray; // +0x38
    unsigned long long _currentPosMs; // +0x40
}
- (id)initWithContentVM:(id)arg1;
- (void)dealloc;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)setMaxSubtitleWidth:(double)arg1;
- (void)spliteSentenceIfNeeded;
- (id)wordPosArrayInText:(id)arg1 wordArray:(id)arg2;
- (id)splitSentence:(id)arg1 font:(id)arg2;
- (void)addRemainWordWithArray:(id)arg1 index:(unsigned long long)arg2 language:(int)arg3;
- (void)displayNextSentence;
- (void)updateLayout;
- (id)genSubtitleLabel:(id)arg1;
- (id)subtitleLabelArray;
- (id)displaySentenceArray;
- (void)onFinderFeedSubtitleShowLanguageChanged:(id)arg1;
- (unsigned long long)displayScentenceIndexAtPosMs:(unsigned long long)arg1;
- (void)onWechatDisplayLanguageChanged;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)currentSentence;
- (void)setCurrentSentence:(id)arg1;
- (void)setDisplaySentenceArray:(id)arg1;
- (unsigned long long)displayIndex;
- (void)setDisplayIndex:(unsigned long long)arg1;
- (double)maxSubtitleWidth;
- (void)setSubtitleLabelArray:(id)arg1;
- (unsigned long long)currentPosMs;
- (void)setCurrentPosMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

