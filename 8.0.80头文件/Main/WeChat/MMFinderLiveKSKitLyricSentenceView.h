@interface MMFinderLiveKSKitLyricSentenceView : UIView <CALayerDelegate>
{
    int _startTime; // +0x8
    int _endTime; // +0xc
    int _position; // +0x10
    NSArray * _lyricWords; // +0x18
    MMFinderLiveKSKitLyricStyle * _lyricStyle; // +0x20
    MMFinderLiveKSKitLyricSentenceTextView * _unSingSentenceView; // +0x28
    MMFinderLiveKSKitLyricSentenceTextView * _singSentenceView; // +0x30
    UIView * _singSentenceMaskContentView; // +0x38
    CALayer * _maskLayer; // +0x40
    double _singStartInset; // +0x48
}
+ (id)lyricWordFont;
- (id)initWithLyricWords:(id)arg1 lyricStyle:(id)arg2;
- (void)layoutSubviews;
- (void)onPositionChanged:(int)arg1;
- (void)updateLyricStyle:(id)arg1;
- (void)createSentenceViews;
- (void)layoutSentences;
- (void)updateSelfSize:(CGSize)arg1;
- (void)updateSentenceViewsOrigin;
- (id)createSentenceMaskContentView:(CGSize)arg1;
- (void)updateSentenceSingProgress:(int)arg1;
- (double)getSingStartInset:(int)arg1;
- (void)updateSingStartInset:(double)arg1;
- (void)drawLayer:(id)arg1 inContext:(CGContext *)arg2;
- (void)drawInContext:(CGContext *)arg1 rect:(CGRect)arg2;
- (id)lyricWords;
- (void)setLyricWords:(id)arg1;
- (id)lyricStyle;
- (void)setLyricStyle:(id)arg1;
- (id)unSingSentenceView;
- (void)setUnSingSentenceView:(id)arg1;
- (id)singSentenceView;
- (void)setSingSentenceView:(id)arg1;
- (id)singSentenceMaskContentView;
- (void)setSingSentenceMaskContentView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (int)startTime;
- (void)setStartTime:(int)arg1;
- (int)endTime;
- (void)setEndTime:(int)arg1;
- (double)singStartInset;
- (void)setSingStartInset:(double)arg1;
- (int)position;
- (void)setPosition:(int)arg1;
- (void).cxx_destruct;
@end
