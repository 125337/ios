@interface MPPageTemplateInfoContainer : NSObject <PBCoding>
{
    unsigned int _checkInterval; // +0x8
    NSMutableDictionary * _templateInfoDic; // +0x10
}
+ (void)PBArrayAdd_templateInfoDic;
+ (void)PBArrayAdd_checkInterval;
+ (void)initialize;
+ (id)loadContainerFromPath:(id)arg1;
+ (BOOL)saveContainer:(id)arg1 toPath:(id)arg2;
- (id)getPBPropertyTable;
- (id)description;
- (id)getTemplateInfoWithType:(unsigned int)arg1;
- (void)setTemplateInfo:(id)arg1;
- (id)templateInfoDic;
- (void)setTemplateInfoDic:(id)arg1;
- (unsigned int)checkInterval;
- (void)setCheckInterval:(unsigned int)arg1;
- (void).cxx_destruct;
@end

