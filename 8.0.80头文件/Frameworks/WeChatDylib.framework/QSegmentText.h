@interface QSegmentText : NSObject
{
    int _startIndex; // +0x8
    int _endIndex; // +0xc
    NSString * _name; // +0x10
}
- (int)startIndex;
- (void)setStartIndex:(int)arg1;
- (int)endIndex;
- (void)setEndIndex:(int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void).cxx_destruct;
@end
