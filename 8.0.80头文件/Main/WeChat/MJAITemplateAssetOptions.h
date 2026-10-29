@interface MJAITemplateAssetOptions : NSObject
{
    BOOL _skipAssetPreparation; // +0x8
    short _cdnAppType; // +0xa
    int _cdnFileType; // +0xc
    unsigned long long _scene; // +0x10
    Class _AIGeneratorClass; // +0x18
    double _AIGeneratorTimeoutInterval; // +0x20
}
+ (id)optionsForScene:(unsigned long long)arg1;
- (id)init;
- (void)_initForMoments;
- (void)_initForFinder;
- (unsigned long long)scene;
- (short)cdnAppType;
- (void)setCdnAppType:(short)arg1;
- (int)cdnFileType;
- (void)setCdnFileType:(int)arg1;
- (Class)AIGeneratorClass;
- (void)setAIGeneratorClass:(Class)arg1;
- (double)AIGeneratorTimeoutInterval;
- (void)setAIGeneratorTimeoutInterval:(double)arg1;
- (BOOL)skipAssetPreparation;
- (void)setSkipAssetPreparation:(BOOL)arg1;
@end
