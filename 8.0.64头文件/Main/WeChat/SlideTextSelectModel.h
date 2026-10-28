@interface SlideTextSelectModel : NSObject
{
    NSString * _selectedText; // +0x8
    _NSRange _selectedRange; // +0x10
}
- (id)initWithContent:(id)arg1 selectedRange:(_NSRange)arg2;
- (id)selectedText;
- (void)setSelectedText:(id)arg1;
- (_NSRange)selectedRange;
- (void)setSelectedRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end
