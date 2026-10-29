@interface MMResourceDownloadTaskContext : NSObject
{
    unsigned int _resType; // +0x8
    unsigned int _resSubType; // +0xc
    unsigned int _version; // +0x10
    unsigned int _priority; // +0x14
    MMResDownloadUrlInfo * _downloadUrlInfo; // +0x18
    MMResDownloadInfo * _downloadInfo; // +0x20
}
- (unsigned int)resType;
- (void)setResType:(unsigned int)arg1;
- (unsigned int)resSubType;
- (void)setResSubType:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)priority;
- (void)setPriority:(unsigned int)arg1;
- (id)downloadUrlInfo;
- (void)setDownloadUrlInfo:(id)arg1;
- (id)downloadInfo;
- (void)setDownloadInfo:(id)arg1;
- (void).cxx_destruct;
@end

