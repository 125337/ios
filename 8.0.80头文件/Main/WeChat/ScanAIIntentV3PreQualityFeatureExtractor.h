@interface ScanAIIntentV3PreQualityFeatureExtractor : NSObject
+ (Mat)rgbMatForImage:(id)arg1;
+ (id)metricsForRGBMat:(const Mat *)arg1 allowUpscale:(BOOL)arg2;
+ (Mat)resizedLongEdgeForSource:(const Mat *)arg1 target:(int)arg2 allowUpscale:(BOOL)arg3;
+ (double)pillowLanczosWeightForDistance:(double)arg1;
+ (int)pillowLanczosCoefficientsForInputSize:(int)arg1 outputSize:(int)arg2 bounds:(void *)arg3 coefficients:(void *)arg4;
+ (unsigned char)pillowClipped8BitValueForAccumulator:(long long)arg1;
+ (Mat)pillowLanczosHorizontalRGBMat:(const Mat *)arg1 outputWidth:(int)arg2;
+ (Mat)pillowLanczosVerticalRGBMat:(const Mat *)arg1 outputHeight:(int)arg2;
+ (Mat)pillowLanczosResizedRGBMat:(const Mat *)arg1 width:(int)arg2 height:(int)arg3;
+ (Mat)pillowGrayMatForRGBMat:(const Mat *)arg1;
+ (double)laplacianVarianceForGrayMat:(const Mat *)arg1;
+ (double)edgeDensityForGrayMat:(const Mat *)arg1;
+ (double)entropyForGrayMat:(const Mat *)arg1;
+ (double)rgbStandardDeviationForRGBMat:(const Mat *)arg1;
+ (double)dynamicRangeForGrayMat:(const Mat *)arg1;
+ (void)populateHistogram:(unsigned long long *)arg1 fromGrayMat:(const Mat *)arg2;
+ (long long)percentileBinForHistogram:(const unsigned long long *)arg1 total:(unsigned long long)arg2 quantile:(double)arg3;
+ (double)roundedSixDecimals:(double)arg1;
@end
