@interface WXGUploadFileInformation : NSObject
{
    NSString * _rtxName; // +0x8
    NSString * _filePath; // +0x10
    NSString * _fileDescription; // +0x18
}
+ (id)uploadFileInformationWithXMl:(XmlReaderNode_t *)arg1;
- (id)rtxName;
- (void)setRtxName:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileDescription;
- (void)setFileDescription:(id)arg1;
- (void).cxx_destruct;
@end
