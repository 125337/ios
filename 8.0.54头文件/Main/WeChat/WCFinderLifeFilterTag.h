@interface WCFinderLifeFilterTag : NSObject
{
    BOOL _isGroup; // +0x8
    unsigned long long _tagId; // +0x10
    NSString * _wording; // +0x18
    NSArray * _subTags; // +0x20
    NSArray * _groups; // +0x28
    unsigned long long _defaultTagId; // +0x30
    long long _level; // +0x38
    WCFinderLifeFilterTag * _parent; // +0x40
}
- (id)root;
- (id)childs;
- (void)setGroups:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFilterTag:(id)arg1;
- (id)toPath;
- (void)_filledPath:(id)arg1;
- (id)defaultTag;
- (id)defaultTags;
- (id)subTagForId:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)tagId;
- (void)setTagId:(unsigned long long)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)subTags;
- (id)groups;
- (BOOL)isGroup;
- (void)setIsGroup:(BOOL)arg1;
- (unsigned long long)defaultTagId;
- (void)setDefaultTagId:(unsigned long long)arg1;
- (long long)level;
- (void)setLevel:(long long)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (void).cxx_destruct;
@end

