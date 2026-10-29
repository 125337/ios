@interface WCPrivacyPolicyData : NSObject <PBCoding>
{
    unsigned int _updateTime; // +0x8
    NSString * _birthday; // +0x10
}
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_birthday;
+ (void)initialize;
+ (id)rootPath;
+ (id)filePathWithUserName:(id)arg1;
+ (id)loadDataWithUserName:(id)arg1;
+ (void)saveBirthday:(id)arg1 userName:(id)arg2;
+ (void)testClearAllData;
- (id)getPBPropertyTable;
- (id)jsonDesc;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)birthday;
- (void)setBirthday:(id)arg1;
- (void).cxx_destruct;
@end

