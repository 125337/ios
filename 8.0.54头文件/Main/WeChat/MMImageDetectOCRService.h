@interface MMImageDetectOCRService : MMUserService <PBMessageObserverDelegate, MMImageDetectUploaderDelegate, MMServiceProtocol>
{
    BOOL _enableLocalOCR; // +0x8
    MMImageDetectUploader * _uploader; // +0x10
    NSMutableSet * _cancelSessionIDSet; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startImageUploadAndDetect:(id)arg1;
- (void)cancelImageUploadAndDetect:(unsigned long long)arg1;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)startImageDetectOCR:(id)arg1 detectMediaInfo:(id)arg2;
- (void)handleImageDetectOCR:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)notifyOCRFinish:(id)arg1 resultType:(unsigned int)arg2 jsonStr:(id)arg3 reqKey:(id)arg4;
- (void)notifyOCRFinish:(id)arg1 resultType:(unsigned int)arg2 jsonStr:(id)arg3 reqKey:(id)arg4 ocrResultType:(long long)arg5;
- (BOOL)openLocalOCRTest;
- (BOOL)enableImageLocalOCR:(int)arg1;
- (BOOL)checkLocalImageOCR:(id)arg1 errCode:(int)arg2;
- (void)doLocalImageOCR:(id)arg1 imagePath:(id)arg2;
- (id)genLocalOCRReqKey;
- (id)buildLocalOCRResultJson:(id)arg1 reqKey:(id)arg2;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (id)cancelSessionIDSet;
- (void)setCancelSessionIDSet:(id)arg1;
- (BOOL)enableLocalOCR;
- (void)setEnableLocalOCR:(BOOL)arg1;
- (void).cxx_destruct;
@end

