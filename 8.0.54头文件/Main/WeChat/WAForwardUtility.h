@interface WAForwardUtility : NSObject
+ (id)ConvertWeAppVideo2MsgWrapWithVideoPath:(id)arg1 thumbImage:(id)arg2;
+ (id)ConvertWeAppVideo2MsgWrapWithVideoInfo:(id)arg1;
+ (id)ConvertWeAppImage2MsgWrapWithImage:(id)arg1 retErrMsg:(id *)arg2;
+ (id)ConvertWeAppFile2MsgWrapWithFilePath:(id)arg1 fileName:(id)arg2;
+ (id)ConvertWeAppFile2MsgWrapWithFileData:(id)arg1 fileName:(id)arg2 fileExt:(id)arg3;
@end

