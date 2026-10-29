@interface WCFinderTextCarouselView : UIView
{
    UIColor * _textColor; // +0x8
    WCFinderCustomImageRichTextView * _textView; // +0x10
    WCFinderCustomImageRichTextView * _textAnimationView; // +0x18
    MMTimer * _carouselTimer; // +0x20
    NSArray * _textArray; // +0x28
    long long _index; // +0x30
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setTextColor:(id)arg1;
- (void)updateWithTextArray:(id)arg1;
- (id)displayText;
- (void)sizeToFit;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)startCarousel;
- (void)stopCarousel;
- (void)layoutUI;
- (void)scrollToNext;
- (id)genTextView;
- (id)textView;
- (id)textAnimationView;
- (id)textColor;
- (void)setTextView:(id)arg1;
- (void)setTextAnimationView:(id)arg1;
- (id)carouselTimer;
- (void)setCarouselTimer:(id)arg1;
- (id)textArray;
- (void)setTextArray:(id)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (void).cxx_destruct;
@end

