@interface MMLiveTaskReportExtraInfo : NSObject
{
    int _frameRate; // +0x8
    int _category; // +0xc
}
- (int)frameRate;
- (void)setFrameRate:(int)arg1;
- (int)category;
- (void)setCategory:(int)arg1;
@end

