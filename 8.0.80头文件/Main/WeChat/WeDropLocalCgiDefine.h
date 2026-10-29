@interface WeDropLocalCgiDefine : MMObject
{
    NSMutableDictionary * _funcDict; // +0x8
}
+ (Class)requestClsFor:(int)arg1;
+ (Class)responseClsFor:(int)arg1;
+ (id)shared;
- (id)init;
- (void)regiesterFuncs;
- (id)funcDict;
- (void)setFuncDict:(id)arg1;
- (void).cxx_destruct;
@end
