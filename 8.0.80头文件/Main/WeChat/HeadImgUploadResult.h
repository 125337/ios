@interface HeadImgUploadResult : NSObject
{
    BOOL _success; // +0x8
    NSString * _fileId; // +0x10
    NSString * _aesKey; // +0x18
    NSString * _errorMessage; // +0x20
}
+ (id)makeWithSuccess:(BOOL)arg1 fileId:(id)arg2 aesKey:(id)arg3 errorMessage:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (void).cxx_destruct;
@end
