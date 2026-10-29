@interface FlutterSnsUtil : NSObject
+ (unsigned long long)nativePublishIdForTask:(id)arg1;
+ (BOOL)patchNativeLocalPublishInfo:(void *)arg1 task:(id)arg2;
+ (id)nativeLocalPublishUploadMediaContainers:(id)arg1;
+ (BOOL)fillNativeLocalPublishMediaList:(void *)arg1 task:(id)arg2 publishId:(unsigned long long)arg3;
+ (void *)addNativeLocalPublishUploadMedia:(id)arg1 contentObject:(void *)arg2 publishId:(unsigned long long)arg3 index:(unsigned long long)arg4;
+ (void *)addNativeLocalPublishMediaItem:(id)arg1 contentObject:(void *)arg2 publishId:(unsigned long long)arg3 index:(unsigned long long)arg4;
+ (void)patchNativeLocalPublishUploadLivePhoto:(id)arg1 mediaObj:(void *)arg2 publishId:(unsigned long long)arg3 index:(unsigned long long)arg4;
+ (void)patchNativeLocalPublishMediaItemLivePhoto:(id)arg1 mediaObj:(void *)arg2 publishId:(unsigned long long)arg3 index:(unsigned long long)arg4;
+ (BOOL)contentObjectHasLivePhoto:(void *)arg1;
+ (id)nativeLocalPublishDetailTipJSON:(id)arg1;
+ (id)nativeLocalPublishActionResultJSON:(long long)arg1 actionType:(id)arg2 message:(id)arg3;
+ (BOOL)canPerformUploadFailAction:(id)arg1;
+ (id)nativeLocalPublishOkResultData;
+ (id)nativeLocalPublishErrorResultData:(long long)arg1 desc:(id)arg2;
+ (void)buildNativeLocalPublishInfoWithTask:(id)arg1 completion:(id /* block */)arg2;
+ (void)buildNativeLocalPublishInfoListForUser:(id)arg1 completion:(id /* block */)arg2;
+ (void)buildNativeLocalPublishInfoListWithTasks:(id)arg1 completion:(id /* block */)arg2;
@end
