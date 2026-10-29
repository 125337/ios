@interface WCFinderDataTool : NSObject
+ (id)arrayToJsonString:(id)arg1;
+ (id)dictionaryWithJsonString:(id)arg1;
+ (id)dictionaryToJson:(id)arg1;
+ (id)clearNotSameDayTimeStamp:(id)arg1;
+ (BOOL)isSameDayTimeStamp1:(long long)arg1 timeStamp2:(long long)arg2;
+ (id)convertJsonStringToData:(id)arg1;
+ (BOOL)isSameWeekByTimeStamp1:(long long)arg1 timeStamp2:(long long)arg2;
+ (void)mockCatonAction;
+ (id)getTargetIvarInObject:(id)arg1 className:(Class)arg2;
+ (CLLocationCoordinate2D)genAssetCoordinateFromAssetId:(id)arg1;
+ (BOOL)assetHasGPSInfo:(id)arg1;
+ (CLLocationCoordinate2D)genAssetCoordinateFromAssets:(id)arg1;
+ (void)fetchPHAssetForVideo:(id)arg1 completion:(id /* block */)arg2;
+ (id)removeTimestampsBeforeNDays:(id)arg1 days:(long long)arg2;
+ (id)getTimestampsInNDays:(id)arg1 days:(long long)arg2;
+ (id)base64EncodeString:(id)arg1;
+ (long long)countOfTimestampsGreaterThan:(id)arg1 inArray:(id)arg2;
+ (BOOL)isValidLocationLongitude:(double)arg1 latitude:(double)arg2;
+ (BOOL)isInvalidSize:(CGSize)arg1;
+ (BOOL)compareProtoObject:(id)arg1 withObject:(id)arg2;
+ (id)colorFromRGBAString:(id)arg1;
+ (BOOL)isFromCarouselScene:(unsigned long long)arg1;
+ (void)mergePublisherPostInfo:(id)arg1 toPostSession:(id)arg2;
+ (BOOL)isInvalidWidHeightCGRect:(CGRect)arg1;
+ (id)mergeSvrHeaderParamsBy:(id)arg1 separateChar:(id)arg2 cdnHeaderParamType:(unsigned long long)arg3;
+ (BOOL)isHttpUrl:(id)arg1;
+ (unsigned long long)unicodeLengthOfString:(id)arg1;
+ (BOOL)areRangesOverlapping:(_NSRange)arg1 range2:(_NSRange)arg2;
@end

