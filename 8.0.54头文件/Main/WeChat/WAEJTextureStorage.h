@interface WAEJTextureStorage : NSObject
{
    NSMutableDictionary * params; // +0x8
    unsigned int textureId; // +0x10
    BOOL bCustomTexture; // +0x14
    BOOL immutable; // +0x15
    double lastBound; // +0x18
    EAGLContext * glContext; // +0x20
}
- (id)init;
- (id)initImmutable;
- (id)initWithCustomTexture:(unsigned int)arg1 immutable:(BOOL)arg2;
- (void)dealloc;
- (void)initParamsDict;
- (void)bindToTarget:(unsigned int)arg1 withParams:(id)arg2;
- (double)lastBound;
- (unsigned int)textureId;
- (BOOL)immutable;
@end

