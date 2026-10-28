@interface MMEmoticonLiteAppPageContextBase : NSObject <MMEmoticonLiteAppPageContext>
{
    BOOL isPresentModal; // +0x8
    BOOL useHalfScreen; // +0x9
    int emotionScene; // +0xc
    unsigned long long enterTimeInMs; // +0x10
    id /* block */ openFailCallback; // +0x18
}
- (id)init;
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (unsigned long long)halfScreenHeight;
- (int)emotionScene;
- (void)setEmotionScene:(int)arg1;
- (BOOL)isPresentModal;
- (void)setIsPresentModal:(BOOL)arg1;
- (unsigned long long)enterTimeInMs;
- (void)setEnterTimeInMs:(unsigned long long)arg1;
- (id /* block */)openFailCallback;
- (void)setOpenFailCallback:(id /* block */)arg1;
- (BOOL)useHalfScreen;
- (void)setUseHalfScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end
