@interface FlutterSpellCheckResult : NSObject
{
    NSArray * _suggestions; // +0x8
    _NSRange _misspelledRange; // +0x10
}
- (id)initWithMisspelledRange:(_NSRange)arg1 suggestions:(id)arg2;
- (id)toDictionary;
- (id)suggestions;
- (_NSRange)misspelledRange;
- (void).cxx_destruct;
@end
