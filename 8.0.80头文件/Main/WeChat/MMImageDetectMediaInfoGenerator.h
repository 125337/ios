@interface MMImageDetectMediaInfoGenerator : NSObject
+ (id)syncGenerateDetectMediaInfoWithSnsMediaItem:(id)arg1 businessType:(unsigned int)arg2;
+ (void)asyncGenerateDetectMediaInfoWithChatMsgWrap:(id)arg1 businessType:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
+ (void)asyncGenerateDetectMediaInfoWithImageFilePath:(id)arg1 businessType:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
+ (void)fillDetectMediaInfo:(id)arg1 imageFilePath:(id)arg2 businessType:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
+ (id)generatClientMsgID;
+ (id)generateTempResizedImagePath:(id)arg1;
+ (id)generateTempCompressImagePath:(id)arg1;
+ (BOOL)hasSufficientMemoryWithImageWidth:(double)arg1 imageHeight:(double)arg2;
+ (id)generateResizeConfig:(unsigned int)arg1;
+ (unsigned int)ratioLimitWithBusinessType:(unsigned int)arg1;
+ (BOOL)isImageLengthOKWithFilePath:(id)arg1;
+ (BOOL)isImageAreaOKWithFilePath:(id)arg1 businessType:(unsigned int)arg2;
+ (unsigned int)allImagePreferSize;
+ (float)allImageCompressionQuality;
+ (unsigned int)searchImageRatioLimit;
+ (unsigned int)ocrImageRatioLimit;
@end
