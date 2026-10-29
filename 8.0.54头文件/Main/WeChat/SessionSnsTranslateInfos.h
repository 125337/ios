@interface SessionSnsTranslateInfos : MMObject <PBCoding>
{
    NSString * _userName; // +0x8
    NSMutableDictionary * _dicTransInfo; // +0x10
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_dicTransInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)dicTransInfo;
- (void)setDicTransInfo:(id)arg1;
- (void).cxx_destruct;
@end

