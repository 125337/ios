@interface WeMagicCardStarterHandle : NSObject <NSCopying>
{
    void * bizName; // +0x8
    void * instanceKey; // +0x18
}
+ (id)handleWithBizName:(id)arg1 instanceKey:(id)arg2;
+ (void)destroyHandle:(id)arg1;
- (id)bizName;
- (id)instanceKey;
- (id)copyWithZone:(void *)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
