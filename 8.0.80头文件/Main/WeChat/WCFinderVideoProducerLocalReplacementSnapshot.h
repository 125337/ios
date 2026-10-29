@interface WCFinderVideoProducerLocalReplacementSnapshot : NSObject
{
    BOOL _usesBuildAndSwitchOperation; // +0x8
    unsigned int _recommendEventType; // +0xc
    MJTemplateMovieSession * _originalSession; // +0x10
    NSString * _templateID; // +0x18
    NSString * _musicID; // +0x20
    NSString * _AIModelType; // +0x28
    NSArray * _originalOMJAssetInfoList; // +0x30
    OMJMovieOptions * _movieOptions; // +0x38
    unsigned long long _recommendMode; // +0x40
    NSString * _recommendScene; // +0x48
    unsigned long long _scene; // +0x50
    double _AIGeneratorTimeoutInterval; // +0x58
    struct _playTimeRange; // +0x60
}
- (id)description;
- (id)originalSession;
- (void)setOriginalSession:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)musicID;
- (void)setMusicID:(id)arg1;
- (id)AIModelType;
- (void)setAIModelType:(id)arg1;
- (id)originalOMJAssetInfoList;
- (void)setOriginalOMJAssetInfoList:(id)arg1;
- (id)movieOptions;
- (void)setMovieOptions:(id)arg1;
- (unsigned long long)recommendMode;
- (void)setRecommendMode:(unsigned long long)arg1;
- (id)recommendScene;
- (void)setRecommendScene:(id)arg1;
- (unsigned int)recommendEventType;
- (void)setRecommendEventType:(unsigned int)arg1;
- (struct)playTimeRange;
- (void)setPlayTimeRange:(struct)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)usesBuildAndSwitchOperation;
- (void)setUsesBuildAndSwitchOperation:(BOOL)arg1;
- (double)AIGeneratorTimeoutInterval;
- (void)setAIGeneratorTimeoutInterval:(double)arg1;
- (void).cxx_destruct;
@end
