@interface OMJTemplateBuildResult : NSObject
{
    BOOL _usingBlankTemplate; // +0x8
    NSString * _templateID; // +0x10
    OMJMusicInfo * _seletecedMusicInfo; // +0x18
    NSArray * _templateMusicInfos; // +0x20
    NSArray * _recommendedMusicInfos; // +0x28
    OMJID * _resultID; // +0x30
}
- (id)initWithBackingResult:(const void *)arg1;
- (id)description;
- (id)templateID;
- (BOOL)usingBlankTemplate;
- (id)seletecedMusicInfo;
- (id)templateMusicInfos;
- (id)recommendedMusicInfos;
- (id)resultID;
- (void).cxx_destruct;
@end
