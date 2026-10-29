@interface EcsFittingRoomMediaFileUtil : NSObject
+ (id)newTemporaryFileURLWithExtension:(id)arg1;
+ (id)copyFileToTemporaryURL:(id)arg1;
+ (id)writeImageDataToTemporaryURL:(id)arg1 extension:(id)arg2;
+ (id)downsampledImageAtPath:(id)arg1 maxPixelSize:(double)arg2;
+ (double)shortEdgeInPixelsForImage:(id)arg1;
+ (double)aspectRatioForSize:(CGSize)arg1;
+ (id)mediaResultForFileURL:(id)arg1 minimumImageEdge:(long long)arg2;
+ (id)resultWithStatus:(unsigned long long)arg1 errorCode:(unsigned long long)arg2;
@end
