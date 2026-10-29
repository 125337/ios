@interface WAEJSharedTextureCache : NSObject
{
    NSMutableDictionary * textures; // +0x8
    NSMutableData * premultiplyTable; // +0x10
    NSMutableData * unPremultiplyTable; // +0x18
    BOOL isEnterBackground; // +0x20
    NSMutableArray * destroyedTextures; // +0x28
    NSMutableArray * updateTextures; // +0x30
    BOOL _forceReleaseInBg; // +0x38
}
- (id)init;
- (void)releaseStoragesOlderThan:(double)arg1;
- (void)dealloc;
- (id)premultiplyTable;
- (id)unPremultiplyTable;
- (void)addDestroyedTextures:(id)arg1;
- (void)releaseDestroyedTextures;
- (id)textures;
- (BOOL)isEnterBackground;
- (void)setIsEnterBackground:(BOOL)arg1;
- (BOOL)forceReleaseInBg;
- (void)setForceReleaseInBg:(BOOL)arg1;
@end

