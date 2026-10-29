@interface MMFinderLiveGlobalImageResource : NSObject
{
    unsigned int _buttonType; // +0x8
    NSString * _filePath; // +0x10
    NSString * _originalUrl; // +0x18
    NSString * _fileExtension; // +0x20
}
- (unsigned int)buttonType;
- (void)setButtonType:(unsigned int)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)originalUrl;
- (void)setOriginalUrl:(id)arg1;
- (id)fileExtension;
- (void)setFileExtension:(id)arg1;
- (void).cxx_destruct;
@end
