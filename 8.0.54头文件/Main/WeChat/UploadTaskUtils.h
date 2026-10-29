@interface UploadTaskUtils : NSObject
+ (BOOL)isUploadSameMsg:(id)arg1 compare:(id)arg2;
+ (id)findRecordDataInList:(id)arg1 WithLocalDataId:(id)arg2;
+ (void)clearLocalProperty:(id)arg1;
+ (id)getTempFilePath:(id)arg1 data:(id)arg2;
+ (id)getFilePath:(id)arg1 data:(id)arg2;
+ (id)getMiddleFilePath:(id)arg1 data:(id)arg2;
+ (id)getThumbFilePath:(id)arg1 data:(id)arg2;
+ (int)getCdnFileTypeWithDataField:(id)arg1;
+ (BOOL)shouldUseCgiUpload:(id)arg1 data:(id)arg2;
@end

