@interface StrangerContactHeadImageData : MMObject <PBCoding>
{
    NSMutableDictionary * _dicContactUserNameHeadImagUrl; // +0x8
    NSMutableArray * _arrContactUserName; // +0x10
}
+ (void)PBArrayAdd_dicContactUserNameHeadImagUrl;
+ (void)PBArrayAdd_arrContactUserName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)dicContactUserNameHeadImagUrl;
- (void)setDicContactUserNameHeadImagUrl:(id)arg1;
- (id)arrContactUserName;
- (void)setArrContactUserName:(id)arg1;
- (void).cxx_destruct;
@end
