@interface EmbedExcerptReportItem : NSObject
{
    unsigned int _bizUin; // +0x8
    unsigned int _appMsgId; // +0xc
    unsigned int _itemIdx; // +0x10
    unsigned int _beginOffset; // +0x14
    unsigned int _endOffset; // +0x18
    unsigned int _scene; // +0x1c
    unsigned int _opType; // +0x20
    NSString * _contentMd5; // +0x28
}
- (void)report;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (unsigned int)appMsgId;
- (void)setAppMsgId:(unsigned int)arg1;
- (unsigned int)itemIdx;
- (void)setItemIdx:(unsigned int)arg1;
- (unsigned int)beginOffset;
- (void)setBeginOffset:(unsigned int)arg1;
- (unsigned int)endOffset;
- (void)setEndOffset:(unsigned int)arg1;
- (id)contentMd5;
- (void)setContentMd5:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
