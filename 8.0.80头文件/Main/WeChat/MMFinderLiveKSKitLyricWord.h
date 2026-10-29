@interface MMFinderLiveKSKitLyricWord : NSObject
{
    BOOL _containLetter; // +0x8
    int _startTime; // +0xc
    int _duration; // +0x10
    NSString * _content; // +0x18
    CGSize _labelSize; // +0x20
}
+ (id)parseLyricWord:(id)arg1 inSentence:(id)arg2;
+ (id)parseLyricWords:(id)arg1 inSentence:(id)arg2;
+ (BOOL)isLyricWordContentCHN:(id)arg1;
- (id)description;
- (int)endTime;
- (int)startTime;
- (void)setStartTime:(int)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (BOOL)containLetter;
- (void)setContainLetter:(BOOL)arg1;
- (CGSize)labelSize;
- (void)setLabelSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
