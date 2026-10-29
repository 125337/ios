@interface WCProgressViewBaseAction : NSObject
{
    WCProgressViewHelper * _helper; // +0x8
    double _currentProgress; // +0x10
    NSString * _displayText; // +0x18
}
- (id)helper;
- (void)setHelper:(id)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
- (id)displayText;
- (void)setDisplayText:(id)arg1;
- (void).cxx_destruct;
@end

