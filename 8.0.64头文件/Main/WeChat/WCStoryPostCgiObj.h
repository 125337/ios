@interface WCStoryPostCgiObj : WCStoryBaseCGIObj
{
    unsigned int _createTime; // +0x8
    id /* block */ _postFailBlock; // +0x10
    id /* block */ _postSuccessBlock; // +0x18
    id /* block */ _postHadRecieveRespBlock; // +0x20
    NSString * _tid; // +0x28
    NSString * _videoMd5; // +0x30
    NSString * _postXml; // +0x38
}
- (id)initWithTaskInfo:(id)arg1;
- (void)onUploadSuccessWithResponse:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)postFailBlock;
- (void)setPostFailBlock:(id /* block */)arg1;
- (id /* block */)postSuccessBlock;
- (void)setPostSuccessBlock:(id /* block */)arg1;
- (id /* block */)postHadRecieveRespBlock;
- (void)setPostHadRecieveRespBlock:(id /* block */)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)videoMd5;
- (void)setVideoMd5:(id)arg1;
- (id)postXml;
- (void)setPostXml:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
