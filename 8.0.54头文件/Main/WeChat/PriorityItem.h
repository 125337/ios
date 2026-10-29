@interface PriorityItem : NSObject
{
    id _item; // +0x8
    long long _priority; // +0x10
}
- (id)initWithItem:(id)arg1 andPriority:(long long)arg2;
- (id)item;
- (void)setItem:(id)arg1;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (void).cxx_destruct;
@end

