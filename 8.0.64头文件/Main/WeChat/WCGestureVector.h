@interface WCGestureVector : MMObject
{
    NSMutableArray * _doubleValueArray; // +0x8
}
+ (id)vector;
- (id)doubleValueArray;
- (void)clear;
- (long long)getGSVectorSize;
- (void)addDouble:(double)arg1;
- (double)doubleAtIndex:(long long)arg1;
- (void)setDouble:(double)arg1 atIndex:(long long)arg2;
- (void)setDoubleValueArray:(id)arg1;
- (void).cxx_destruct;
@end
