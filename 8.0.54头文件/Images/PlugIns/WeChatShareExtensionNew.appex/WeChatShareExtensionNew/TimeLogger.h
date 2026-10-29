@interface TimeLogger : NSObject
{
    double m_logTime; // +0x8
}
+ (id)sharedInstance;
- (void)recordCurrentTime;
- (void)showTimeCostWithTitle:(id)arg1;
@end

