@interface MJAITemplateAssetOptions : NSObject
{
    BOOL _skipAssetPreparation; // +0x8
    int _cdnAppType; // +0xc
    int _cdnFileType; // +0x10
    unsigned long long _scene; // +0x18
    Class _AIGeneratorClass; // +0x20
    double _AIGeneratorTimeoutInterval; // +0x28
}
+ (id)optionsForScene:(unsigned long long)arg1;
- (id)init;
- (void)_initForMoments;
- (void)_initForFinder;
- (unsigned long long)scene;
- (int)cdnAppType;
- (void)setCdnAppType:(int)arg1;
- (int)cdnFileType;
- (void)setCdnFileType:(int)arg1;
- (Class)AIGeneratorClass;
- (void)setAIGeneratorClass:(Class)arg1;
- (double)AIGeneratorTimeoutInterval;
- (void)setAIGeneratorTimeoutInterval:(double)arg1;
- (BOOL)skipAssetPreparation;
- (void)setSkipAssetPreparation:(BOOL)arg1;
@end

