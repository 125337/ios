@interface MMCameraTemplatePanelReportObj : NSObject
{
    unsigned long long _captureScene; // +0x8
    unsigned long long _finderPostEnterScene; // +0x10
}
- (unsigned long long)captureScene;
- (void)setCaptureScene:(unsigned long long)arg1;
- (unsigned long long)finderPostEnterScene;
- (void)setFinderPostEnterScene:(unsigned long long)arg1;
@end

