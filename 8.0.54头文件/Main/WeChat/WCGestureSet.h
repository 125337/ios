@interface WCGestureSet : MMObject
{
    BOOL _isStandardized; // +0x8
    WCGestureVector * _vector; // +0x10
    NSMutableArray * _pointArray; // +0x18
}
+ (id)gestureSetWithPoints:(id)arg1;
+ (id)gestureSet;
- (id)init;
- (id)pointArray;
- (void)addGesturePoint:(id)arg1;
- (void)removeAllGesturePoints;
- (long long)countPoints;
- (id)pointAtIndex:(long long)arg1;
- (void)setPoint:(id)arg1 atIndex:(long long)arg2;
- (id)getPoints;
- (id)getVector;
- (void)setVector:(id)arg1;
- (BOOL)isStandardized;
- (id)vector;
- (void)setPointArray:(id)arg1;
- (void).cxx_destruct;
@end

