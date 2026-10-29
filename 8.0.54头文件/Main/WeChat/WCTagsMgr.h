@interface WCTagsMgr : NSObject
{
    NSMutableDictionary * _tagsMap; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)registerTagItems:(id)arg1;
- (id)tagItemByType:(long long)arg1;
- (id)tagsMap;
- (void)setTagsMap:(id)arg1;
- (void).cxx_destruct;
@end

