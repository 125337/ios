@interface MMEmoticonLiteAppPageContextBase : NSObject <MMEmoticonLiteAppPageContext>
{
    BOOL isPresentModal; // +0x8
    BOOL forceFullScreen; // +0x9
    BOOL useHalfScreen; // +0xa
    BOOL hideBgMask; // +0xb
    BOOL isTransparent; // +0xc
    int emotionScene; // +0x10
    unsigned long long enterTimeInMs; // +0x18
    id /* block */ openFailCallback; // +0x20
}
- (id)init;
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (double)portraitHeightPercent;
- (double)landscapeHeightPercent;
- (int)emotionScene;
- (void)setEmotionScene:(int)arg1;
- (BOOL)isPresentModal;
- (void)setIsPresentModal:(BOOL)arg1;
- (BOOL)forceFullScreen;
- (void)setForceFullScreen:(BOOL)arg1;
- (unsigned long long)enterTimeInMs;
- (void)setEnterTimeInMs:(unsigned long long)arg1;
- (id /* block */)openFailCallback;
- (void)setOpenFailCallback:(id /* block */)arg1;
- (BOOL)useHalfScreen;
- (void)setUseHalfScreen:(BOOL)arg1;
- (BOOL)hideBgMask;
- (void)setHideBgMask:(BOOL)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (void).cxx_destruct;
@end
