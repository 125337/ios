@interface Range : NSObject
{
    int _start; // +0x8
    int _end; // +0xc
}
+ (id)all;
- (id)init;
- (id)initWithStart:(int)arg1 end:(int)arg2;
- (id)initWithVals:(id)arg1;
- (void)set:(id)arg1;
- (int)size;
- (BOOL)empty;
- (id)intersection:(id)arg1;
- (id)shift:(int)arg1;
- (id)clone;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (int)start;
- (void)setStart:(int)arg1;
- (int)end;
- (void)setEnd:(int)arg1;
@end
