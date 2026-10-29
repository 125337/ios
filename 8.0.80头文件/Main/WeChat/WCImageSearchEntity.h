@interface WCImageSearchEntity : WCSearchEntity
{
    unsigned long long _dataType; // +0x18
    CMessageWrap * _msgWrap; // +0x20
    WCMediaItem * _snsMediaItem; // +0x28
    WCDataItem * _snsItem; // +0x30
    unsigned long long _chatType; // +0x38
    WCImageSearchReportModel * _reporter; // +0x40
    UIImage * _image; // +0x48
    NSString * _messageUUID; // +0x50
    unsigned long long _initiativeSearchSource; // +0x58
}
- (id)init;
- (void)setMsgWrap:(id)arg1;
- (void)setSnsMediaItem:(id)arg1;
- (void)setScene:(unsigned long long)arg1;
- (void)setImage:(id)arg1;
- (id)getMsgTypeImage;
- (id)imagefilePath;
- (void)setReporter:(id)arg1;
- (BOOL)isInitiativeSearch;
- (id)messageUUID;
- (unsigned long long)dataType;
- (void)setDataType:(unsigned long long)arg1;
- (id)msgWrap;
- (id)snsMediaItem;
- (id)snsItem;
- (void)setSnsItem:(id)arg1;
- (unsigned long long)chatType;
- (void)setChatType:(unsigned long long)arg1;
- (id)reporter;
- (id)image;
- (void)setMessageUUID:(id)arg1;
- (unsigned long long)initiativeSearchSource;
- (void)setInitiativeSearchSource:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
