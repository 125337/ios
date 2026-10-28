@interface QBCommonFileItem : NSObject
{
    NSString * _moduleName; // +0x8
    NSString * _fileName; // +0x10
    NSString * _fileUrl; // +0x18
    NSString * _fileContentMd5; // +0x20
    NSString * _fileContentSignature; // +0x28
    NSString * _fileEncryptAlgorithm; // +0x30
}
+ (id)itemWupObj:(id)arg1 moduleName:(id)arg2;
+ (id)itemWithInfo:(id)arg1;
- (void).cxx_destruct;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)fileUrl;
- (void)setFileUrl:(id)arg1;
- (id)fileContentMd5;
- (void)setFileContentMd5:(id)arg1;
- (id)fileContentSignature;
- (void)setFileContentSignature:(id)arg1;
- (id)fileEncryptAlgorithm;
- (void)setFileEncryptAlgorithm:(id)arg1;
@end
