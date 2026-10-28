@interface GameCenterMsgReportInfo : NSObject
{
    unsigned int _msgSubTye; // +0x8
    unsigned int _interactive; // +0xc
    NSString * _noticeId; // +0x10
    NSString * _businessData; // +0x18
    NSString * _extData; // +0x20
}
- (unsigned int)msgSubTye;
- (void)setMsgSubTye:(unsigned int)arg1;
- (unsigned int)interactive;
- (void)setInteractive:(unsigned int)arg1;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (id)businessData;
- (void)setBusinessData:(id)arg1;
- (id)extData;
- (void)setExtData:(id)arg1;
- (void).cxx_destruct;
@end
