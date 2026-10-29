@interface DownloadVoiceCommon : NSObject
+ (BOOL)WriteAudioFile:(id)arg1 LocalID:(unsigned int)arg2 Offset:(unsigned int)arg3 Len:(unsigned int)arg4 Data:(id)arg5;
+ (id)parseVoiceXml:(id)arg1;
@end

