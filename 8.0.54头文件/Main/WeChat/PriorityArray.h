@interface PriorityArray : NSObject
{
    NSMutableArray * _queue; // +0x8
}
- (id)init;
- (id)top;
- (void)add:(id)arg1 withPriority:(long long)arg2;
- (BOOL)remove:(id)arg1;
- (BOOL)contains:(id)arg1;
- (void).cxx_destruct;
@end

