@interface TPRichMediaMappingUtils : NSObject
+ (id)richMediaInfoWithNativeRichMediaInfo:(const void *)arg1;
+ (id)richMediaInfoArrayWithNativeInfoArray:(const void *)arg1;
+ (int)nativeActOnOptionWithActOnOption:(long long)arg1;
+ (TPPlayerRichMediaExtraRequestInfo)nativeRichMediaExtraRequestInfoWithExtraRequestInfo:(id)arg1;
+ (id)richMediaContentWithNativeContent:(const void *)arg1;
+ (id)richMediaResponseWithNativeResponse:(const void *)arg1;
+ (void)convertNumberArray:(id)arg1 toIntVector:(void *)arg2;
+ (vector<long long, std::allocator<long long>>)int64VectorWithNumberArray:(id)arg1;
+ (TPPlayerRichMediaTimeRange)nativeRichMediaTimeRangeWithTimeRange:(id)arg1;
+ (vector<TPPlayerRichMediaTimeRange, std::allocator<TPPlayerRichMediaTimeRange>>)nativeRichMediaTimeRangeArrayWithTimeRangeArray:(id)arg1;
@end
