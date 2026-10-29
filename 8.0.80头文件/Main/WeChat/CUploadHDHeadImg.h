@interface CUploadHDHeadImg : MMObject <PBMessageObserverDelegate>
{
    NSString * m_nsFile; // +0x8
    CUploadHDHeadImgWrap * m_currTask; // +0x10
    id <HeadImgDelegate> delegate; // +0x18
}
+ (id)generateHDHeadData:(id)arg1;
+ (id)generateHDHeadDataLow:(id)arg1;
+ (id)generateNormalHeadImage:(id)arg1;
+ (id)generateNormalHeadData:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)reset;
- (BOOL)uploadTask:(id)arg1;
- (BOOL)uploadTaskWithCgi:(id)arg1;
- (BOOL)uploadTaskWithCdn:(id)arg1;
- (void)sendHeadImgRequestWithTaskInfo:(id)arg1 uploadTask:(id)arg2;
- (unsigned int)InternalUpload:(id)arg1 imgType:(unsigned int)arg2 qualityType:(unsigned int)arg3;
- (unsigned int)InternalUpload:(id)arg1 imgType:(unsigned int)arg2 qualityType:(unsigned int)arg3 userName:(id)arg4 cgiFunc:(unsigned int)arg5;
- (void)stopUpload;
- (unsigned int)uploadHDImg:(id)arg1 imgType:(unsigned int)arg2;
- (unsigned int)uploadHDImg:(id)arg1 imgType:(unsigned int)arg2 qualityType:(unsigned int)arg3;
- (unsigned int)uploadHDImg:(id)arg1 imgType:(unsigned int)arg2 forUserName:(id)arg3;
- (BOOL)IsUploadIngImg;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onUploadComplete:(id)arg1;
- (void)onUploadPartFail:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
