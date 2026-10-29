@interface LocalSearchClassConfig : NSObject
{
    Class _objClass; // +0x8
    LSTargetGenerator * _nsKeyGenerator; // +0x10
    NSMutableArray * _arrMatchConfig; // +0x18
}
+ (id)makeDefaultClassConfig:(Class)arg1;
+ (id)makeDefaultConfigOfContact;
+ (id)makeDefaultConfigOfAddressBookFriend;
+ (id)makeDefaultConfigOfMailContact;
+ (id)makeDefaultConfigOfFTSFeatureItem;
- (Class)objClass;
- (void)setObjClass:(Class)arg1;
- (id)nsKeyGenerator;
- (void)setNsKeyGenerator:(id)arg1;
- (id)arrMatchConfig;
- (void)setArrMatchConfig:(id)arg1;
- (void).cxx_destruct;
@end

