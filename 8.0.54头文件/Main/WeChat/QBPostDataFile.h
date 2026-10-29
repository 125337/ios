@interface QBPostDataFile : NSObject <QBPostDataProtocol>
{
    NSString * _contentBoundaryString; // +0x8
    NSString * _contentInfoString; // +0x10
    BOOL _dataReady; // +0x18
    long long _randomString; // +0x20
    unsigned long long _streamRead; // +0x28
    NSInputStream * _fileInput; // +0x30
    unsigned long long _totalLength; // +0x38
    unsigned char[32768] _buffer; // +0x40
    int _dataPostType; // +0x8040
    NSString * _filePath; // +0x8048
    NSString * _name; // +0x8050
    NSString * _fileName; // +0x8058
    NSString * _fileType; // +0x8060
    unsigned long long _fileSize; // +0x8068
    double _lastModified; // +0x8070
}
- (id)initWithString:(id)arg1;
- (id)initWithName:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 fileSize:(unsigned long long)arg4 lastModifiedDate:(double)arg5;
- (void)setName:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 fileSize:(unsigned long long)arg4 lastModifiedDate:(double)arg5;
- (void)setDataPostType:(int)arg1;
- (int)dataPostType;
- (id)contentBoundaryString;
- (id)contentInfoString;
- (id)contentPath;
- (id)filePath;
- (id)contentData;
- (id)finalPostData;
- (unsigned long long)contentBoundayStringLength;
- (unsigned long long)contentInfoStringLength;
- (unsigned long long)totalLength;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (BOOL)shouldUseStreamToSendData;
- (unsigned long long)dataSize;
- (id)createInputStreamForPost;
- (id)description;
- (void).cxx_destruct;
- (BOOL)dataReady;
- (void)setDataReady:(BOOL)arg1;
- (long long)randomString;
- (void)setRandomString:(long long)arg1;
- (id)name;
- (id)fileName;
- (id)fileType;
- (unsigned long long)fileSize;
- (double)lastModified;
@end

