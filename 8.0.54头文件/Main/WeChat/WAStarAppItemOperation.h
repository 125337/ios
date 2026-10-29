@interface WAStarAppItemOperation : MMObject <PBCoding>
{
    unsigned int _operAppType; // +0x8
    unsigned int _preAppType; // +0xc
    unsigned int _nextAppType; // +0x10
    unsigned int _operationType; // +0x14
    unsigned int _operationScene; // +0x18
    NSString * _operUsername; // +0x20
    NSString * _preUsername; // +0x28
    NSString * _nextUsername; // +0x30
}
+ (void)PBArrayAdd_operUsername;
+ (void)PBArrayAdd_operAppType;
+ (void)PBArrayAdd_preUsername;
+ (void)PBArrayAdd_preAppType;
+ (void)PBArrayAdd_nextUsername;
+ (void)PBArrayAdd_nextAppType;
+ (void)PBArrayAdd_operationType;
+ (void)PBArrayAdd_operationScene;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)operUsername;
- (void)setOperUsername:(id)arg1;
- (unsigned int)operAppType;
- (void)setOperAppType:(unsigned int)arg1;
- (id)preUsername;
- (void)setPreUsername:(id)arg1;
- (unsigned int)preAppType;
- (void)setPreAppType:(unsigned int)arg1;
- (id)nextUsername;
- (void)setNextUsername:(id)arg1;
- (unsigned int)nextAppType;
- (void)setNextAppType:(unsigned int)arg1;
- (unsigned int)operationType;
- (void)setOperationType:(unsigned int)arg1;
- (unsigned int)operationScene;
- (void)setOperationScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

