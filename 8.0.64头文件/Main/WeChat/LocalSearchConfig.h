@interface LocalSearchConfig : NSObject
{
    NSMutableArray * _arrClassConfig; // +0x8
}
+ (id)getSharedDefaultConfig;
+ (void)genMainSearchContent:(id *)arg1 andPinyinSearchContent:(id *)arg2 withTarget:(id)arg3;
+ (id)getContactMatchTypeConfig:(int)arg1 withContact:(id)arg2 isPinyin:(BOOL)arg3;
+ (id)joinSearchContentFromArr:(id)arg1 withSeperator:(id)arg2;
- (id)description;
- (id)arrClassConfig;
- (void)setArrClassConfig:(id)arg1;
- (void).cxx_destruct;
@end
