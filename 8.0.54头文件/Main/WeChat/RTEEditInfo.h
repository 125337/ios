@interface RTEEditInfo : NSObject
{
    NSString * _editString; // +0x8
    _NSRange _editeRange; // +0x10
}
- (_NSRange)editeRange;
- (void)setEditeRange:(_NSRange)arg1;
- (id)editString;
- (void)setEditString:(id)arg1;
- (void).cxx_destruct;
@end

