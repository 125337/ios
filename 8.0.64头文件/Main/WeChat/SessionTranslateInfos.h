@interface SessionTranslateInfos : MMObject <PBCoding>
{
    NSString * _userName; // +0x8
    NSMutableArray * _arrTransInfo; // +0x10
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_arrTransInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)arrTransInfo;
- (void)setArrTransInfo:(id)arg1;
- (void).cxx_destruct;
@end
