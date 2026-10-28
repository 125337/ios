@interface WCAdFullCardGestureInfo : NSObject <NSCoding>
{
    BOOL _isSimpleGesture; // +0x8
    BOOL _breakFrameFlag; // +0x9
    unsigned long long _startTime; // +0x10
    unsigned long long _endTime; // +0x18
    NSString * _points; // +0x20
    double _distance; // +0x28
    NSString * _color; // +0x30
    unsigned long long _validDistance; // +0x38
    unsigned long long _radius; // +0x40
    unsigned long long _pointsBasicWidth; // +0x48
    unsigned long long _pointsBasicHeight; // +0x50
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getLineColor;
- (BOOL)isValid;
- (id)getTargetCGPointsArray;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (id)points;
- (void)setPoints:(id)arg1;
- (double)distance;
- (void)setDistance:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (BOOL)isSimpleGesture;
- (void)setIsSimpleGesture:(BOOL)arg1;
- (unsigned long long)validDistance;
- (void)setValidDistance:(unsigned long long)arg1;
- (BOOL)breakFrameFlag;
- (void)setBreakFrameFlag:(BOOL)arg1;
- (unsigned long long)radius;
- (void)setRadius:(unsigned long long)arg1;
- (unsigned long long)pointsBasicWidth;
- (void)setPointsBasicWidth:(unsigned long long)arg1;
- (unsigned long long)pointsBasicHeight;
- (void)setPointsBasicHeight:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
