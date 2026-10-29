@interface WCAdFullCardGestureInfo : NSObject <NSCoding>
{
    unsigned long long _startTime; // +0x8
    unsigned long long _endTime; // +0x10
    NSString * _points; // +0x18
    double _distance; // +0x20
    NSString * _color; // +0x28
    NSArray * _pointsList; // +0x30
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getLineColor;
- (BOOL)isValid;
- (id)getTargetCGPointsArrayList;
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
- (id)pointsList;
- (void)setPointsList:(id)arg1;
- (void).cxx_destruct;
@end

