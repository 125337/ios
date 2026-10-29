@interface WAMsgSelectInfo : MMObject
{
    BOOL _selected; // +0x8
    BOOL _expired; // +0x9
    BOOL _downloading; // +0xa
    BOOL _downloadingHD; // +0xb
    BOOL _showPercent; // +0xc
    CMessageWrap * _msg; // +0x10
    double _percent; // +0x18
    MsgDataDownloadLogic * _downloadLogic; // +0x20
}
- (void)stopDownloading;
- (id)msg;
- (void)setMsg:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (BOOL)expired;
- (void)setExpired:(BOOL)arg1;
- (BOOL)downloading;
- (void)setDownloading:(BOOL)arg1;
- (BOOL)downloadingHD;
- (void)setDownloadingHD:(BOOL)arg1;
- (BOOL)showPercent;
- (void)setShowPercent:(BOOL)arg1;
- (double)percent;
- (void)setPercent:(double)arg1;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end

