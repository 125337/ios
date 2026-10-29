@interface MMFinderLiveSubTitleComponentModel : NSObject
{
    NSString * _content; // +0x8
    unsigned long long _componentTag; // +0x10
    _NSRange _componentRange; // +0x18
    _NSRange _displayedRange; // +0x28
}
- (id)getDisplayStr;
- (id)content;
- (void)setContent:(id)arg1;
- (_NSRange)componentRange;
- (void)setComponentRange:(_NSRange)arg1;
- (_NSRange)displayedRange;
- (void)setDisplayedRange:(_NSRange)arg1;
- (unsigned long long)componentTag;
- (void)setComponentTag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

