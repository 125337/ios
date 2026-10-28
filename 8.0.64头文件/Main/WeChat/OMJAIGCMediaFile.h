@interface OMJAIGCMediaFile : NSObject
{
    unsigned long long _mediaType; // +0x8
    NSString * _mediaFileURL; // +0x10
}
- (id)initWithMediaType:(unsigned long long)arg1 mediaFileURL:(id)arg2;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (id)mediaFileURL;
- (void)setMediaFileURL:(id)arg1;
- (void).cxx_destruct;
@end
