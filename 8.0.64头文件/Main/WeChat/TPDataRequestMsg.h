@interface TPDataRequestMsg : NSObject
{
    int _sequence; // +0x8
    long long _start; // +0x10
    long long _end; // +0x18
    NSString * _fileName; // +0x20
}
- (id)initWithStart:(long long)arg1 end:(long long)arg2;
- (id)description;
- (long long)start;
- (void)setStart:(long long)arg1;
- (long long)end;
- (void)setEnd:(long long)arg1;
- (int)sequence;
- (void)setSequence:(int)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (void).cxx_destruct;
@end
