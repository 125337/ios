@interface MMWebPrefetchDownloadTaskRequest : MMObject
{
    BOOL _isUsingSingtonVM; // +0x8
    unsigned int _requestId; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _subScene; // +0x14
    NSString * _url; // +0x18
    NSDictionary * _requestHeader; // +0x20
    NSString * _pathForRespHeader; // +0x28
    NSString * _pathForRespData; // +0x30
}
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)requestId;
- (void)setRequestId:(unsigned int)arg1;
- (id)requestHeader;
- (void)setRequestHeader:(id)arg1;
- (id)pathForRespHeader;
- (void)setPathForRespHeader:(id)arg1;
- (id)pathForRespData;
- (void)setPathForRespData:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)subScene;
- (void)setSubScene:(unsigned int)arg1;
- (BOOL)isUsingSingtonVM;
- (void)setIsUsingSingtonVM:(BOOL)arg1;
- (void).cxx_destruct;
@end
