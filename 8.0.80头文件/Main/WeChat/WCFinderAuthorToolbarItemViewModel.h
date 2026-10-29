@interface WCFinderAuthorToolbarItemViewModel : NSObject
{
    UIImage * _iconImage; // +0x8
    NSString * _iconAccessibilityLabel; // +0x10
    unsigned long long _count; // +0x18
    UIColor * _countTipsColor; // +0x20
}
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)iconAccessibilityLabel;
- (void)setIconAccessibilityLabel:(id)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (id)countTipsColor;
- (void)setCountTipsColor:(id)arg1;
- (void).cxx_destruct;
@end
