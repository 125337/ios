@interface WCAdPromotionInfo : NSObject <NSCoding>
{
    int _leftTitleType; // +0x8
    long long _startTime; // +0x10
    long long _endTime; // +0x18
    NSString * _barBgColor; // +0x20
    double _barBgAlpha; // +0x28
    NSString * _leftTitle; // +0x30
    NSString * _rightTitle; // +0x38
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)endTime;
- (void)setEndTime:(long long)arg1;
- (id)barBgColor;
- (void)setBarBgColor:(id)arg1;
- (double)barBgAlpha;
- (void)setBarBgAlpha:(double)arg1;
- (int)leftTitleType;
- (void)setLeftTitleType:(int)arg1;
- (id)leftTitle;
- (void)setLeftTitle:(id)arg1;
- (id)rightTitle;
- (void)setRightTitle:(id)arg1;
- (void).cxx_destruct;
@end
