@interface WCFinderJSAPIPostParams : NSObject
{
    unsigned int _fileSize; // +0x8
    unsigned int _bitrate; // +0xc
    unsigned int _waitType; // +0x10
    NSString * _clientId; // +0x18
    NSString * _mediaUrl; // +0x20
    NSString * _thumbUrl; // +0x28
    double _mediaWidth; // +0x30
    double _mediaHeight; // +0x38
    double _duration; // +0x40
    NSString * _fromAppId; // +0x48
    unsigned long long _fromAppSource; // +0x50
    NSString * _fromAppExtInfo; // +0x58
    NSString * _coverUrl; // +0x60
}
- (BOOL)isValid;
- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (id)mediaUrl;
- (void)setMediaUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (unsigned int)bitrate;
- (void)setBitrate:(unsigned int)arg1;
- (double)mediaWidth;
- (void)setMediaWidth:(double)arg1;
- (double)mediaHeight;
- (void)setMediaHeight:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)fromAppId;
- (void)setFromAppId:(id)arg1;
- (unsigned long long)fromAppSource;
- (void)setFromAppSource:(unsigned long long)arg1;
- (id)fromAppExtInfo;
- (void)setFromAppExtInfo:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (unsigned int)waitType;
- (void)setWaitType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
