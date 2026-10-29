@interface WCCanvasComponentReportUrlInfo : MMObject
{
    unsigned int _needDownload; // +0x8
    NSString * _urlMd5; // +0x10
}
+ (id)infoWithUrlString:(id)arg1 needDownload:(BOOL)arg2;
- (id)dictionaryRepresentation;
- (id)urlMd5;
- (void)setUrlMd5:(id)arg1;
- (unsigned int)needDownload;
- (void)setNeedDownload:(unsigned int)arg1;
- (void).cxx_destruct;
@end
