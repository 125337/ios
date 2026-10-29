@interface FinderVideoTemplateInfo : WXPBGeneratedMessage <YYModel>
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)cutSameInfoWithTemplateId:(id)arg1 musicId:(id)arg2 type:(unsigned int)arg3;
+ (void)initialize;
- (void)setPreviewPostAllowance:(unsigned int)arg1;
- (unsigned int)previewPostAllowance;
- (BOOL)isCameraPositionNotSet;
- (BOOL)isOriginalSoundSwitchNotSet;
- (BOOL)isClientCameraPositionNotSet;
- (BOOL)canShowTemplateEntry;
@end
