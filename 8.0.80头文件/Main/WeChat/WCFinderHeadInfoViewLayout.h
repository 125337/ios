@interface WCFinderHeadInfoViewLayout : NSObject
{
    double _leftMargin; // +0x8
    double _downOffset; // +0x10
    double _upOffset; // +0x18
    long long _fontSize; // +0x20
    long long _smallFontSize; // +0x28
    long long _currentFontSize; // +0x30
    CGSize _size; // +0x38
}
- (id)init;
- (id)initWithLeftMargin:(double)arg1;
- (id)initWithLeftMargin:(double)arg1 Size:(CGSize)arg2;
- (id)initWithLeftMargin:(double)arg1 UpOffset:(double)arg2 DownOffset:(double)arg3;
- (double)leftMargin;
- (void)setLeftMargin:(double)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (double)downOffset;
- (void)setDownOffset:(double)arg1;
- (double)upOffset;
- (void)setUpOffset:(double)arg1;
- (long long)fontSize;
- (void)setFontSize:(long long)arg1;
- (long long)smallFontSize;
- (void)setSmallFontSize:(long long)arg1;
- (long long)currentFontSize;
- (void)setCurrentFontSize:(long long)arg1;
@end
