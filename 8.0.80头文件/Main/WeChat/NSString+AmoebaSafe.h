@interface NSString (AmoebaSafe)
+ (id)amb_safeStringWithString:(id)arg1;
- (id)amb_safeStringByReplacingCharactersInRange:(_NSRange)arg1 withString:(id)arg2;
- (id)amb_nonEmptyOrNil;
@end
