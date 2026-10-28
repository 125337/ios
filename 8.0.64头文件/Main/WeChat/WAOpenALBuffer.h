@interface WAOpenALBuffer : NSObject
{
    unsigned int bufferId; // +0x8
    int format; // +0xc
    int size; // +0x10
    int sampleRate; // +0x14
    NSString * path; // +0x18
    NSString * appId; // +0x20
    float duration; // +0x28
    ALCcontext_struct * _context; // +0x30
}
+ (id)cachedBufferWithPath:(id)arg1 decodeInfo:(id)arg2 appId:(id)arg3;
+ (id)getAudioDataWithData:(id)arg1 filePath:(id)arg2;
- (id)description;
- (id)initWithPath:(id)arg1 decodeInfo:(id)arg2;
- (void)dealloc;
- (unsigned int)bufferId;
- (float)duration;
- (id)appId;
- (void)setAppId:(id)arg1;
- (ALCcontext_struct *)context;
- (void)setContext:(ALCcontext_struct *)arg1;
- (void).cxx_destruct;
@end
