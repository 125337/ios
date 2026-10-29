@interface MMFinderLiveKSKitLyricSentenceView : UIView <CALayerDelegate>
{
    int _startTime; // +0x8
    int _endTime; // +0xc
    NSArray * _lyricWords; // +0x10
    MMFinderLiveKSKitLyricSentenceTextView * _unSingSentenceView; // +0x18
    MMFinderLiveKSKitLyricSentenceTextView * _singSentenceView; // +0x20
    UIView * _singSentenceMaskContentView; // +0x28
    double _singLeftInset; // +0x30
}
+ (id)lyricWordFont;
- (id)initWithLyricWords:(id)arg1;
- (void)layoutSubviews;
- (void)onPositionChanged:(int)arg1;
- (void)createSentenceViews;
- (void)updateSelfSize:(CGSize)arg1;
- (void)updateSentenceViewsOrigin;
- (id)createSentenceMaskContentView:(CGSize)arg1;
- (void)updateSentenceSingProgress:(int)arg1;
- (double)getSingLeftInset:(int)arg1;
- (void)updateSingLeftInset:(double)arg1;
- (void)drawLayer:(id)arg1 inContext:(CGContext *)arg2;
- (void)drawInContext:(CGContext *)arg1 rect:(CGRect)arg2;
- (id)lyricWords;
- (void)setLyricWords:(id)arg1;
- (id)unSingSentenceView;
- (void)setUnSingSentenceView:(id)arg1;
- (id)singSentenceView;
- (void)setSingSentenceView:(id)arg1;
- (id)singSentenceMaskContentView;
- (void)setSingSentenceMaskContentView:(id)arg1;
- (int)startTime;
- (void)setStartTime:(int)arg1;
- (int)endTime;
- (void)setEndTime:(int)arg1;
- (double)singLeftInset;
- (void)setSingLeftInset:(double)arg1;
- (void).cxx_destruct;
@end

