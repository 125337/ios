@interface ChatTimeNodeRightButtonInfo : NSObject
{
    BOOL _hasRightButton; // +0x8
    NSString * _rightButtonStr; // +0x10
    ReaderMessageFolder * _messageFolder; // +0x18
    TemplateReaderMessageFolder * _templateMessageFolder; // +0x20
}
- (BOOL)hasRightButton;
- (void)setHasRightButton:(BOOL)arg1;
- (id)rightButtonStr;
- (void)setRightButtonStr:(id)arg1;
- (id)messageFolder;
- (void)setMessageFolder:(id)arg1;
- (id)templateMessageFolder;
- (void)setTemplateMessageFolder:(id)arg1;
- (void).cxx_destruct;
@end

