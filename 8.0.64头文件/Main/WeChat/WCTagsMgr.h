@interface WCTagsMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _tagsMap; // +0x8
    NSMutableDictionary * _customUrlTagsMap; // +0x10
}
- (void)onServiceInit;
- (void)registerTagItems:(id)arg1;
- (id)tagItemByType:(long long)arg1;
- (long long)typeForCustomUrl:(id)arg1;
- (long long)registerCustomUrlTagItem:(id)arg1 size:(CGSize)arg2 configAction:(id /* block */)arg3;
- (id)tagsMap;
- (void)setTagsMap:(id)arg1;
- (id)customUrlTagsMap;
- (void)setCustomUrlTagsMap:(id)arg1;
- (void).cxx_destruct;
@end
