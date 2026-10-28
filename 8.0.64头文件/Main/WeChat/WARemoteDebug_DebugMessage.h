@interface WARemoteDebug_DebugMessage : WXPBGeneratedMessage
+ (id)CompressData:(id)arg1;
+ (id)DecompressData:(id)arg1 decompressSize:(unsigned int)arg2;
+ (void)initialize;
- (void)compressData:(id)arg1 supportCompressAlgo:(unsigned int)arg2;
- (id)decompressDataWithSupportCompressAlgo:(unsigned int)arg1;
@end
