@interface MiniTaskItemBatchActionInfo : NSObject
{
    unsigned long long _action; // +0x8
    long long _itemCount; // +0x10
    NSString * _detail; // +0x18
}
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (long long)itemCount;
- (void)setItemCount:(long long)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (void).cxx_destruct;
@end
