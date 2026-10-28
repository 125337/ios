@interface WCFinderModifyDiffModel : NSObject
{
    NSString * _aString; // +0x8
    NSString * _bString; // +0x10
    _NSRange _aRange; // +0x18
    _NSRange _bRange; // +0x28
}
- (id)description;
- (_NSRange)aRange;
- (void)setARange:(_NSRange)arg1;
- (id)aString;
- (void)setAString:(id)arg1;
- (_NSRange)bRange;
- (void)setBRange:(_NSRange)arg1;
- (id)bString;
- (void)setBString:(id)arg1;
- (void).cxx_destruct;
@end
