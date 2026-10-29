@interface WCFinderStarRatingItem : NSObject
{
    unsigned long long _score; // +0x8
    NSString * _wording; // +0x10
    NSString * _accessibilityLabel; // +0x18
}
- (unsigned long long)score;
- (void)setScore:(unsigned long long)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (void).cxx_destruct;
@end
