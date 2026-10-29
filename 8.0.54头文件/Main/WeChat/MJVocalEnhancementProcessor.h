@interface MJVocalEnhancementProcessor : NSObject
+ (id)processWithFilePath:(id)arg1 outputPath:(id)arg2;
+ (id)processWithFilePath:(id)arg1 outputPath:(id)arg2 vocalEnhancementParams:(id)arg3;
+ (id)calcVocalAdjustmentGainsWithCache:(id)arg1 keys:(id)arg2;
+ (id)calcVocalAdjustmentGainsInternalWithCachedParams:(id)arg1;
@end

