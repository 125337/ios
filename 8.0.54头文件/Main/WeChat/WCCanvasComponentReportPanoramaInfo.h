@interface WCCanvasComponentReportPanoramaInfo : WCCanvasComponentReportBasicInfo
{
    unsigned int _swipeCount; // +0x20
    WCCanvasComponentReportUrlInfo * _imgUrlInfo; // +0x28
}
- (id)dictionaryRepresentation;
- (unsigned int)swipeCount;
- (void)setSwipeCount:(unsigned int)arg1;
- (id)imgUrlInfo;
- (void)setImgUrlInfo:(id)arg1;
- (void).cxx_destruct;
@end

