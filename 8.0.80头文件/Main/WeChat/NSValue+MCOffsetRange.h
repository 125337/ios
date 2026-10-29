@interface NSValue (MCOffsetRange)
+ (id)valueWithFloatRange:(struct)arg1;
+ (id)valueWithLzRange:(_LzRange)arg1;
- (struct)floatRangeValue;
- (_LzRange)lzrangeValue;
- (long long)lzRangeCompare:(id)arg1;
- (MCOffsetRange)MCOffsetRangeValue;
@end
