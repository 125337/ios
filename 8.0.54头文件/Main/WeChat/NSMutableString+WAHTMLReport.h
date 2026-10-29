@interface NSMutableString (WAHTMLReport)
- (long long)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2;
- (long long)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2 range:(_NSRange)arg3;
- (long long)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(_NSRange)arg4 error:(id *)arg5;
- (long long)replaceOccurrencesOfRegex:(id)arg1 usingBlock:(id /* block */)arg2;
- (long long)replaceOccurrencesOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(_NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(id /* block */)arg6;
- (void)safeAppendString:(id)arg1;
- (void)appendHTMLReportString:(id)arg1;
- (void)appendHTMLReportInteger:(long long)arg1;
- (void)setIsHasAppend:(BOOL)arg1;
- (BOOL)isHasAppend;
@end

