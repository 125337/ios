@interface MMCommonCgiUploadInfo : NSObject
{
    unsigned int _sectionIndex; // +0x8
    unsigned int _sectionOffset; // +0xc
    unsigned int _sectionLength; // +0x10
    long long _scene; // +0x18
    long long _fileType; // +0x20
    NSString * _filePath; // +0x28
}
- (id)description;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)fileType;
- (void)setFileType:(long long)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned int)sectionIndex;
- (void)setSectionIndex:(unsigned int)arg1;
- (unsigned int)sectionOffset;
- (void)setSectionOffset:(unsigned int)arg1;
- (unsigned int)sectionLength;
- (void)setSectionLength:(unsigned int)arg1;
- (void).cxx_destruct;
@end
