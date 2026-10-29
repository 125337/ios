@interface DownloadVoiceReporter : NSObject
{
    unsigned long long _startTime; // +0x8
}
+ (id)reporter;
- (void)reportDownloadStart:(id)arg1;
- (void)reportDownloadEnd:(id)arg1 ret:(int)arg2;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
@end

