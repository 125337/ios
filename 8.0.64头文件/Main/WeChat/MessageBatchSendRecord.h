@interface MessageBatchSendRecord : MMObject <PBCoding>
{
    NSMutableArray * _localIdArr; // +0x8
    unsigned long long _scene; // +0x10
}
+ (void)PBArrayAdd_localIdArr;
+ (void)PBArrayAdd_scene;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)localIdArr;
- (void)setLocalIdArr:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
