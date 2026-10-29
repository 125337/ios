@interface ChatSearchPatternConfig : NSObject
{
    int _timeout; // +0x8
    int _timevalSec; // +0xc
    NSArray * _blackPatternList; // +0x10
    NSArray * _patternList; // +0x18
}
- (id)blackPatternList;
- (void)setBlackPatternList:(id)arg1;
- (id)patternList;
- (void)setPatternList:(id)arg1;
- (int)timeout;
- (void)setTimeout:(int)arg1;
- (int)timevalSec;
- (void)setTimevalSec:(int)arg1;
- (void).cxx_destruct;
@end
