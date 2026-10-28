@interface OCRTransCdnUploadContext : NSObject
{
    unsigned int _cgiType; // +0x8
    unsigned int _sessionId32; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _imageDataLength; // +0x14
    unsigned int _cdnEventID; // +0x18
    unsigned long long _sessionId64; // +0x20
}
- (unsigned int)cgiType;
- (void)setCgiType:(unsigned int)arg1;
- (unsigned int)sessionId32;
- (void)setSessionId32:(unsigned int)arg1;
- (unsigned long long)sessionId64;
- (void)setSessionId64:(unsigned long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)imageDataLength;
- (void)setImageDataLength:(unsigned int)arg1;
- (unsigned int)cdnEventID;
- (void)setCdnEventID:(unsigned int)arg1;
@end
