@interface MMMusicMVModelLocalDataHelper : NSObject
+ (id)compressedImageData:(id)arg1;
+ (id)reuseFinderCompressImageDataLogic:(id)arg1;
+ (id)mvImageResize:(id)arg1 andResizeConstraint:(CGSize)arg2;
+ (id)pathToLocalCoverImageWithFilename:(id)arg1;
+ (id)pathToTrimmedLocalVideo:(id)arg1;
+ (id)videoPathWithLocalVideo:(id)arg1 fileName:(id)arg2;
+ (void)deleteLocalCoverImageWithFilename:(id)arg1;
+ (void)trimAndSaveLocalVideo:(id)arg1 completion:(id /* block */)arg2;
+ (void)fillSelfPublishDefaultValue:(id)arg1;
+ (void)setupInitialFieldsForLocalMVModel:(id)arg1;
+ (id)genDataItemForPreviewingWithLocalVideo:(id)arg1;
@end
