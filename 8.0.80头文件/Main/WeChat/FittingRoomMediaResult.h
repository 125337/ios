@interface FittingRoomMediaResult : NSObject
{
    unsigned long long _status; // +0x8
    NSString * _localPath; // +0x10
    NSString * _mimeType; // +0x18
    NSNumber * _width; // +0x20
    NSNumber * _height; // +0x28
    NSNumber * _orientation; // +0x30
    NSNumber * _fileSize; // +0x38
    FittingRoomMediaErrorCodeBox * _errorCode; // +0x40
}
+ (id)makeWithStatus:(unsigned long long)arg1 localPath:(id)arg2 mimeType:(id)arg3 width:(id)arg4 height:(id)arg5 orientation:(id)arg6 fileSize:(id)arg7 errorCode:(id)arg8;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)orientation;
- (void)setOrientation:(id)arg1;
- (id)fileSize;
- (void)setFileSize:(id)arg1;
- (id)errorCode;
- (void)setErrorCode:(id)arg1;
- (void).cxx_destruct;
@end
