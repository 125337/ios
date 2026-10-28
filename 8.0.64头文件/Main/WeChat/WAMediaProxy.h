@interface WAMediaProxy : NSObject <IWAMediaService>
+ (unsigned int)getVideoDuration:(id)arg1;
+ (id)formatHaoWanUrl:(id)arg1 videoPath:(id)arg2 fileSize:(unsigned int)arg3 thumbImage:(id)arg4;
+ (void)showEditPanel:(id)arg1 parmas:(id)arg2 filePath:(id)arg3 thumbImage:(id)arg4 controller:(id)arg5 callback:(id /* block */)arg6;
+ (id)addTmpResource:(id)arg1 filePath:(id)arg2 thumbImage:(id)arg3;
+ (void)jumpToGameRecordShare:(id)arg1 withWidth:(unsigned int)arg2 withHeight:(unsigned int)arg3 withAppName:(id)arg4 withAppId:(id)arg5 withExtConfigJson:(id)arg6 withShareOptions:(id)arg7 withShareTitle:(id)arg8 withShareDesc:(id)arg9 withAppVersion:(unsigned int)arg10 withAppState:(unsigned int)arg11 withIsDevEdited:(BOOL)arg12 withController:(id)arg13 callbck:(id /* block */)arg14;
+ (BOOL)generateTempLocalID:(id *)arg1 path:(id *)arg2 appID:(id)arg3 fileType:(id)arg4;
@end
