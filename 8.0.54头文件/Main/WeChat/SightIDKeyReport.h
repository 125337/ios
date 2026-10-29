@interface SightIDKeyReport : NSObject
+ (void)reportUploadSize:(unsigned int)arg1;
+ (void)reportUploadResult:(BOOL)arg1;
+ (void)reportDownloadResult:(BOOL)arg1;
+ (void)reportUploadC2CAlbumVideo:(id)arg1 selectedKbpsLevel:(int)arg2 containsWXTag:(BOOL)arg3;
+ (void)reportUploadC2CRecordVideo:(id)arg1;
+ (void)reportUploadSnsAlbumVideo:(id)arg1 containsWXTag:(BOOL)arg2;
+ (void)reportUploadSnsRecordVideo:(id)arg1;
+ (void)reportCompressVideoFailed;
+ (void)reportConcreteABAPrams:(int)arg1 videosize:(CGSize)arg2 inPara:(WxVideoTransParaABA)arg3 abaReportPrams:(id)arg4 VideoEncodeParams:(id)arg5 consumingTime:(long long)arg6 abaControlPrams:(ABAControlParams)arg7;
+ (void)reportSWTransCodingPrams:(ReportStaticPrams)arg1 mEncDecPrams:(EncDecPrams)arg2 mTranscodingPrams:(TranscodingPrams)arg3 Scene:(int)arg4;
@end

