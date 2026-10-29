@interface MJTemplateMediaResource : NSObject
{
    unsigned long long _mediaType; // +0x8
    NSString * _mediaUrl; // +0x10
    NSString * _mediaId; // +0x18
    NSString * _mediaFileMd5; // +0x20
}
- (id)initWithResource:(id)arg1;
- (id)description;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (id)mediaUrl;
- (void)setMediaUrl:(id)arg1;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (id)mediaFileMd5;
- (void)setMediaFileMd5:(id)arg1;
- (void).cxx_destruct;
@end

