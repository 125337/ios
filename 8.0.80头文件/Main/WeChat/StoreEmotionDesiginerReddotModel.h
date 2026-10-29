@interface StoreEmotionDesiginerReddotModel : MMObject <PBCoding>
{
    unsigned int _reddotTimeStamp; // +0x8
    NSString * _designerUin; // +0x10
    NSMutableDictionary * _pidsWithReddotStatus; // +0x18
}
+ (void)PBArrayAdd_designerUin;
+ (void)PBArrayAdd_reddotTimeStamp;
+ (void)PBArrayAdd_pidsWithReddotStatus;
+ (void)initialize;
+ (id)getSaveRootDir;
+ (id)getSavePath:(id)arg1;
- (id)getPBPropertyTable;
- (id)designerUin;
- (void)setDesignerUin:(id)arg1;
- (unsigned int)reddotTimeStamp;
- (void)setReddotTimeStamp:(unsigned int)arg1;
- (id)pidsWithReddotStatus;
- (void)setPidsWithReddotStatus:(id)arg1;
- (void).cxx_destruct;
@end
