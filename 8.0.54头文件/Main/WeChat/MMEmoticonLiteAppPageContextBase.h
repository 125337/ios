@interface MMEmoticonLiteAppPageContextBase : NSObject <MMEmoticonLiteAppPageContext>
{
    BOOL isPresentModal; // +0x8
    long long emotionScene; // +0x10
    unsigned long long enterTimeInMs; // +0x18
    id /* block */ openFailCallback; // +0x20
}
- (id)init;
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (long long)emotionScene;
- (void)setEmotionScene:(long long)arg1;
- (BOOL)isPresentModal;
- (void)setIsPresentModal:(BOOL)arg1;
- (unsigned long long)enterTimeInMs;
- (void)setEnterTimeInMs:(unsigned long long)arg1;
- (id /* block */)openFailCallback;
- (void)setOpenFailCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

