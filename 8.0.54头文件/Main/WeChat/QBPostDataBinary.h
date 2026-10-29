@interface QBPostDataBinary : NSObject <QBPostDataProtocol>
{
    int _type; // +0x8
    BOOL _dataReady; // +0xc
    long long _randomString; // +0x10
    NSString * _contentBoundaryString; // +0x18
    NSString * _contentInfoString; // +0x20
    unsigned long long _streamRead; // +0x28
    NSData * _streamData; // +0x30
    int _dataPostType; // +0x38
    NSData * _data; // +0x40
    NSString * _name; // +0x48
    NSString * _fileName; // +0x50
    NSString * _contentType; // +0x58
}
- (id)initWithString:(id)arg1;
- (id)initWithData:(id)arg1 name:(id)arg2 fileName:(id)arg3 contentType:(id)arg4;
- (void)setPostData:(id)arg1 name:(id)arg2 fileName:(id)arg3 contentType:(id)arg4;
- (id)contentBoundaryString;
- (id)contentInfoString;
- (id)contentData;
- (id)finalPostData;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (BOOL)shouldUseStreamToSendData;
- (unsigned long long)dataSize;
- (id)createInputStreamForPost;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void).cxx_destruct;
- (int)dataPostType;
- (void)setDataPostType:(int)arg1;
- (BOOL)dataReady;
- (void)setDataReady:(BOOL)arg1;
- (long long)randomString;
- (void)setRandomString:(long long)arg1;
- (id)data;
- (id)name;
- (id)fileName;
- (id)contentType;
@end

