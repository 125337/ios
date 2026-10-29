@interface WAUpoadFileFormMultiPart : NSObject
{
    NSString * _header; // +0x8
    NSString * _bodyFilePath; // +0x10
    NSString * _bodyString; // +0x18
    NSString * _footer; // +0x20
    BOOL _isFirstPart; // +0x28
    BOOL _isLastPart; // +0x29
}
+ (id)arrayFormBodyObjectWithFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 formFields:(id)arg4 boundary:(id)arg5 contentLength:(unsigned long long *)arg6;
+ (id)arrayFormDataWithFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 formFields:(id)arg4 boundary:(id)arg5 contentLength:(unsigned long long *)arg6;
+ (id)arrayMultiPartWithFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 formFields:(id)arg4 boundary:(id)arg5;
+ (id)arrayFormBodyObjectWithMultiPart:(id)arg1 contentLength:(unsigned long long *)arg2;
+ (id)arrayFormDatatWithMultiPart:(id)arg1 contentLength:(unsigned long long *)arg2;
+ (id)boundary;
+ (id)firstPartBoundary:(id)arg1;
+ (id)middlePartBoundary:(id)arg1;
+ (id)finalBoundary:(id)arg1;
- (id)header;
- (id)bodyFilePath;
- (id)bodyString;
- (id)footer;
- (void)markFirstPart;
- (void)markLastPart;
- (void)setFieldName:(id)arg1 fieldValue:(id)arg2 boundary:(id)arg3;
- (void)setFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 boundary:(id)arg4;
- (void).cxx_destruct;
@end
