@interface AddMsgWrap : NSObject <PBCoding>
{
    NSString * _functionMsgId; // +0x8
    NSData * _addMsgData; // +0x10
    NSData * _businessData; // +0x18
    unsigned long long _businessId; // +0x20
}
+ (void)PBArrayAdd_functionMsgId;
+ (void)PBArrayAdd_addMsgData;
+ (void)PBArrayAdd_businessData;
+ (void)PBArrayAdd_businessId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)functionMsgId;
- (void)setFunctionMsgId:(id)arg1;
- (id)addMsgData;
- (void)setAddMsgData:(id)arg1;
- (id)businessData;
- (void)setBusinessData:(id)arg1;
- (unsigned long long)businessId;
- (void)setBusinessId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
