@interface ChatBackgroundItem : NSObject
{
    long long cid; // +0x8
    NSString * basePath; // +0x10
    MMRuleSetList * m_ruleSetList; // +0x18
    long long version; // +0x20
    NSData * thumbData; // +0x28
    long long status; // +0x30
}
+ (id)loadChatBackgroundItemFromPath:(id)arg1;
- (id)keyPaths;
- (id)description;
- (id)fileOfImageNamed:(id)arg1;
- (id)getBackgroundImagePath;
- (id)getThumbPath;
- (long long)getVersion;
- (long long)cid;
- (void)setCid:(long long)arg1;
- (id)basePath;
- (void)setBasePath:(id)arg1;
- (id)m_ruleSetList;
- (void)setM_ruleSetList:(id)arg1;
- (id)thumbData;
- (void)setThumbData:(id)arg1;
- (long long)version;
- (void)setVersion:(long long)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (void).cxx_destruct;
@end
