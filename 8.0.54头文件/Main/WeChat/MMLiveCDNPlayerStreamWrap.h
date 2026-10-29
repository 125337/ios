@interface MMLiveCDNPlayerStreamWrap : NSObject
{
    BOOL _switchByUser; // +0x8
    NSString * _url; // +0x10
    NSString * _streamId; // +0x18
    NSString * _originalUrl; // +0x20
    MMLiveCdnStreamInfo * _cdnStreamInfo; // +0x28
    unsigned long long _switchTimestamp; // +0x30
}
- (BOOL)isSameStreamWithPlayingUrl:(id)arg1;
- (BOOL)isSameStreamWithOriginalUrl:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)originalUrl;
- (void)setOriginalUrl:(id)arg1;
- (id)cdnStreamInfo;
- (void)setCdnStreamInfo:(id)arg1;
- (unsigned long long)switchTimestamp;
- (void)setSwitchTimestamp:(unsigned long long)arg1;
- (BOOL)switchByUser;
- (void)setSwitchByUser:(BOOL)arg1;
- (void).cxx_destruct;
@end

