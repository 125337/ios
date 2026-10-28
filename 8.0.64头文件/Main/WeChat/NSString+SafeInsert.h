@interface NSString (SafeInsert)
+ (id)safeStringWithString:(id)arg1;
- (id)safeStringByReplacingCharactersInRange:(_NSRange)arg1 withString:(id)arg2;
- (id)nonEmptyOrNil;
@end
