@interface PAGDecoder : NSObject
{
    PAGDecoderImpl * pagDecoder; // +0x8
}
+ (id)Make:(id)arg1;
+ (id)Make:(id)arg1 maxFrameRate:(float)arg2 scale:(float)arg3;
- (id)initWithDecoder:(id)arg1;
- (void)dealloc;
- (id)impl;
- (long long)width;
- (long long)height;
- (long long)numFrames;
- (float)frameRate;
- (BOOL)checkFrameChanged:(int)arg1;
- (BOOL)copyFrameTo:(void *)arg1 rowBytes:(unsigned long long)arg2 at:(long long)arg3;
- (BOOL)readFrame:(long long)arg1 to:(__CVBuffer *)arg2;
- (id)frameAtIndex:(long long)arg1;
@end

