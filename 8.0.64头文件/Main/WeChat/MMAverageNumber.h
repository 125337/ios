@interface MMAverageNumber : NSObject
{
    int _numValue; // +0x8
    double _total; // +0x10
}
- (void)addOneNumber:(id)arg1;
- (id)description;
- (int)numValue;
- (void)setNumValue:(int)arg1;
- (double)total;
- (void)setTotal:(double)arg1;
@end
