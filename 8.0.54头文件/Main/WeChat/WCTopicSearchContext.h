@interface WCTopicSearchContext : NSObject
{
    long long _sourceType; // +0x8
    long long _sourceScene; // +0x10
    NSString * _sourceSceneId; // +0x18
    NSString * _inputQuery; // +0x20
    unsigned long long _curseLocation; // +0x28
}
- (long long)sourceType;
- (void)setSourceType:(long long)arg1;
- (long long)sourceScene;
- (void)setSourceScene:(long long)arg1;
- (id)sourceSceneId;
- (void)setSourceSceneId:(id)arg1;
- (id)inputQuery;
- (void)setInputQuery:(id)arg1;
- (unsigned long long)curseLocation;
- (void)setCurseLocation:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

