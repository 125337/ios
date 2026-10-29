@interface PAGDecoderImpl : NSObject
{
    shared_ptr<pag::PAGDecoder> pagDecoder; // +0x8
}
+ (id)Make:(id)arg1 maxFrameRate:(float)arg2 scale:(float)arg3;
- (id)initWithDecoder:(shared_ptr<pag::PAGDecoder>)arg1;
- (shared_ptr<pag::PAGDecoder>)decoder;
- (long long)width;
- (long long)height;
- (long long)numFrames;
- (float)frameRate;
- (BOOL)checkFrameChanged:(int)arg1;
- (BOOL)copyFrameTo:(void *)arg1 rowBytes:(unsigned long long)arg2 at:(long long)arg3;
- (BOOL)readFrame:(long long)arg1 to:(__CVBuffer *)arg2;
- (id)frameAtIndex:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

