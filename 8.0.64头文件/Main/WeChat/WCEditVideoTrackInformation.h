@interface WCEditVideoTrackInformation : NSObject
{
    double _bitrate; // +0x8
    double _framerate; // +0x10
    NSArray * _formatDescriptions; // +0x18
}
- (double)bitrate;
- (void)setBitrate:(double)arg1;
- (double)framerate;
- (void)setFramerate:(double)arg1;
- (id)formatDescriptions;
- (void)setFormatDescriptions:(id)arg1;
- (void).cxx_destruct;
@end
