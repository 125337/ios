@interface FittingRoomImageCompressResult : NSObject
{
    NSString * _outputPath; // +0x8
    NSString * _outputMimeType; // +0x10
    NSNumber * _outputWidth; // +0x18
    NSNumber * _outputHeight; // +0x20
    NSNumber * _outputBytes; // +0x28
    NSNumber * _attempts; // +0x30
    NSNumber * _quality; // +0x38
    FittingRoomCompressErrorCodeBox * _errorCode; // +0x40
}
+ (id)makeWithOutputPath:(id)arg1 outputMimeType:(id)arg2 outputWidth:(id)arg3 outputHeight:(id)arg4 outputBytes:(id)arg5 attempts:(id)arg6 quality:(id)arg7 errorCode:(id)arg8;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)outputPath;
- (void)setOutputPath:(id)arg1;
- (id)outputMimeType;
- (void)setOutputMimeType:(id)arg1;
- (id)outputWidth;
- (void)setOutputWidth:(id)arg1;
- (id)outputHeight;
- (void)setOutputHeight:(id)arg1;
- (id)outputBytes;
- (void)setOutputBytes:(id)arg1;
- (id)attempts;
- (void)setAttempts:(id)arg1;
- (id)quality;
- (void)setQuality:(id)arg1;
- (id)errorCode;
- (void)setErrorCode:(id)arg1;
- (void).cxx_destruct;
@end
