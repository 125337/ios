@interface RTEContentStorage : MMObject <NSCopying>
{
    NSMutableString * _textContent; // +0x8
    NSMutableArray * _attributes; // +0x10
}
- (id)initWithText:(id)arg1 attributes:(id)arg2;
- (id)description;
- (unsigned long long)length;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)checkRangeValid:(_NSRange)arg1;
- (void)updateCacheToIndex:(unsigned long long)arg1;
- (_NSRange)rangeOfAttribute:(id)arg1;
- (id)getAttributeListOfType:(unsigned int)arg1;
- (id)getAttributeOfType:(unsigned int)arg1 atLocation:(unsigned long long)arg2;
- (BOOL)findAttributeInList:(unsigned int)arg1 inRange:(_NSRange)arg2 withMatcher:(id /* block */)arg3;
- (void)enumerateAttribute:(unsigned int)arg1 inRange:(_NSRange)arg2 isBackward:(BOOL)arg3 usingBlock:(id /* block */)arg4;
- (unsigned long long)minimumIdenticalAttributeIntervalLengthSinceIndex:(unsigned long long)arg1;
- (void)deleteCententAtRange:(_NSRange)arg1;
- (void)setAttribute:(id)arg1 atRange:(_NSRange)arg2;
- (id)copyContentStorageAtRange:(_NSRange)arg1;
- (void)insertContent:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendContentAndClear:(id)arg1;
- (void)insertText:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)buildAttributedStringForRange:(_NSRange)arg1;
- (BOOL)isAttribute:(id)arg1 extendableAtIndex:(unsigned long long)arg2 isPreNode:(BOOL)arg3;
- (id)textContent;
- (id)attributes;
- (void).cxx_destruct;
@end
