@interface MPChannelGetEntryDataReq : MMObject
{
    unsigned int _scene; // +0x8
    NSString * _syncBuffer; // +0x10
    NSString * _bizUsername; // +0x18
    NSString * _videoPageUrl; // +0x20
}
- (id)syncBuffer;
- (void)setSyncBuffer:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)videoPageUrl;
- (void)setVideoPageUrl:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

