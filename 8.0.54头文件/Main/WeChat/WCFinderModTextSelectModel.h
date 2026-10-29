@interface WCFinderModTextSelectModel : NSObject
{
    unsigned long long _sourceType; // +0x8
    NSString * _selectText; // +0x10
    _NSRange _selectRange; // +0x18
}
- (id)initWithSourceType:(unsigned long long)arg1 selectRange:(_NSRange)arg2 selectText:(id)arg3;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (_NSRange)selectRange;
- (void)setSelectRange:(_NSRange)arg1;
- (id)selectText;
- (void)setSelectText:(id)arg1;
- (void).cxx_destruct;
@end

