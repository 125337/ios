@interface MJShootRecordingTimerSwitchItem : NSObject <MJShootBubbleSwitchItem>
{
    NSString * _title; // +0x8
    unsigned long long _mode; // +0x10
}
- (id)initWithTitle:(id)arg1 mode:(unsigned long long)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

