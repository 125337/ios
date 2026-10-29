@interface XImageYUVWrapper : NSObject
{
    long long _format; // +0x8
    XImage * _yPanel; // +0x10
    XImage * _uPanel; // +0x18
    XImage * _vPanel; // +0x20
    XImage * _uvPanel; // +0x28
}
+ (id)convertPixelBufferToYUVPanel:(__CVBuffer *)arg1;
+ (long long)getFrameFormatFromPixelBuffer:(__CVBuffer *)arg1;
- (long long)format;
- (void)setFormat:(long long)arg1;
- (id)yPanel;
- (void)setYPanel:(id)arg1;
- (id)uPanel;
- (void)setUPanel:(id)arg1;
- (id)vPanel;
- (void)setVPanel:(id)arg1;
- (id)uvPanel;
- (void)setUvPanel:(id)arg1;
- (void).cxx_destruct;
@end

