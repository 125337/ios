@interface PAGFileImpl : PAGCompositionImpl
+ (unsigned short)MaxSupportedTagLevel;
+ (BOOL)IsNetWorkPath:(id)arg1;
+ (id)Load:(id)arg1;
+ (id)Load:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)Load:(const void *)arg1 size:(unsigned long long)arg2 path:(id)arg3;
+ (void)LoadAsync:(id)arg1 completionBlock:(id /* block */)arg2;
- (unsigned short)tagLevel;
- (int)numTexts;
- (int)numImages;
- (int)numVideos;
- (id)path;
- (id)getTextData:(int)arg1;
- (void)replaceText:(int)arg1 data:(id)arg2;
- (void)replaceImage:(int)arg1 data:(id)arg2;
- (void)replaceImageByName:(id)arg1 data:(id)arg2;
- (id)getLayersByEditableIndex:(int)arg1 layerType:(long long)arg2;
- (id)getEditableIndices:(long long)arg1;
- (int)timeStretchMode;
- (void)seTimeStretchMode:(int)arg1;
- (void)setDuration:(long long)arg1;
- (id)copyOriginal;
@end

