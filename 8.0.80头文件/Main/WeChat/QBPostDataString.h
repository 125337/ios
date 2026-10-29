@interface QBPostDataString : NSObject <QBPostDataProtocol>
{
    int _dataPostType; // +0x8
    NSString * _contentBoundaryString; // +0x10
    NSString * _contentInfoString; // +0x18
    BOOL _dataReady; // +0x20
    long long _randomString; // +0x28
    unsigned long long _streamRead; // +0x30
    NSData * _streamData; // +0x38
    NSString * _dataString; // +0x40
    NSString * _name; // +0x48
    NSString * _encodeType; // +0x50
}
- (id)initWithDataString:(id)arg1 name:(id)arg2 encodeType:(id)arg3;
- (void)setDataString:(id)arg1 name:(id)arg2 encodeType:(id)arg3;
- (void)setDataPostType:(int)arg1;
- (int)dataPostType;
- (id)contentData;
- (id)contentBoundaryString;
- (id)contentInfoString;
- (id)finalPostData;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (BOOL)shouldUseStreamToSendData;
- (unsigned long long)dataSize;
- (id)createInputStreamForPost;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)dataReady;
- (void)setDataReady:(BOOL)arg1;
- (long long)randomString;
- (void)setRandomString:(long long)arg1;
- (id)dataString;
- (id)name;
- (id)encodeType;
@end
