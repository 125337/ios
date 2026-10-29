@interface MMFinderLiveTimeDisplayResult : NSObject
{
    long long _displayFormat; // +0x8
    NSString * _displayText; // +0x10
    NSString * _accessibilityText; // +0x18
}
- (long long)displayFormat;
- (void)setDisplayFormat:(long long)arg1;
- (id)displayText;
- (void)setDisplayText:(id)arg1;
- (id)accessibilityText;
- (void)setAccessibilityText:(id)arg1;
- (void).cxx_destruct;
@end

