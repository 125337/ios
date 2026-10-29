@interface MMAssetPickerBrowserStateInfo : NSObject
{
    BOOL _selectable; // +0x8
    BOOL _videoCropable; // +0x9
    BOOL _isiCloudError; // +0xa
    unsigned long long _imageSize; // +0x10
    NSString * _errorInfo; // +0x18
    unsigned long long _checkResult; // +0x20
}
+ (void)p_gifIsSend:(BOOL)arg1 maxSize:(unsigned int)arg2 datalenTooBigWording:(id *)arg3 sizeTooBigWording:(id *)arg4 dataInvalidWording:(id *)arg5 maxDataLength:(double *)arg6;
+ (id)gifSizeExceedStateInfoWithFileSize:(unsigned long long)arg1 isSend:(BOOL)arg2 maxSize:(unsigned int)arg3;
+ (id)gifStateInfoWithImageData:(id)arg1 image:(id)arg2 isSend:(BOOL)arg3 needCheckValid:(BOOL)arg4 maxSize:(unsigned int)arg5;
+ (id)videoStateInfoWithAvAsset:(id)arg1 videoPath:(id)arg2 pickerScene:(int)arg3 isSlowmotion:(BOOL)arg4;
+ (id)videoStateInfoWithDuration:(double)arg1 pickerScene:(int)arg2;
+ (id)p_videoStateInfoWithCheckResult:(unsigned long long)arg1 scene:(unsigned long long)arg2 pickerScene:(int)arg3;
+ (void)reportSelectImageFailedWithFileSize:(unsigned int)arg1;
- (BOOL)selectable;
- (void)setSelectable:(BOOL)arg1;
- (BOOL)videoCropable;
- (void)setVideoCropable:(BOOL)arg1;
- (unsigned long long)imageSize;
- (void)setImageSize:(unsigned long long)arg1;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
- (BOOL)isiCloudError;
- (void)setIsiCloudError:(BOOL)arg1;
- (unsigned long long)checkResult;
- (void)setCheckResult:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
