@interface WXGDotDotDotLabel : UILabel
{
    MMTimer * m_animationTimer; // +0x8
    unsigned long long m_imageIndex; // +0x10
    NSArray * _wordList; // +0x18
    double _duration; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)animateforDuration:(double)arg1;
- (void)_startAnimations;
- (id)wordList;
- (void)setWordList:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void).cxx_destruct;
@end

