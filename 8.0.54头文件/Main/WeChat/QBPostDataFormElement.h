@interface QBPostDataFormElement : NSObject <QBPostDataProtocol>
{
    int _dataPostType; // +0x8
    NSString * _postBoundaryString; // +0x10
    BOOL _dataReady; // +0x18
    long long _randomString; // +0x20
    NSMutableArray * _elementArray; // +0x28
    unsigned long long _streamRead; // +0x30
    unsigned long long _suffixRead; // +0x38
    unsigned long long _fileRead; // +0x40
    NSMutableArray * _streamFiles; // +0x48
    NSData * _streamData; // +0x50
    BOOL _dataSorted; // +0x58
    NSInputStream * _fileInput; // +0x60
    unsigned long long _currentFileIndex; // +0x68
    unsigned char[32768] _buffer; // +0x70
}
- (id)initWithElements:(id)arg1;
- (void)addElement:(id)arg1;
- (id)elements;
- (id)contentBoundaryString;
- (id)contentData;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (void)resetElements:(id)arg1;
- (id)archiveMultipartFormData;
- (id)archiveURLEncodedData;
- (id)finalPostData;
- (BOOL)shouldUseStreamToSendData;
- (id)streamFiles;
- (void)sortContentElement;
- (id)createInputStreamForPost;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)URLEncodedDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)multipartFormDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)getStreamData;
- (BOOL)readFilesStreamFinished:(id)arg1;
- (unsigned long long)contentBoundayStringLength;
- (unsigned long long)contentInfoStringLength:(id)arg1;
- (unsigned long long)dataSize;
- (void).cxx_destruct;
- (int)dataPostType;
- (void)setDataPostType:(int)arg1;
- (BOOL)dataReady;
- (void)setDataReady:(BOOL)arg1;
- (long long)randomString;
- (void)setRandomString:(long long)arg1;
@end

