@interface MJMaterialCacheItem : NSObject <PBCoding>
{
    NSString * _materialID; // +0x8
    unsigned long long _scene; // +0x10
    NSDate * _lastAccessTime; // +0x18
    NSString * _fontName; // +0x20
    NSString * _colorStyleID; // +0x28
    NSString * _animPresetID; // +0x30
}
+ (void)PBArrayAdd_materialID;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_lastAccessTime;
+ (void)PBArrayAdd_fontName;
+ (void)PBArrayAdd_colorStyleID;
+ (void)PBArrayAdd_animPresetID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithMaterialID:(id)arg1 scene:(unsigned long long)arg2 lastAccessTime:(id)arg3;
- (id)initWithMaterialID:(id)arg1 scene:(unsigned long long)arg2 lastAccessTime:(id)arg3 fontName:(id)arg4 colorStyleID:(id)arg5 animPresetID:(id)arg6;
- (id)materialID;
- (void)setMaterialID:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)lastAccessTime;
- (void)setLastAccessTime:(id)arg1;
- (id)fontName;
- (void)setFontName:(id)arg1;
- (id)colorStyleID;
- (void)setColorStyleID:(id)arg1;
- (id)animPresetID;
- (void)setAnimPresetID:(id)arg1;
- (void).cxx_destruct;
@end
