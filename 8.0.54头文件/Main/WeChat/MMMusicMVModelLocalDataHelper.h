@interface MMMusicMVModelLocalDataHelper : NSObject
+ (void)fillSelfPublishDefaultValue:(id)arg1;
+ (void)setupInitialFieldsForLocalMVModel:(id)arg1;
+ (id)loadLocalPendingMVModels;
+ (id)loadLocalDraftMVModels;
+ (void)syncLocalPendingModels:(id)arg1;
+ (void)syncLocalDraft:(id)arg1;
+ (id)getPostMMKV;
+ (id)getDraftMMKV;
+ (id)genDataItemForPreviewingWithLocalVideo:(id)arg1;
+ (id)genDataItemForPreviewingWithLocalPics:(id)arg1;
+ (id)genPathToLocalCoverImage;
+ (id)videoPathWithLocalVideo:(id)arg1 fileName:(id)arg2;
+ (id)pathToTrimmedLocalVideo:(id)arg1;
+ (id)pathToCompressedLocalVideo:(id)arg1;
+ (id)pathToLocalCoverImageWithFilename:(id)arg1;
+ (id)saveCoverImageToLocal:(id)arg1;
+ (id)compressedImageData:(id)arg1;
+ (id)reuseFinderCompressImageDataLogic:(id)arg1;
+ (id)mvImageResize:(id)arg1 andResizeConstraint:(CGSize)arg2;
+ (id)copyCoverImageToLocalWithPath:(id)arg1;
+ (void)deleteLocalCoverImageWithFilename:(id)arg1;
+ (void)trimAndSaveLocalVideo:(id)arg1 completion:(id /* block */)arg2;
+ (void)deleteLocalTrimmedVideo:(id)arg1;
+ (void)deleteAllLocalTrimmedVideo:(id)arg1;
@end

